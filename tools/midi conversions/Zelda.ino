/**
 * Hardchord MIDI Converter (hcmidi.php)
 * Derrick Sobodash <derrick@sobodash.com>
 * Version 0.1.2
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 * 
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer. 
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution. 
 */

#include <hcYmzShield.h>

void setup() {
  Serial.begin(9600);
  Serial.println("Generated by Hardchord MIDI Converter!");
}


void loop() {
  // Zelda.csv
  YMZ.setVolume(8);
  YMZ.setTempo(120);
   YMZ.setChannels(  67,  OFF,  OFF,  OFF,  OFF,  OFF); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(SKIP, SKIP, SKIP,   67, SKIP, SKIP); YMZ.beat(32);
  YMZ.setChannels(  69, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(SKIP, SKIP, SKIP,   69, SKIP, SKIP); YMZ.beat(32);
  YMZ.setChannels(  71, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP, SKIP,   71, SKIP, SKIP); YMZ.beat(32);
  YMZ.setChannels(  72,   64, SKIP, SKIP,   55, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  74,   65, SKIP,   72,   57, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  76,   67, SKIP,   74,   59, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  77,   69, SKIP,   76,   60, SKIP); YMZ.beat(16);
  YMZ.setChannels(  79,   63,   44,   77,   72,   56); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP, SKIP,   79, SKIP, SKIP); YMZ.beat( 8, DOT);
  YMZ.setChannels(  77,   62, SKIP, SKIP,   70, SKIP); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP, SKIP,   77, SKIP, SKIP); YMZ.beat( 8, DOT);
  YMZ.setChannels(  84,   68,   46, SKIP,   77,   58); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP, SKIP,   84, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  82,   67, SKIP, SKIP,   75, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(SKIP, SKIP, SKIP,   82, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  83,   66,   43, SKIP,   74,   55); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP, SKIP,   83, SKIP, SKIP); YMZ.beat( 1, DOT);
  YMZ.setChannels(  71, SKIP, SKIP,   48, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP,   71, SKIP); YMZ.beat(16);
  YMZ.setChannels(SKIP,   55,  OFF, SKIP, SKIP,  OFF); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   64, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 4, DOT);
  YMZ.setChannels(  74, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP,   74, SKIP); YMZ.beat( 8, DOUBLEDOT);
  YMZ.setChannels(  69,  OFF, SKIP,   48, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP,   69, SKIP); YMZ.beat(16);
  YMZ.setChannels(SKIP,   57, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   66, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 4, DOT);
  YMZ.setChannels(  67, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP,   67, SKIP); YMZ.beat(32);
  YMZ.setChannels(  69, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(SKIP,  OFF, SKIP,  OFF,   69, SKIP); YMZ.beat(16);
  YMZ.setChannels(  71, SKIP, SKIP,   48, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP,   71, SKIP); YMZ.beat(16);
  YMZ.setChannels(SKIP,   55, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   64, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 4, DOT);
  YMZ.setChannels(  74, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP,   74, SKIP); YMZ.beat( 8, DOUBLEDOT);
  YMZ.setChannels(  69,  OFF, SKIP,   48, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP,   69, SKIP); YMZ.beat(16);
  YMZ.setChannels(SKIP,   57, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   66, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 2, DOT);
  YMZ.setChannels(  71,  OFF, SKIP,   47, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP,   71, SKIP); YMZ.beat(16);
  YMZ.setChannels(SKIP,   62, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 8, DOT);
  YMZ.setChannels(SKIP,   67, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 4);
  YMZ.setChannels(  74, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP,   74, SKIP); YMZ.beat( 8, DOUBLEDOT);
  YMZ.setChannels(  81, SKIP, SKIP,   46, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(SKIP,  OFF, SKIP, SKIP,   81, SKIP); YMZ.beat(16);
  YMZ.setChannels(SKIP,   61, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 8, DOT);
  YMZ.setChannels(SKIP,   67, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 4);
  YMZ.setChannels(  79, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP,   79, SKIP); YMZ.beat( 8, DOUBLEDOT);
  YMZ.setChannels(  74,  OFF, SKIP,   45, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP,   74, SKIP); YMZ.beat(32);
  YMZ.setChannels(SKIP,   60, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 8, DOT);
  YMZ.setChannels(SKIP,   67, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 4);
  YMZ.setChannels(  72, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP,   72, SKIP); YMZ.beat(16);
  YMZ.setChannels(  71, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP,   71, SKIP); YMZ.beat(32);
  YMZ.setChannels(  69,  OFF, SKIP,   50, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP,   69, SKIP); YMZ.beat(32);
  YMZ.setChannels(SKIP,   60, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 8, DOT);
  YMZ.setChannels(SKIP,   66, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 2, DOT);
  YMZ.setChannels(  71,  OFF, SKIP,   48, SKIP,   76); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP,   71, SKIP); YMZ.beat(32);
  YMZ.setChannels(SKIP,   55, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 8, DOT);
  YMZ.setChannels(SKIP,   64, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 4);
  YMZ.setChannels(  74, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP,   74, SKIP); YMZ.beat( 8, TRIPLEDOT);
  YMZ.setChannels(  69,  OFF, SKIP,   48, SKIP,   78); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP,   69, SKIP); YMZ.beat(32);
  YMZ.setChannels(SKIP,   57, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 8, DOT);
  YMZ.setChannels(SKIP,   66, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 4);
  YMZ.setChannels(  67, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP,   67, SKIP); YMZ.beat(32);
  YMZ.setChannels(  69,  OFF, SKIP,  OFF, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP,   69, SKIP); YMZ.beat(16);
  YMZ.setChannels(  71, SKIP, SKIP,   48, SKIP,   76); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP,   71, SKIP); YMZ.beat(32);
  YMZ.setChannels(SKIP,   55, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 8, DOT);
  YMZ.setChannels(SKIP,   64, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 4, DOT);
  YMZ.setChannels(  74, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP,   74, SKIP); YMZ.beat( 8, DOUBLEDOT);
  YMZ.setChannels(  69,  OFF, SKIP,   48, SKIP,   78); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP,   69, SKIP); YMZ.beat(16);
  YMZ.setChannels(SKIP,   57, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   66, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 2, DOT);
  YMZ.setChannels(  71, SKIP, SKIP,   47, SKIP,   78); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(SKIP,  OFF, SKIP, SKIP,   71, SKIP); YMZ.beat(16);
  YMZ.setChannels(SKIP,   62, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   67, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 4, DOT);
  YMZ.setChannels(  74, SKIP, SKIP, SKIP,  OFF, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP,   74, SKIP); YMZ.beat( 8, DOUBLEDOT);
  YMZ.setChannels(  81,  OFF, SKIP,   46, SKIP,   77); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP,   81, SKIP); YMZ.beat(16);
  YMZ.setChannels(SKIP,   61, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   67, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 4, DOT);
  YMZ.setChannels(  79, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP,   79, SKIP); YMZ.beat( 8, DOUBLEDOT);
  YMZ.setChannels(  86, SKIP, SKIP,   45, SKIP,   76); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP,   86, SKIP); YMZ.beat(16);
  YMZ.setChannels(SKIP,   60, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   67, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 2, DOT);
  YMZ.setChannels(SKIP,  OFF, SKIP,   50, SKIP,   74); YMZ.beat( 8, DOT);
  YMZ.setChannels(SKIP,   60, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 8, DOT);
  YMZ.setChannels(SKIP,   66, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 2);
  YMZ.setChannels(  86, SKIP, SKIP,   53,   74, SKIP); YMZ.beat( 8, DOT);
  YMZ.setChannels(SKIP,   60, SKIP, SKIP, SKIP,  OFF); YMZ.beat( 8, DOT);
  YMZ.setChannels(SKIP,   64, SKIP, SKIP, SKIP,   60); YMZ.beat( 4);
  YMZ.setChannels(  84, SKIP, SKIP, SKIP,   72, SKIP); YMZ.beat( 8, DOT);
  YMZ.setChannels(  83, SKIP, SKIP, SKIP,   71, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  84,  OFF, SKIP,   52,   72,  OFF); YMZ.beat( 8, DOT);
  YMZ.setChannels(  83,   59, SKIP, SKIP,   71, SKIP); YMZ.beat( 8, DOT);
  YMZ.setChannels(  79,   62, SKIP, SKIP,   67,   59); YMZ.beat( 2);
  YMZ.setChannels(  84, SKIP, SKIP,   50,   72, SKIP); YMZ.beat( 8, DOT);
  YMZ.setChannels(SKIP,   57, SKIP, SKIP, SKIP,  OFF); YMZ.beat( 8, DOT);
  YMZ.setChannels(SKIP,   60, SKIP, SKIP, SKIP,   57); YMZ.beat( 4);
  YMZ.setChannels(  83, SKIP, SKIP, SKIP,   71, SKIP); YMZ.beat( 8, DOT);
  YMZ.setChannels(  81, SKIP, SKIP, SKIP,   69, SKIP); YMZ.beat( 8, DOT);
  YMZ.setChannels(  83,  OFF, SKIP,   48,   71,  OFF); YMZ.beat( 8);
  YMZ.setChannels(  81,   55, SKIP, SKIP,   69, SKIP); YMZ.beat( 8, DOT);
  YMZ.setChannels(  76,   59, SKIP, SKIP,   64,   55); YMZ.beat( 2, DOT);
  YMZ.setChannels(  86, SKIP, SKIP,   53,   74, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   60, SKIP, SKIP, SKIP,  OFF); YMZ.beat( 8, DOT);
  YMZ.setChannels(SKIP,   64, SKIP, SKIP, SKIP,   60); YMZ.beat( 4);
  YMZ.setChannels(  84, SKIP, SKIP, SKIP,   72, SKIP); YMZ.beat( 8, DOT);
  YMZ.setChannels(  83, SKIP, SKIP, SKIP,   71, SKIP); YMZ.beat( 8, DOT);
  YMZ.setChannels(  84,  OFF, SKIP,   52,   72,  OFF); YMZ.beat( 8);
  YMZ.setChannels(  83,   59, SKIP, SKIP,   71, SKIP); YMZ.beat( 8, DOT);
  YMZ.setChannels(  79,   62, SKIP, SKIP,   67,   59); YMZ.beat( 4);
  YMZ.setChannels(  84, SKIP, SKIP, SKIP,   72, SKIP); YMZ.beat( 4, DOT);
  YMZ.setChannels(  91, SKIP, SKIP,   51,   79, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   58, SKIP, SKIP, SKIP,  OFF); YMZ.beat( 8, DOT);
  YMZ.setChannels(SKIP,   61, SKIP, SKIP, SKIP,   58); YMZ.beat( 2, DOT);
  YMZ.setChannels(SKIP,  OFF, SKIP,   50, SKIP,  OFF); YMZ.beat( 8, DOT);
  YMZ.setChannels(SKIP,   57, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   60, SKIP, SKIP, SKIP,   57); YMZ.beat( 4, DOT);
  YMZ.setChannels(SKIP,   59, SKIP,   43, SKIP,   53); YMZ.beat( 4, DOUBLEDOT);
  YMZ.setChannels( OFF,  OFF,  OFF,  OFF,  OFF,  OFF); YMZ.mute();
  delay(3000); // Repeat every 3 seconds
}