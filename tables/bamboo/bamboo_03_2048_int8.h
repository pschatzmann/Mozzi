#ifndef BAMBOO_03_2048_H_
#define BAMBOO_03_2048_H_
 
#include "Arduino.h"
#include <avr/pgmspace.h>
 
#define BAMBOO_03_2048_NUM_CELLS 2048
#define BAMBOO_03_2048_SAMPLERATE 16384
 
prog_char BAMBOO_03_2048_DATA [] PROGMEM = {1, 1, -1, -1, 0, -1, 0, -1, -1, 2,
0, -22, -80, -128, -72, 38, 54, 23, 79, 124, 52, -22, -23, -2, 13, 39, 24, -41,
-89, -92, -36, 18, -9, -54, -35, -11, 40, 91, 27, -37, -18, -1, 24, 73, 82, -6,
-83, -30, 43, 55, 23, -18, -23, -27, -26, -6, 10, -11, -42, -23, 12, -1, -38,
-56, -14, 50, 52, 23, 9, -24, -39, 22, 72, 40, 7, -5, -12, 4, 24, 20, 0, -23,
-40, -27, 0, -4, -19, -35, -42, 0, 27, 1, -16, -13, -21, -9, 32, 48, 28, 5, -8,
4, 23, 20, 23, 19, -5, -15, 0, -1, -19, -23, -18, -6, -6, -29, -42, -27, -13, 6,
29, 20, -16, -29, -11, 14, 39, 37, 15, 5, 3, 11, 24, 21, -3, -17, -14, -2, 10,
-5, -30, -32, -23, -16, -4, 1, -14, -25, -22, -6, 13, 22, 16, 6, 3, 1, 10, 22,
24, 15, 14, 12, 8, -2, -12, -12, -5, -6, -11, -14, -22, -32, -23, -4, -1, -9,
-19, -22, -7, 14, 25, 26, 19, 8, 9, 18, 22, 18, 6, -3, 4, 13, 3, -6, -15, -24,
-21, -5, -2, -15, -23, -24, -16, -7, 0, -1, -3, -6, 3, 11, 14, 18, 15, 14, 22,
30, 12, -6, -3, -1, -1, 3, 5, -10, -31, -31, -16, -4, -1, -11, -21, -25, -13, 3,
11, 6, 5, 1, 4, 18, 20, 11, 5, 10, 17, 16, 15, 10, -2, -18, -15, -1, -4, -16,
-16, -20, -23, -14, -3, -8, -15, -11, -1, 7, 7, 0, 6, 15, 22, 17, 11, 4, 3, 3,
11, 19, 11, -6, -17, -16, -12, -9, -4, -12, -20, -21, -13, -7, -4, -8, -10, -4,
6, 10, 10, 7, 11, 14, 16, 16, 16, 6, -2, -1, 4, 1, -3, -7, -12, -13, -13, -11,
-15, -18, -15, -9, -6, -4, -5, -5, -2, 8, 13, 13, 9, 5, 9, 15, 21, 16, 7, 1, -2,
-6, -5, -1, -7, -12, -11, -12, -16, -17, -14, -10, -11, -6, -1, -2, -2, 4, 7, 5,
9, 16, 15, 12, 12, 12, 6, 6, 8, 5, -3, -5, -9, -17, -16, -10, -12, -15, -13, -9,
-9, -11, -4, 2, 2, 5, 7, 4, 7, 17, 14, 10, 10, 10, 3, 4, 6, 4, -4, -8, -3, -4,
-14, -13, -10, -15, -16, -9, -5, -11, -9, -3, -2, 1, 6, 5, 8, 13, 16, 8, 8, 9,
10, 6, 3, 5, -3, -10, -6, -2, -8, -10, -9, -11, -16, -12, -9, -7, -6, -2, -2, 1,
3, 6, 6, 9, 11, 11, 8, 9, 9, 5, 4, 4, 1, -8, -8, -7, -9, -13, -13, -9, -10, -9,
-6, -6, -7, -5, -2, 4, 7, 7, 3, 5, 7, 9, 6, 9, 11, 6, 1, 3, 2, -3, -8, -5, -6,
-10, -12, -14, -13, -11, -7, -4, -2, -3, -2, 2, 2, 4, 7, 9, 8, 8, 6, 6, 5, 6, 1,
1, 0, -2, -8, -7, -6, -5, -8, -10, -10, -8, -10, -6, -4, -4, -3, 2, 3, 5, 3, 4,
5, 11, 9, 7, 6, 3, 5, 4, 1, -1, -5, -7, -8, -6, -10, -12, -11, -8, -8, -3, -5,
-6, -6, 0, 4, 7, 8, 4, 4, 5, 10, 10, 8, 4, 3, -1, 0, 1, 0, -6, -8, -6, -8, -11,
-10, -8, -9, -7, -4, -3, -1, -1, -1, 2, 6, 7, 7, 5, 8, 8, 6, 5, 4, 2, -2, -2,
-2, -3, -7, -7, -10, -9, -9, -6, -6, -7, -8, -8, -1, 1, 5, 4, 1, 3, 5, 9, 10, 7,
5, 3, 4, 4, 3, -1, -3, -4, -5, -7, -9, -10, -9, -7, -5, -6, -6, -6, -2, 0, 1, 0,
3, 5, 5, 7, 7, 5, 5, 6, 5, 3, 2, -1, -6, -5, -4, -5, -9, -8, -8, -8, -9, -7, -6,
-5, -3, 0, -1, 0, 3, 4, 7, 8, 7, 6, 4, 4, 3, 3, 0, -1, -2, -3, -4, -5, -8, -9,
-7, -9, -9, -8, -6, -6, -1, 1, 1, 0, 2, 4, 6, 6, 5, 5, 5, 5, 5, 4, 4, 0, -2, -3,
-5, -4, -6, -8, -9, -8, -10, -7, -5, -6, -5, -4, -1, 0, 4, 5, 5, 6, 4, 6, 6, 8,
5, 3, 2, 0, -1, -2, -4, -5, -7, -8, -9, -8, -9, -7, -7, -5, -4, -2, -2, 0, 3, 4,
3, 5, 6, 6, 8, 5, 4, 2, 4, 3, 0, -1, -4, -5, -6, -6, -7, -8, -9, -7, -6, -6, -7,
-4, -2, 0, 3, 3, 3, 3, 5, 6, 7, 6, 5, 2, 3, 2, 2, -2, -3, -5, -6, -6, -4, -7,
-8, -9, -7, -5, -5, -2, -2, -1, 0, 1, 4, 3, 6, 6, 5, 4, 6, 3, 3, 1, 0, -2, -1,
-2, -3, -7, -6, -7, -8, -8, -4, -5, -4, -4, -2, 0, 0, 1, 4, 2, 3, 5, 7, 5, 4, 5,
3, 3, 2, -1, -2, -4, -5, -4, -6, -7, -5, -8, -7, -7, -4, -5, -2, -2, 0, 1, 2, 4,
4, 6, 4, 6, 4, 6, 3, 2, 0, 1, -2, -1, -4, -4, -6, -7, -8, -6, -7, -6, -6, -5,
-4, -3, 0, 2, 3, 4, 4, 3, 6, 5, 5, 4, 5, 2, 2, 0, -1, -3, -5, -4, -6, -8, -7,
-7, -8, -6, -6, -3, -2, -2, 0, 0, 3, 3, 3, 4, 5, 6, 5, 4, 3, 2, 2, 0, 0, -2, -4,
-6, -4, -4, -7, -7, -8, -6, -5, -4, -4, -1, -2, 1, 2, 2, 2, 5, 5, 5, 4, 6, 2, 3,
1, 1, 0, -2, -3, -4, -5, -4, -5, -6, -6, -6, -5, -3, -4, -2, -3, -1, 1, 3, 2, 5,
3, 5, 4, 3, 4, 2, 2, 0, 0, -1, -4, -3, -5, -4, -7, -6, -5, -6, -6, -5, -3, -3,
-3, 0, 0, 2, 2, 3, 3, 4, 4, 5, 4, 3, 1, 1, 1, -2, -2, -4, -4, -5, -5, -7, -6,
-5, -6, -4, -4, -2, -2, 0, 0, 1, 1, 2, 2, 3, 3, 3, 3, 3, 2, 0, -1, 0, -1, -2,
-3, -4, -5, -4, -4, -4, -5, -4, -4, -3, -2, 0, 0, 0, 0, 2, 4, 3, 3, 4, 2, 1, 3,
1, 0, 0, -2, -2, -3, -3, -5, -6, -6, -5, -4, -4, -4, -3, -2, -1, 0, 1, 1, 1, 2,
3, 3, 4, 1, 1, 1, 1, 1, 0, 0, -2, -2, -3, -4, -5, -5, -5, -5, -4, -3, -3, -3,
-2, -1, 0, 1, 1, 2, 3, 3, 3, 3, 2, 1, 1, 1, -1, 0, -1, -3, -3, -3, -4, -5, -5,
-5, -5, -3, -2, -2, -1, -1, -1, 0, 2, 3, 2, 2, 2, 3, 3, 2, 1, 0, -1, 0, -1, -3,
-3, -4, -5, -5, -5, -4, -4, -5, -3, -3, -1, 0, -1, 0, 0, 2, 3, 3, 3, 2, 2, 1, 1,
1, -1, -1, -1, -2, -3, -4, -4, -5, -5, -5, -4, -3, -3, -3, -2, 0, 0, 0, 1, 1, 3,
3, 2, 3, 2, 1, 1, 1, 0, -1, -1, -1, -3, -3, -3, -5, -5, -4, -4, -3, -4, -3, -2,
-1, 0, 0, 1, 1, 2, 2, 3, 3, 2, 1, 1, 0, 0, -1, -1, -2, -3, -3, -3, -3, -4, -4,
-4, -3, -3, -3, -2, -1, -1, 0, 1, 1, 1, 2, 2, 2, 2, 1, 1, 0, 0, -1, 0, -1, -2,
-3, -4, -4, -4, -4, -4, -4, -3, -2, -2, -1, -1, -1, 0, 0, 1, 2, 2, 2, 2, 2, 1,
1, 0, -1, -1, -1, -2, -2, -3, -3, -3, -3, -3, -3, -3, -3, -2, -1, -1, 0, 0, 0,
0, 2, 2, 2, 2, 1, 0, 1, 0, 0, -1, -1, -2, -2, -2, -3, -3, -4, -3, -3, -3, -2,
-2, -1, -1, 0, 0, 0, 1, 1, 1, 2, 2, 1, 1, 1, 0, 0, -1, -1, -1, -2, -3, -2, -3,
-3, -3, -3, -3, -2, -2, -2, -1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, -1,
-1, -2, -2, -3, -2, -2, -2, -2, -3, -3, -2, -2, -1, 0, 0, 0, 0, 1, 1, 1, 1, 1,
1, 1, 0, 0, -1, 0, -1, -1, -2, -2, -2, -3, -3, -2, -2, -2, -2, -2, -1, -1, -1,
0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, -1, -2, -2, -2, -2, -2, -3, -3, -3, -2, -2,
-2, -2, -1, -1, -1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, -1, -2, -2, -2, -2,
-2, -2, -3, -2, -2, -2, -2, -1, -1, -1, -1, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0,
-1, -1, -2, -2, -2, -2, -2, -3, -2, -2, -2, -2, -2, -1, -1, 0, 0, 0, 0, 1, 1, 1,
1, 1, 0, 0, 0, 0, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -1, -2, 0, -1,
0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2,
-1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -2, -2,
-2, -2, -2, -2, -2, -1, -1, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
-1, -1, -1, -1, -2, -1, -2, -2, -2, -1, -1, -1, -1, 0, -1, -1, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, -1, -2, -2, -1, -1, -1, -1, -1, -1, -1, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, -1, -2, -2, -2, -2, -1,
-1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1,
-2, -2, -2, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0,
-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, 0, -1, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, 0, -1, 0, 0, 0, 0, 0, -1,
0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, 0,
-1, 0, 0, 0, 0, -1, 0, -1, 0, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-1, 0, -1, 0, -1, 0, -1, 0, 0, 0, -1, 0, -1, 0, -1, 0, 0, -1, -1, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, -1, 0, 0,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, -1, 0, -1, 0, 0,
};
 
 #endif /* BAMBOO_03_2048_H_ */
