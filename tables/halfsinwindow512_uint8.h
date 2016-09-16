#ifndef HALFSINWINDOW512_H_
#define HALFSINWINDOW512_H_

#if ARDUINO >= 100
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif
#include <avr/pgmspace.h>

// this is the top half of a sin, used as a rough envelope for a cycling fade-in, fade-out with empty space in between.

#define HALFSINWINDOW512_NUM_CELLS 512
#define HALFSINWINDOW512_SAMPLERATE 512

const int8_t __attribute__((section(".progmem.data"))) HALFSINWINDOW512_DATA []  =
        {
                1, 3, 6, 9, 13, 16, 19, 22, 25, 28, 31,
                34, 38, 41, 44, 47, 50, 53, 56, 59, 62, 65, 68, 71, 74, 77, 80, 83, 86, 89, 92,
                95, 98, 101, 104, 107, 109, 112, 115, 118, 121, 123, 126, 129, 132, 134, 137,
                140, 142, 145, 147, 150, 152, 155, 157, 160, 162, 165, 167, 170, 172, 174, 177,
                179, 181, 183, 185, 188, 190, 192, 194, 196, 198, 200, 202, 204, 206, 207, 209,
                211, 213, 215, 216, 218, 220, 221, 223, 224, 226, 227, 229, 230, 231, 233, 234,
                235, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 248, 249, 250,
                250, 251, 252, 252, 253, 253, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255,
                255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 254, 254, 254, 253, 253, 252,
                252, 251, 250, 250, 249, 248, 248, 247, 246, 245, 244, 243, 242, 241, 240, 239,
                238, 237, 235, 234, 233, 231, 230, 229, 227, 226, 224, 223, 221, 220, 218, 216,
                215, 213, 211, 209, 207, 206, 204, 202, 200, 198, 196, 194, 192, 190, 188, 185,
                183, 181, 179, 177, 174, 172, 170, 167, 165, 162, 160, 157, 155, 152, 150, 147,
                145, 142, 140, 137, 134, 132, 129, 126, 123, 121, 118, 115, 112, 109, 107, 104,
                101, 98, 95, 92, 89, 86, 83, 80, 77, 74, 71, 68, 65, 62, 59, 56, 53, 50, 47, 44,
                41, 38, 34, 31, 28, 25, 22, 19, 16, 13, 9, 6, 3,
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        };

#endif /* HALFSINWINDOW512_H_ */
