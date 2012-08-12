/*  Example of a polyphonic sketch in which 
 *  sound tables are shared between 4 voices,
 *  using Mozzi sonification library.
 *
 *  Demonstrates use of Sample() objects as players, 
 *  using setTable() to share many sound tables between 
 *  a few players.
 *  Shows how to use Samples and sound tables in arrays,
 *  EventDelay() for scheduling, and rand() to select 
 *  sound tables and vary the gain of each player.
 *
 *  Circuit: Audio output on digital pin 9.
 *
 *  Mozzi help/discussion/announcements:
 *  https://groups.google.com/forum/#!forum/mozzi-users
 *
 *  Tim Barrass 2012.
 *  This example code is in the public domain.
 */

#include <MozziGuts.h>
#include <Sample.h>
#include <EventDelay.h>
#include <utils.h> // for rand()
#include <tables/bamboo/bamboo_00_2048_int8.h> // wavetable data
#include <tables/bamboo/bamboo_01_2048_int8.h> // wavetable data
#include <tables/bamboo/bamboo_02_2048_int8.h> // wavetable data
#include <tables/bamboo/bamboo_03_2048_int8.h> // wavetable data
#include <tables/bamboo/bamboo_04_2048_int8.h> // wavetable data
#include <tables/bamboo/bamboo_05_2048_int8.h> // wavetable data
#include <tables/bamboo/bamboo_06_2048_int8.h> // wavetable data
#include <tables/bamboo/bamboo_07_2048_int8.h> // wavetable data
#include <tables/bamboo/bamboo_08_2048_int8.h> // wavetable data
#include <tables/bamboo/bamboo_09_2048_int8.h> // wavetable data
#include <tables/bamboo/bamboo_10_2048_int8.h> // wavetable data


#define CONTROL_RATE 64

// for scheduling samples to play
EventDelay kTriggerDelay(CONTROL_RATE);
EventDelay kTriggerSlowDelay(CONTROL_RATE);

byte ms_per_note = 111; // subject to CONTROL_RATE

const byte NUM_PLAYERS = 4;
const byte NUM_TABLES = 11;

Sample <BAMBOO_00_2048_NUM_CELLS, AUDIO_RATE> aSample[NUM_PLAYERS] ={
  Sample <BAMBOO_00_2048_NUM_CELLS, AUDIO_RATE> (BAMBOO_00_2048_DATA),
  Sample <BAMBOO_01_2048_NUM_CELLS, AUDIO_RATE> (BAMBOO_01_2048_DATA),
  Sample <BAMBOO_02_2048_NUM_CELLS, AUDIO_RATE> (BAMBOO_02_2048_DATA),
  Sample <BAMBOO_03_2048_NUM_CELLS, AUDIO_RATE> (BAMBOO_03_2048_DATA),
};

prog_char * tables[NUM_TABLES] ={
  BAMBOO_00_2048_DATA,
  BAMBOO_01_2048_DATA,
  BAMBOO_02_2048_DATA,
  BAMBOO_03_2048_DATA,
  BAMBOO_04_2048_DATA,
  BAMBOO_05_2048_DATA,
  BAMBOO_06_2048_DATA,
  BAMBOO_07_2048_DATA,
  BAMBOO_08_2048_DATA,
  BAMBOO_09_2048_DATA,
  BAMBOO_10_2048_DATA
};

byte gain[NUM_PLAYERS];


void setup(){
  for (int i=0;i<NUM_PLAYERS;i++){  // play at the speed they're sampled at
    (aSample[i]).setFreq((float) BAMBOO_00_2048_SAMPLERATE / (float) BAMBOO_00_2048_NUM_CELLS);   
  }
  kTriggerDelay.set(ms_per_note); // countdown ms, within resolution of CONTROL_RATE
  kTriggerSlowDelay.set(ms_per_note*6); // resolution-dependent inaccuracy leads to polyrhythm :)

  startMozzi(CONTROL_RATE);
}


byte randomGain(){
  return rand((byte)80,(byte)255);
}


void updateControl(){
  static byte player =0;
  
  if(kTriggerDelay.ready()){
    gain[player] = randomGain();
    (aSample[player]).setTable(tables[rand(NUM_TABLES)]);
    (aSample[player]).start();
    player++;
    if(player==NUM_PLAYERS) player = 0;
    kTriggerDelay.start();
  }

  if(kTriggerSlowDelay.ready()){
    gain[player] = randomGain();
    (aSample[player]).setTable(tables[rand(NUM_TABLES)]);
    (aSample[player]).start();
    player++;
    if(player==NUM_PLAYERS) player = 0;
    kTriggerSlowDelay.start();
  }
}


int updateAudio(){
  long asig=0;
  for (byte i=0;i<NUM_PLAYERS;i++){
    asig += (int) (aSample[i]).next() * gain[i];
  }
  asig >>= 6; // shift into usable range
  //clip any stray peaks to max output range
  return (int)constrain((int)asig,-244,243);
}


void loop(){
  audioHook();
}




















