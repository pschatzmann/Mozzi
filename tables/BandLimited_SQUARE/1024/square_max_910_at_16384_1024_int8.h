#ifndef SQUARE_MAX_910_AT_16384_1024INT8_H_
#define SQUARE_MAX_910_AT_16384_1024INT8_H_

#if ARDUINO >= 100
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif
#include "mozzi_pgmspace.h"


#define SQUARE_MAX_910_AT_16384_1024_NUM_CELLS 1024
#define SQUARE_MAX_910_AT_16384_1024_SAMPLERATE 1024

CONSTTABLE_STORAGE(int8_t) SQUARE_MAX_910_AT_16384_1024_DATA [] = 
{
0, 4, 8, 12, 16, 20, 25, 29, 33, 37, 41, 45, 49, 52, 56, 60, 63, 67, 70, 74, 77, 80, 83, 86, 89, 92, 95, 97, 100, 102, 105, 107, 109, 
111, 113, 114, 116, 117, 119, 120, 121, 122, 123, 124, 125, 125, 126, 126, 127, 127, 127, 127, 127, 127, 127, 126, 126, 126, 125, 125, 124, 124, 123, 122, 121, 
121, 120, 119, 118, 117, 116, 115, 114, 113, 112, 111, 111, 110, 109, 108, 107, 106, 105, 104, 104, 103, 102, 101, 101, 100, 100, 99, 99, 98, 98, 97, 97, 
97, 97, 96, 96, 96, 96, 96, 96, 96, 96, 97, 97, 97, 97, 98, 98, 98, 99, 99, 100, 100, 101, 101, 102, 102, 103, 103, 104, 105, 105, 106, 106, 
107, 108, 108, 109, 109, 110, 110, 111, 111, 112, 112, 113, 113, 114, 114, 114, 114, 115, 115, 115, 115, 115, 116, 116, 116, 116, 116, 116, 115, 115, 115, 115, 
115, 115, 114, 114, 114, 113, 113, 113, 112, 112, 111, 111, 111, 110, 110, 109, 109, 108, 108, 107, 107, 106, 106, 105, 105, 105, 104, 104, 103, 103, 103, 102, 
102, 102, 101, 101, 101, 101, 101, 101, 100, 100, 100, 100, 100, 100, 100, 100, 100, 101, 101, 101, 101, 101, 102, 102, 102, 102, 103, 103, 103, 104, 104, 105, 
105, 105, 106, 106, 107, 107, 107, 108, 108, 109, 109, 110, 110, 110, 111, 111, 111, 112, 112, 112, 113, 113, 113, 113, 114, 114, 114, 114, 114, 114, 114, 114, 
114, 114, 114, 114, 114, 114, 114, 113, 113, 113, 113, 112, 112, 112, 111, 111, 111, 110, 110, 110, 109, 109, 108, 108, 107, 107, 107, 106, 106, 105, 105, 105, 
104, 104, 103, 103, 103, 102, 102, 102, 102, 101, 101, 101, 101, 101, 100, 100, 100, 100, 100, 100, 100, 100, 100, 101, 101, 101, 101, 101, 101, 102, 102, 102, 
103, 103, 103, 104, 104, 105, 105, 105, 106, 106, 107, 107, 108, 108, 109, 109, 110, 110, 111, 111, 111, 112, 112, 113, 113, 113, 114, 114, 114, 115, 115, 115, 
115, 115, 115, 116, 116, 116, 116, 116, 116, 115, 115, 115, 115, 115, 114, 114, 114, 114, 113, 113, 112, 112, 111, 111, 110, 110, 109, 109, 108, 108, 107, 106, 
106, 105, 105, 104, 103, 103, 102, 102, 101, 101, 100, 100, 99, 99, 98, 98, 98, 97, 97, 97, 97, 96, 96, 96, 96, 96, 96, 96, 96, 97, 97, 97, 
97, 98, 98, 99, 99, 100, 100, 101, 101, 102, 103, 104, 104, 105, 106, 107, 108, 109, 110, 111, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 121, 
122, 123, 124, 124, 125, 125, 126, 126, 126, 127, 127, 127, 127, 127, 127, 127, 126, 126, 125, 125, 124, 123, 122, 121, 120, 119, 117, 116, 114, 113, 111, 109, 
107, 105, 102, 100, 97, 95, 92, 89, 86, 83, 80, 77, 74, 70, 67, 63, 60, 56, 52, 49, 45, 41, 37, 33, 29, 25, 20, 16, 12, 8, 4, 0, 
-4, -8, -12, -16, -20, -25, -29, -33, -37, -41, -45, -49, -52, -56, -60, -63, -67, -70, -74, -77, -80, -83, -86, -89, -92, -95, -97, -100, -102, -105, -107, -109, 
-111, -113, -114, -116, -117, -119, -120, -121, -122, -123, -124, -125, -125, -126, -126, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -125, -125, -124, -124, -123, -122, -121, 
-121, -120, -119, -118, -117, -116, -115, -114, -113, -112, -111, -111, -110, -109, -108, -107, -106, -105, -104, -104, -103, -102, -101, -101, -100, -100, -99, -99, -98, -98, -97, -97, 
-97, -97, -96, -96, -96, -96, -96, -96, -96, -96, -97, -97, -97, -97, -98, -98, -98, -99, -99, -100, -100, -101, -101, -102, -102, -103, -103, -104, -105, -105, -106, -106, 
-107, -108, -108, -109, -109, -110, -110, -111, -111, -112, -112, -113, -113, -114, -114, -114, -114, -115, -115, -115, -115, -115, -116, -116, -116, -116, -116, -116, -115, -115, -115, -115, 
-115, -115, -114, -114, -114, -113, -113, -113, -112, -112, -111, -111, -111, -110, -110, -109, -109, -108, -108, -107, -107, -106, -106, -105, -105, -105, -104, -104, -103, -103, -103, -102, 
-102, -102, -101, -101, -101, -101, -101, -101, -100, -100, -100, -100, -100, -100, -100, -100, -100, -101, -101, -101, -101, -101, -102, -102, -102, -102, -103, -103, -103, -104, -104, -105, 
-105, -105, -106, -106, -107, -107, -107, -108, -108, -109, -109, -110, -110, -110, -111, -111, -111, -112, -112, -112, -113, -113, -113, -113, -114, -114, -114, -114, -114, -114, -114, -114, 
-114, -114, -114, -114, -114, -114, -114, -113, -113, -113, -113, -112, -112, -112, -111, -111, -111, -110, -110, -110, -109, -109, -108, -108, -107, -107, -107, -106, -106, -105, -105, -105, 
-104, -104, -103, -103, -103, -102, -102, -102, -102, -101, -101, -101, -101, -101, -100, -100, -100, -100, -100, -100, -100, -100, -100, -101, -101, -101, -101, -101, -101, -102, -102, -102, 
-103, -103, -103, -104, -104, -105, -105, -105, -106, -106, -107, -107, -108, -108, -109, -109, -110, -110, -111, -111, -111, -112, -112, -113, -113, -113, -114, -114, -114, -115, -115, -115, 
-115, -115, -115, -116, -116, -116, -116, -116, -116, -115, -115, -115, -115, -115, -114, -114, -114, -114, -113, -113, -112, -112, -111, -111, -110, -110, -109, -109, -108, -108, -107, -106, 
-106, -105, -105, -104, -103, -103, -102, -102, -101, -101, -100, -100, -99, -99, -98, -98, -98, -97, -97, -97, -97, -96, -96, -96, -96, -96, -96, -96, -96, -97, -97, -97, 
-97, -98, -98, -99, -99, -100, -100, -101, -101, -102, -103, -104, -104, -105, -106, -107, -108, -109, -110, -111, -111, -112, -113, -114, -115, -116, -117, -118, -119, -120, -121, -121, 
-122, -123, -124, -124, -125, -125, -126, -126, -126, -127, -127, -127, -127, -127, -127, -127, -126, -126, -125, -125, -124, -123, -122, -121, -120, -119, -117, -116, -114, -113, -111, -109, 
-107, -105, -102, -100, -97, -95, -92, -89, -86, -83, -80, -77, -74, -70, -67, -63, -60, -56, -52, -49, -45, -41, -37, -33, -29, -25, -20, -16, -12, -8, -4, 
 };

#endif