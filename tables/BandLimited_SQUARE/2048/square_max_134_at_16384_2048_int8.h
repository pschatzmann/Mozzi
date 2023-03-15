#ifndef SQUARE_MAX_134_AT_16384_2048INT8_H_
#define SQUARE_MAX_134_AT_16384_2048INT8_H_

#if ARDUINO >= 100
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif
#include "mozzi_pgmspace.h"


#define SQUARE_MAX_134_AT_16384_2048_NUM_CELLS 2048
#define SQUARE_MAX_134_AT_16384_2048_SAMPLERATE 2048

CONSTTABLE_STORAGE(int8_t) SQUARE_MAX_134_AT_16384_2048_DATA [] = 
{
0, 13, 25, 38, 50, 62, 73, 83, 92, 100, 107, 113, 118, 122, 124, 126, 127, 127, 126, 125, 123, 121, 118, 115, 112, 110, 107, 105, 102, 101, 99, 98, 97, 
97, 97, 98, 99, 100, 101, 103, 105, 106, 108, 109, 111, 112, 113, 114, 115, 115, 115, 115, 114, 113, 113, 112, 110, 109, 108, 107, 106, 105, 104, 103, 103, 
102, 102, 102, 103, 103, 104, 104, 105, 106, 107, 108, 109, 110, 110, 111, 112, 112, 112, 112, 112, 112, 111, 111, 110, 109, 109, 108, 107, 106, 106, 105, 105, 
104, 104, 104, 104, 104, 105, 105, 105, 106, 107, 107, 108, 109, 109, 110, 110, 111, 111, 111, 111, 111, 111, 110, 110, 109, 109, 108, 108, 107, 107, 106, 106, 
105, 105, 105, 105, 105, 105, 105, 106, 106, 106, 107, 107, 108, 108, 109, 109, 110, 110, 110, 110, 110, 110, 110, 110, 109, 109, 109, 108, 108, 107, 107, 106, 
106, 106, 106, 105, 105, 105, 106, 106, 106, 106, 107, 107, 107, 108, 108, 109, 109, 109, 110, 110, 110, 110, 110, 110, 109, 109, 109, 108, 108, 108, 107, 107, 
107, 106, 106, 106, 106, 106, 106, 106, 106, 106, 107, 107, 107, 108, 108, 108, 109, 109, 109, 109, 109, 110, 110, 109, 109, 109, 109, 109, 108, 108, 108, 107, 
107, 107, 107, 106, 106, 106, 106, 106, 106, 106, 106, 107, 107, 107, 108, 108, 108, 108, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 108, 108, 108, 
107, 107, 107, 107, 106, 106, 106, 106, 106, 106, 106, 107, 107, 107, 107, 108, 108, 108, 108, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 108, 108, 
108, 107, 107, 107, 107, 107, 106, 106, 106, 106, 106, 106, 107, 107, 107, 107, 108, 108, 108, 108, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 108, 108, 
108, 108, 107, 107, 107, 107, 107, 107, 106, 106, 106, 106, 107, 107, 107, 107, 107, 108, 108, 108, 108, 108, 109, 109, 109, 109, 109, 109, 109, 109, 109, 108, 
108, 108, 108, 108, 107, 107, 107, 107, 107, 107, 106, 106, 107, 107, 107, 107, 107, 107, 108, 108, 108, 108, 108, 109, 109, 109, 109, 109, 109, 109, 109, 109, 
108, 108, 108, 108, 108, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 108, 108, 108, 108, 108, 109, 109, 109, 109, 109, 109, 109, 109, 
109, 108, 108, 108, 108, 108, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 108, 108, 108, 108, 108, 109, 109, 109, 109, 109, 109, 109, 
109, 109, 108, 108, 108, 108, 108, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 108, 108, 108, 108, 108, 109, 109, 109, 109, 109, 109, 
109, 109, 109, 108, 108, 108, 108, 108, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 108, 108, 108, 108, 108, 109, 109, 109, 109, 109, 
109, 109, 109, 109, 108, 108, 108, 108, 108, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 108, 108, 108, 108, 108, 109, 109, 109, 109, 
109, 109, 109, 109, 109, 108, 108, 108, 108, 108, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 108, 108, 108, 108, 108, 109, 109, 109, 
109, 109, 109, 109, 109, 109, 108, 108, 108, 108, 108, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 108, 108, 108, 108, 108, 109, 109, 
109, 109, 109, 109, 109, 109, 109, 108, 108, 108, 108, 108, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 107, 108, 108, 108, 108, 108, 109, 
109, 109, 109, 109, 109, 109, 109, 109, 108, 108, 108, 108, 108, 107, 107, 107, 107, 107, 107, 106, 106, 107, 107, 107, 107, 107, 107, 108, 108, 108, 108, 108, 
109, 109, 109, 109, 109, 109, 109, 109, 109, 108, 108, 108, 108, 108, 107, 107, 107, 107, 107, 106, 106, 106, 106, 107, 107, 107, 107, 107, 107, 108, 108, 108, 
108, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 108, 108, 108, 108, 107, 107, 107, 107, 106, 106, 106, 106, 106, 106, 107, 107, 107, 107, 107, 108, 108, 
108, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 108, 108, 108, 108, 107, 107, 107, 107, 106, 106, 106, 106, 106, 106, 106, 107, 107, 107, 107, 108, 
108, 108, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 108, 108, 108, 108, 107, 107, 107, 106, 106, 106, 106, 106, 106, 106, 106, 107, 107, 107, 107, 
108, 108, 108, 109, 109, 109, 109, 109, 110, 110, 109, 109, 109, 109, 109, 108, 108, 108, 107, 107, 107, 106, 106, 106, 106, 106, 106, 106, 106, 106, 107, 107, 
107, 108, 108, 108, 109, 109, 109, 110, 110, 110, 110, 110, 110, 109, 109, 109, 108, 108, 107, 107, 107, 106, 106, 106, 106, 105, 105, 105, 106, 106, 106, 106, 
107, 107, 108, 108, 109, 109, 109, 110, 110, 110, 110, 110, 110, 110, 110, 109, 109, 108, 108, 107, 107, 106, 106, 106, 105, 105, 105, 105, 105, 105, 105, 106, 
106, 107, 107, 108, 108, 109, 109, 110, 110, 111, 111, 111, 111, 111, 111, 110, 110, 109, 109, 108, 107, 107, 106, 105, 105, 105, 104, 104, 104, 104, 104, 105, 
105, 106, 106, 107, 108, 109, 109, 110, 111, 111, 112, 112, 112, 112, 112, 112, 111, 110, 110, 109, 108, 107, 106, 105, 104, 104, 103, 103, 102, 102, 102, 103, 
103, 104, 105, 106, 107, 108, 109, 110, 112, 113, 113, 114, 115, 115, 115, 115, 114, 113, 112, 111, 109, 108, 106, 105, 103, 101, 100, 99, 98, 97, 97, 97, 
98, 99, 101, 102, 105, 107, 110, 112, 115, 118, 121, 123, 125, 126, 127, 127, 126, 124, 122, 118, 113, 107, 100, 92, 83, 73, 62, 50, 38, 25, 13, 0, 
-13, -25, -38, -50, -62, -73, -83, -92, -100, -107, -113, -118, -122, -124, -126, -127, -127, -126, -125, -123, -121, -118, -115, -112, -110, -107, -105, -102, -101, -99, -98, -97, 
-97, -97, -98, -99, -100, -101, -103, -105, -106, -108, -109, -111, -112, -113, -114, -115, -115, -115, -115, -114, -113, -113, -112, -110, -109, -108, -107, -106, -105, -104, -103, -103, 
-102, -102, -102, -103, -103, -104, -104, -105, -106, -107, -108, -109, -110, -110, -111, -112, -112, -112, -112, -112, -112, -111, -111, -110, -109, -109, -108, -107, -106, -106, -105, -105, 
-104, -104, -104, -104, -104, -105, -105, -105, -106, -107, -107, -108, -109, -109, -110, -110, -111, -111, -111, -111, -111, -111, -110, -110, -109, -109, -108, -108, -107, -107, -106, -106, 
-105, -105, -105, -105, -105, -105, -105, -106, -106, -106, -107, -107, -108, -108, -109, -109, -110, -110, -110, -110, -110, -110, -110, -110, -109, -109, -109, -108, -108, -107, -107, -106, 
-106, -106, -106, -105, -105, -105, -106, -106, -106, -106, -107, -107, -107, -108, -108, -109, -109, -109, -110, -110, -110, -110, -110, -110, -109, -109, -109, -108, -108, -108, -107, -107, 
-107, -106, -106, -106, -106, -106, -106, -106, -106, -106, -107, -107, -107, -108, -108, -108, -109, -109, -109, -109, -109, -110, -110, -109, -109, -109, -109, -109, -108, -108, -108, -107, 
-107, -107, -107, -106, -106, -106, -106, -106, -106, -106, -106, -107, -107, -107, -108, -108, -108, -108, -109, -109, -109, -109, -109, -109, -109, -109, -109, -109, -109, -108, -108, -108, 
-107, -107, -107, -107, -106, -106, -106, -106, -106, -106, -106, -107, -107, -107, -107, -108, -108, -108, -108, -109, -109, -109, -109, -109, -109, -109, -109, -109, -109, -109, -108, -108, 
-108, -107, -107, -107, -107, -107, -106, -106, -106, -106, -106, -106, -107, -107, -107, -107, -108, -108, -108, -108, -109, -109, -109, -109, -109, -109, -109, -109, -109, -109, -108, -108, 
-108, -108, -107, -107, -107, -107, -107, -107, -106, -106, -106, -106, -107, -107, -107, -107, -107, -108, -108, -108, -108, -108, -109, -109, -109, -109, -109, -109, -109, -109, -109, -108, 
-108, -108, -108, -108, -107, -107, -107, -107, -107, -107, -106, -106, -107, -107, -107, -107, -107, -107, -108, -108, -108, -108, -108, -109, -109, -109, -109, -109, -109, -109, -109, -109, 
-108, -108, -108, -108, -108, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -108, -108, -108, -108, -108, -109, -109, -109, -109, -109, -109, -109, -109, 
-109, -108, -108, -108, -108, -108, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -108, -108, -108, -108, -108, -109, -109, -109, -109, -109, -109, -109, 
-109, -109, -108, -108, -108, -108, -108, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -108, -108, -108, -108, -108, -109, -109, -109, -109, -109, -109, 
-109, -109, -109, -108, -108, -108, -108, -108, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -108, -108, -108, -108, -108, -109, -109, -109, -109, -109, 
-109, -109, -109, -109, -108, -108, -108, -108, -108, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -108, -108, -108, -108, -108, -109, -109, -109, -109, 
-109, -109, -109, -109, -109, -108, -108, -108, -108, -108, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -108, -108, -108, -108, -108, -109, -109, -109, 
-109, -109, -109, -109, -109, -109, -108, -108, -108, -108, -108, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -108, -108, -108, -108, -108, -109, -109, 
-109, -109, -109, -109, -109, -109, -109, -108, -108, -108, -108, -108, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -107, -108, -108, -108, -108, -108, -109, 
-109, -109, -109, -109, -109, -109, -109, -109, -108, -108, -108, -108, -108, -107, -107, -107, -107, -107, -107, -106, -106, -107, -107, -107, -107, -107, -107, -108, -108, -108, -108, -108, 
-109, -109, -109, -109, -109, -109, -109, -109, -109, -108, -108, -108, -108, -108, -107, -107, -107, -107, -107, -106, -106, -106, -106, -107, -107, -107, -107, -107, -107, -108, -108, -108, 
-108, -109, -109, -109, -109, -109, -109, -109, -109, -109, -109, -108, -108, -108, -108, -107, -107, -107, -107, -106, -106, -106, -106, -106, -106, -107, -107, -107, -107, -107, -108, -108, 
-108, -109, -109, -109, -109, -109, -109, -109, -109, -109, -109, -109, -108, -108, -108, -108, -107, -107, -107, -107, -106, -106, -106, -106, -106, -106, -106, -107, -107, -107, -107, -108, 
-108, -108, -109, -109, -109, -109, -109, -109, -109, -109, -109, -109, -109, -108, -108, -108, -108, -107, -107, -107, -106, -106, -106, -106, -106, -106, -106, -106, -107, -107, -107, -107, 
-108, -108, -108, -109, -109, -109, -109, -109, -110, -110, -109, -109, -109, -109, -109, -108, -108, -108, -107, -107, -107, -106, -106, -106, -106, -106, -106, -106, -106, -106, -107, -107, 
-107, -108, -108, -108, -109, -109, -109, -110, -110, -110, -110, -110, -110, -109, -109, -109, -108, -108, -107, -107, -107, -106, -106, -106, -106, -105, -105, -105, -106, -106, -106, -106, 
-107, -107, -108, -108, -109, -109, -109, -110, -110, -110, -110, -110, -110, -110, -110, -109, -109, -108, -108, -107, -107, -106, -106, -106, -105, -105, -105, -105, -105, -105, -105, -106, 
-106, -107, -107, -108, -108, -109, -109, -110, -110, -111, -111, -111, -111, -111, -111, -110, -110, -109, -109, -108, -107, -107, -106, -105, -105, -105, -104, -104, -104, -104, -104, -105, 
-105, -106, -106, -107, -108, -109, -109, -110, -111, -111, -112, -112, -112, -112, -112, -112, -111, -110, -110, -109, -108, -107, -106, -105, -104, -104, -103, -103, -102, -102, -102, -103, 
-103, -104, -105, -106, -107, -108, -109, -110, -112, -113, -113, -114, -115, -115, -115, -115, -114, -113, -112, -111, -109, -108, -106, -105, -103, -101, -100, -99, -98, -97, -97, -97, 
-98, -99, -101, -102, -105, -107, -110, -112, -115, -118, -121, -123, -125, -126, -127, -127, -126, -124, -122, -118, -113, -107, -100, -92, -83, -73, -62, -50, -38, -25, -13, 
 };

#endif