#include <M5StickCPlus2.h>
#include "Slot.h"

#ifndef _countof
#define _countof(a) (sizeof(a) / sizeof(a[0]))
#endif

#define LOOP_WAIT 30
#define FLUSH_DELAY 100
#define FLUSH_COUNT 3

Slot slots[SLOT_COUNT];
const int symbolIndices[] = { 2, 4, 5, 0, 3, 4, 2, 5, 3, 1, 0};//Column icon display order Each column displays the same icons

enum SlotsState { SLOTS_INIT, SLOTS_START, SLOTS_STOP = SLOT_COUNT + 1, SLOTS_FLUSH };
int state = SLOTS_INIT;//Slot machine state value Set to initial state

//
// setup()//初始化函数
//

void setup() {
   M5.begin();
  M5.Lcd.setRotation(3);
  M5.Lcd.fillScreen(TFT_BLACK);//Set the screen background color to black
  M5.Lcd.setSwapBytes(true);

  Slot::initShadow();//Initialize Shadows
  Slot::setReel(symbolIndices, _countof(symbolIndices));//Setting up the initial carousel
  for (int i = 0; i < SLOT_COUNT; i++) {
    slots[i].init(i, i * SLOT_COUNT);
    slots[i].draw();
  }
}

//
// loop()//main function, the function needs to refresh the slot machine LCD at all times, so there can not be a delay similar to delay_ms
//

void loop() {
  unsigned long tick = millis();//Get the current heartbeat value
  static unsigned long flushTick;
  static int flushCount;

  M5.update();
  if (M5.BtnA.wasPressed()) {//Key Trigger
    if (state == SLOTS_INIT) {//If you're in the initial state, start spinning the slot machine.
      for (int i = 0; i < SLOT_COUNT; i++) {
        slots[i].start();
      }
      state++;
    } else if (state < SLOTS_STOP) {//is on and not in pause, stops a column
      slots[state - 1].stop();
      state++;//Increment to second column
    }
  }
  if (state == SLOTS_STOP) {//The slot machine is in a stopped state, initializing the relevant data to bring the slot machine back to its initial state.
    int symbol = -1;
    bool stopAll = true;
    for (int i = 0; i < SLOT_COUNT; i++) {
      int n = slots[i].getSymbol();
      if (n == -1) {
        stopAll = false;
      } else {
        symbol = (n == symbol || symbol == -1) ? n : -2;
      }
    }
    if (stopAll) {
      if (symbol >= 0) {
        flushTick = tick;
        flushCount = 0;
        state = SLOTS_FLUSH;
      } else {
        state = SLOTS_INIT;
      }
    }
  }
 
  if (state == SLOTS_FLUSH) {//When all columns are stopped
    if (tick >= flushTick + FLUSH_DELAY) {
      flushTick = tick;
      for (int i = 0; i < SLOT_COUNT; i++) {
        slots[i].flush((flushCount & 1) ? TFT_WHITE : TFT_BLUE);//If all columns have the same icon, the background will be blue, otherwise it will be unchanged.
      }
      if (++flushCount >= FLUSH_COUNT * 2) {
        state = SLOTS_INIT;
      }
    }
  }

  for (int i = 0; i < SLOT_COUNT; i++) {//Refresh LCD current screen display
    if (slots[i].update()) {
      slots[i].draw();
    }
  }

  int ms = millis() - tick;
  if (ms < LOOP_WAIT) {
    delay(LOOP_WAIT - ms);
  }
}
