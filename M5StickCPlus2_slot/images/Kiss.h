#include <Arduino.h>

const uint16_t PROGMEM Kiss[] = {
	0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFE66, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE49, 0xFE69, 0xFE69, 
    0xFE49, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE66, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE89, 0xFE89, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 
    0xFE69, 0xFE69, 0xFE89, 0xFE89, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFDE7, 0xFE69, 0xFE69, 0xFEAA, 0xFE89, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 
    0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE89, 0xFEAA, 0xFE69, 0xFE69, 0xFDE7, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFE69, 
    0xFE69, 0xFEAA, 0xFE89, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 
    0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE89, 0xFEAA, 0xFE69, 0xFE29, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFE69, 0xFE89, 
    0xFE8A, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 
    0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE8A, 0xFE89, 0xFE69, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFE69, 0xFE69, 0xFE89, 
    0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 
    0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE89, 0xFE69, 
    0xFE69, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 
    0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 
    0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 
    0xFE69, 0xFE69, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFE49, 0xFE69, 0xFE89, 0xFE69, 0xFE69, 
    0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 
    0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 
    0xFE89, 0xFE69, 0xFE49, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFEF, 0xFE89, 0xFECA, 0xFE89, 0xFE89, 0xFE89, 
    0xFE89, 0xFE89, 0xFE89, 0xFE89, 0xFE89, 0xFE89, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 
    0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE89, 0xFE89, 0xFE89, 0xFE89, 0xFE89, 0xFE89, 0xFE89, 0xFE89, 
    0xFE89, 0xFECA, 0xFE89, 0xFFEA, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0x2965, 0x9C28, 0xBCE8, 0xAC68, 0x9C28, 0x9C08, 0x93E8, 
    0x9C08, 0x9C08, 0xA448, 0xB488, 0xBCE8, 0xCD48, 0xE5A9, 0xF629, 0xFE69, 0xFE89, 0xFE89, 0xFE89, 
    0xFE89, 0xFE69, 0xF629, 0xE5A9, 0xD548, 0xC4E8, 0xB488, 0xA448, 0x9C28, 0x9C08, 0x93E8, 0x9C08, 
    0x9C28, 0xA468, 0xBCE8, 0x9C08, 0x2946, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0x000A, 0x2166, 0x2986, 0x2146, 0x2146, 0x2146, 0x2146, 0x2146, 
    0x2146, 0x2146, 0x2146, 0x2146, 0x2146, 0x2966, 0x31A6, 0x4226, 0x5AA7, 0x6B07, 0x7327, 0x7327, 
    0x6B07, 0x5AA7, 0x4226, 0x31A6, 0x2966, 0x2146, 0x2146, 0x2146, 0x2146, 0x2146, 0x2146, 0x2146, 
    0x2146, 0x2146, 0x2146, 0x2986, 0x2166, 0x3186, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0x39E6, 0x2166, 0x2966, 0x2966, 0x2966, 0x2966, 0x2966, 
    0x2966, 0x2966, 0x2966, 0x2966, 0x2966, 0x2966, 0x2166, 0x2166, 0x2146, 0x1926, 0x1906, 0x1906, 
    0x1926, 0x2146, 0x2166, 0x2166, 0x2966, 0x2966, 0x2966, 0x2966, 0x2966, 0x2966, 0x2966, 0x2966, 
    0x2966, 0x2966, 0x2966, 0x2166, 0x39E6, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFE6C, 0xFE29, 0x8387, 0x2166, 0x2966, 0x2966, 0x2966, 0x2966, 
    0x2966, 0x2966, 0x2966, 0x2966, 0x2966, 0x2966, 0x2966, 0x2966, 0x2166, 0x4226, 0x9C28, 0x9C28, 
    0x4A26, 0x2166, 0x2966, 0x2966, 0x2966, 0x2966, 0x2966, 0x2966, 0x2966, 0x2966, 0x2966, 0x2966, 
    0x2966, 0x2966, 0x2146, 0x7B67, 0xF629, 0xFE6C, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFE69, 0xFE89, 0xFE29, 0x4206, 0x2166, 0x2966, 0x2966, 0x2966, 
    0x2966, 0x2966, 0x2966, 0x2966, 0x2966, 0x2966, 0x2966, 0x2966, 0x2166, 0xC508, 0xFEA9, 0xFEA9, 
    0xCD28, 0x2966, 0x2966, 0x2966, 0x2966, 0x2966, 0x2966, 0x2966, 0x2966, 0x2966, 0x2966, 0x2966, 
    0x2966, 0x2166, 0x4206, 0xF629, 0xFE89, 0xFE69, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFE69, 0xFE89, 0xFE89, 0x7307, 0x2146, 0x2966, 0x2966, 0x2966, 
    0x2966, 0x2966, 0x2966, 0x2966, 0x2966, 0x2966, 0x2966, 0x2166, 0x39C6, 0xEDE9, 0xFE69, 0xFE69, 
    0xF609, 0x39E6, 0x2166, 0x2966, 0x2966, 0x2966, 0x2966, 0x2966, 0x2966, 0x2966, 0x2966, 0x2966, 
    0x2966, 0x2146, 0x6AE7, 0xFE89, 0xFE89, 0xFE69, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFE69, 0xFE89, 0xFE89, 0x9C28, 0x2146, 0x2966, 0x2966, 0x2966, 
    0x2966, 0x2966, 0x2966, 0x2966, 0x2966, 0x2966, 0x2966, 0x2146, 0x5AA7, 0xFE69, 0xFE69, 0xFE69, 
    0xFE69, 0x62C7, 0x2146, 0x2966, 0x2966, 0x2966, 0x2966, 0x2966, 0x2966, 0x2966, 0x2966, 0x2966, 
    0x2966, 0x2146, 0x9408, 0xFE89, 0xFE89, 0xFE69, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFE69, 0xFE69, 0xFE89, 0xCD28, 0x2166, 0x2966, 0x2966, 0x2966, 
    0x2966, 0x2966, 0x2966, 0x2966, 0x2966, 0x2966, 0x2966, 0x2146, 0x93E8, 0xFE89, 0xFE69, 0xFE69, 
    0xFE89, 0x9C08, 0x2146, 0x2966, 0x2966, 0x2966, 0x2966, 0x2966, 0x2966, 0x2966, 0x2966, 0x2966, 
    0x2966, 0x2166, 0xC508, 0xFE89, 0xFE69, 0xFE69, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFE49, 0xFE69, 0xFE69, 0xF629, 0x4226, 0x2166, 0x2966, 0x2966, 
    0x2966, 0x2966, 0x2966, 0x2966, 0x2966, 0x2966, 0x2166, 0x2986, 0xDD89, 0xFE69, 0xFE69, 0xFE69, 
    0xFE69, 0xE5A9, 0x31A6, 0x2166, 0x2966, 0x2966, 0x2966, 0x2966, 0x2966, 0x2966, 0x2966, 0x2966, 
    0x2166, 0x4206, 0xF609, 0xFE69, 0xFE69, 0xFE49, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFE69, 0xFE69, 0xFE69, 0xFE89, 0x9408, 0x1926, 0x2966, 0x2966, 
    0x2966, 0x2966, 0x2966, 0x2966, 0x2966, 0x2166, 0x1926, 0x8BA7, 0xFE89, 0xFE69, 0xFE69, 0xFE69, 
    0xFE69, 0xFE89, 0x93C8, 0x1926, 0x2166, 0x2966, 0x2966, 0x2966, 0x2966, 0x2966, 0x2966, 0x2966, 
    0x1926, 0x93C8, 0xFE89, 0xFE69, 0xFE69, 0xFE49, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xF629, 0x62C7, 0x2166, 0x2146, 
    0x2146, 0x2146, 0x2146, 0x2146, 0x2146, 0x2986, 0x8367, 0xFE49, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 
    0xFE69, 0xFE69, 0xFE49, 0x8387, 0x2986, 0x2146, 0x2146, 0x2146, 0x2146, 0x2146, 0x2146, 0x2166, 
    0x62A7, 0xF609, 0xFE69, 0xFE69, 0xFE69, 0xFE49, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFE49, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE49, 0xCD28, 0xA448, 
    0x93E8, 0x8BC7, 0x93E8, 0xA428, 0xBCC8, 0xDDA9, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 
    0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xE5A9, 0xBCC8, 0xA428, 0x93E8, 0x8BC7, 0x9408, 0xA468, 0xCD28, 
    0xFE49, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE49, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE89, 0xFE89, 
    0xFE89, 0xFE89, 0xFE89, 0xFE89, 0xFE89, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE89, 0xFE69, 
    0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE89, 0xFE89, 0xFEA9, 0xFE89, 0xFDA9, 0xFDA9, 0xFE69, 
    0xFE89, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFE69, 0xFE89, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 
    0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xF608, 0xD547, 0xE5A8, 
    0xFE29, 0xFE8A, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xED69, 0xE2A8, 0xD968, 0xD968, 0xE288, 
    0xFD89, 0xFE89, 0xFE69, 0xFE69, 0xFE89, 0xFE69, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFE69, 0xFE89, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 
    0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xDD67, 0x7AE1, 0x7280, 
    0x7281, 0x9BA3, 0xDD87, 0xFE69, 0xFE69, 0xF629, 0xB486, 0xC9E7, 0xD948, 0xD968, 0xD968, 0xD928, 
    0xE268, 0xFE49, 0xFE49, 0xFE69, 0xFEA9, 0xFE69, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 
    0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE49, 0xEDE8, 
    0xBCA5, 0x7260, 0x6220, 0xC4C6, 0xFE8A, 0xC507, 0xA346, 0xD968, 0xD968, 0xD968, 0xD968, 0xD968, 
    0xD968, 0xE2C8, 0xE248, 0xE288, 0xF489, 0xFEC9, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFE6C, 0xFE49, 0xFE89, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 
    0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 
    0xFEAA, 0xD547, 0x6200, 0x7AA1, 0xF629, 0xA446, 0xAB06, 0xD968, 0xD968, 0xD968, 0xD968, 0xD968, 
    0xD968, 0xD948, 0xD948, 0xD948, 0xE148, 0xD968, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFE69, 0xFEAA, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 
    0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE89, 
    0xFEAA, 0xC4C6, 0x59E0, 0x82E1, 0xF609, 0x9C26, 0xAB06, 0xD968, 0xD968, 0xD968, 0xD968, 0xD968, 
    0xD968, 0xD968, 0xD968, 0xD968, 0xE168, 0xD968, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFE69, 0xFE49, 0xFE89, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 
    0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE49, 0xEDE8, 0xDD47, 
    0xA3E4, 0x6A40, 0x7281, 0xDD47, 0xFE49, 0xA426, 0xAB46, 0xD968, 0xD968, 0xD968, 0xD968, 0xD968, 
    0xD968, 0xD968, 0xD968, 0xD968, 0xD968, 0xD968, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFE69, 0xFEAA, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 
    0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE89, 0xDD67, 0x7281, 0x6200, 
    0x59C0, 0x8B02, 0xEDC8, 0xFEAA, 0xFE49, 0xAC46, 0x9BA6, 0xD1A8, 0xD968, 0xD968, 0xD968, 0xD968, 
    0xD968, 0xD968, 0xD968, 0xD968, 0xE168, 0xD968, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFDE7, 0xFE49, 0xFE8A, 0xFE69, 0xFE69, 0xFE69, 
    0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE49, 0xE5A8, 0xCD06, 
    0x9B83, 0x6A20, 0x82E1, 0xDD87, 0xFE8A, 0xBCC7, 0x93C5, 0xC247, 0xE148, 0xD968, 0xD968, 0xD968, 
    0xD968, 0xD968, 0xD968, 0xE168, 0xD968, 0xD968, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFE49, 0xFE69, 0xFE89, 0xFE69, 0xFE69, 
    0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE8A, 
    0xFE8A, 0xBC85, 0x59E0, 0x8302, 0xFE69, 0xE588, 0x93E5, 0xAB46, 0xD968, 0xD968, 0xD968, 0xD968, 
    0xD968, 0xE168, 0xE188, 0xE168, 0xD968, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 
    0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 
    0xFEAA, 0xDD67, 0x6200, 0x72A1, 0xFE29, 0xFE49, 0xAC46, 0x93C5, 0xC247, 0xE148, 0xD948, 0xE148, 
    0xE168, 0xD968, 0xE168, 0xD989, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFE69, 0xFE69, 0xFE89, 
    0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xF629, 
    0xCD06, 0x7AA1, 0x6200, 0xBC85, 0xFE89, 0xFE69, 0xE588, 0x93C5, 0x9B86, 0xC227, 0xCA47, 0xD2E7, 
    0xD268, 0xE148, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFE69, 0xFE89, 
    0xFE8A, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xE587, 0x8B02, 0x72A1, 
    0x6A60, 0x9342, 0xD526, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xDD68, 0xCD07, 0xDDA8, 0xEDE8, 0xEE68, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFE29, 
    0xFE69, 0xFEAA, 0xFE89, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xF5E8, 0xCCE6, 0xDD67, 
    0xF608, 0xFE69, 0xFE89, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE89, 0xFEAA, 0xFE89, 0xFECA, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFDE7, 0xFE69, 0xFE69, 0xFEAA, 0xFE89, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE8A, 0xFE89, 
    0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE89, 0xFEAA, 0xFE69, 0xFE69, 0xFDE7, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE89, 0xFE89, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 
    0xFE69, 0xFE69, 0xFE89, 0xFE89, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFE66, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE49, 0xFE69, 0xFE69, 
    0xFE49, 0xFE69, 0xFE69, 0xFE69, 0xFE69, 0xFE66, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
    0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 

};