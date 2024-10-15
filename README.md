&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;__Hi👋__，In this section, we're going to have some fun - change the picture of the slot machine! 💡 Doesn't it feel cool? Don't worry, the whole process is very simple and doesn't require advanced programming knowledge. You can add as many pictures as you like to your slot machine as you like, whether it's the classic fruit icon 🍒🍋, any other pattern you like, or even your own creative design! Just follow the steps and you'll be able to give your slot machine a new look, making it more personalized and fun.
Ready to make your slot machine unique? Do it with me! 👩‍💻🎨
# M5StickCPlus2_Slot Project
## Project structure
``` 
│── README.md             # Project description file
│── M5StickCPlus2_slot    # Source code folder
  │── M5StickCPlus2_slot.ino   # Source Code Files
  │── Slot.cpp                 # Slot Function Implementation File
  │── SLot.h                   # Slot function definition file
  │── image                    # Image folder
    │── Ghostface.h                # Ghostface icons
    │── Happy.h                    # Happy icon
    │── Kiss.h                     # Kiss icon
    │── Spectre.h                  # Spectre logo
    │── Think.h                    # Think icon
    │── Vomit.h                    # Vomit icon
    │── slot_symbols.h             # Icon Data
```
## Installation and operation

### precondition
Software dependency: __Arduino IDE__, __VScode__ or __text__, etc.  
Hardware requirements: __USB-C cable__, __M5StickCPlus2__, etc.  
Dependencies: __M5StickCPlus2 library__, __Arduino library__, etc.  
### Installation of dependencies
1、First, let's pick out 1-10 images with a clean, white or transparent background, all perfectly sized at 150x150 pixels.  
  
2、To convert the image into a hexadecimal array in RGB565 format (where each 16-bit unit is 0X0000), we have two options for you! The first method uses Windows and the handy tool Lcdimg2. Here's the process:  

Start by downloading Lcdimg2 (you can find plenty of tutorials online if needed).Set the image resolution to 48x48 (this gives you 4608 hex units in the 0X00 format).We've written a small program that takes those 4608 units and converts them into 2304 hex units in the 0X0000 format, giving you the RGB565 format we need!
  
3、The second option is even cooler—just use ChatGPT! Here's the plan:  Upload your image, and ChatGPT will resize it to 150x150 pixels for you.Then, it will work its magic and output the image as a .C file in RGB565 format, with each pixel in 0X0000 hexadecimal form.Fast, easy, and you get your image converted into the format you need without lifting a finger!  

4、Once we have the .C file generated using either method, we’ll have a neatly structured hexadecimal binary dataset—just like the example shown. All we need to do is copy down this data, and we’re all set for the next step!

![QQ_1726811953404](https://github.com/user-attachments/assets/8b591bc5-a7a5-416c-938f-9da808154194)  

5、We create a new .h file in the image folder, name it as the name of the image (e.g. Ghostface.h), write the following code in the file, and save it.
```
#include <Arduino.h>//Introducing the Arduino File Library
const uint16_t PROGMEM Ghostface[] = {// The name of the array needs to match the name of the file.
  //Copy in all the hex we just copied.
}
```
![QQ_1726812224766](https://github.com/user-attachments/assets/a6a0305a-0f8a-4271-a708-937936538f91)  

6、Then open our slot_symbols.h file, and enter the following code.

```
#include "Ghostface.h"//Introduce the file we just wrote
#define SYM

#define SYM_WIDTH 48    //Icon width
#define SYM_HEIGHT 48   //Icon height
#define SYM_COUNT 1     //Number of icons After adding icons, the number of icons needs to be increased The number of icons is the number of icons.

const uint16_t *slot_symbols[] = {//The names in this array are derived from, in the .h file we wrote for the hex data
	Ghostface//With the array name we just named, put the hexadecimal data into the slot_symbols pointer array
};
```

7、Next, open our M5StickCPlus2_slot.ino project file. We've already covered the initial setup, and now we’ll move on to changing the picture. The number represents the *slot_symbols pointer array’s hexadecimal data for each image. For example, if we use the Ghostface image and place it in the first position, then in the symbolIndices array, you would write the number 0. Why 0? Because the starting index is 0.
So, if you have two images, you'd write 0 and 1. If three, then 0, 1, 2. Keep in mind, it’s not recommended to place the same numbers next to each other, and the values in the symbolIndices array must stay within a reasonable range.

![QQ_1726813215593](https://github.com/user-attachments/assets/41581cf8-2213-48c1-bd82-9850d648586d)  

8、If you need to add more than one picture, just follow the same steps as before. You can add up to 10 pictures in total.

### compile and run
1、After completing the installation of the dependencies, open the good downloaded zip archive

![image](https://github.com/user-attachments/assets/9357a72b-02ce-411c-87f9-38637b4d844c)  

2、Connect the Plus2 to your computer using USB-C, select Tools->Port to choose your own port

![QQ_1726107673971](https://github.com/user-attachments/assets/17f0392a-b753-4aba-946c-ede75ba9092f)  

3、Click on compile and then click on upload when the compilation is complete

![QQ_1726107957719](https://github.com/user-attachments/assets/c1f953ad-5355-44e8-af0c-ac5da7542aa6)  

## Next Issue Preview
In the next update, we’ll make the final improvements to the slot machine by switching from manual to automatic stopping. With just one press, the five columns will stop in sequence, randomly, making the project more complete and much closer to the real-life slot machine experience!

## How to contact the maintainer or developer
__OpenELAB:__   
[![OpenELAB_logo_resized_150](https://github.com/user-attachments/assets/5d3de375-359c-46a3-96bb-aaa211c6c636)](https://openelab.io)  
__YouTube:__  
[![youtube_logo_200x150](https://github.com/user-attachments/assets/d2365e7f-4ffe-4124-bf62-21eba19a71e4)](https://www.youtube.com/@OpenELAB)  
__X :__  
[![X_logo_150x150](https://github.com/user-attachments/assets/4ad5095f-2573-4791-9360-b355530093bf)](https://twitter.com/openelabio)  
__FaceBook:__  
[![facebook_logo_cropped_150x150](https://github.com/user-attachments/assets/52f2dc9a-a564-49a5-b72e-30eafbbc281f)](https://www.facebook.com/profile.php?id=61559154729457)  
__Discord__  
[![resized_image_150x150](https://github.com/user-attachments/assets/93ecd098-3391-45bb-9d80-b166c197a475)](https://discord.gg/VQspWyck)
