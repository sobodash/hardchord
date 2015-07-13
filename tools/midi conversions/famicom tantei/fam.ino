/**
 * Hardchord MIDI Converter (hcmidi.php)
 * Derrick Sobodash <derrick@sobodash.com>
 * Version 0.1.0
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
  Serial.println("Generated by Hardchord MIDI2PSG Converter!");
}


void loop() {
  // fam.csv
  YMZ.setVolume(8);
  YMZ.setTempo(128);
  delay(3750);
  YMZ.setChannels(  72,   45,  OFF,  OFF,   60,   57); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   52); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   57); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   52); YMZ.beat( 8);
  YMZ.setChannels( OFF,   43, SKIP, SKIP,  OFF,   55); YMZ.beat( 8);
  YMZ.setChannels(  71, SKIP, SKIP, SKIP,   59,   50); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   55); YMZ.beat( 8);
  YMZ.setChannels(  67, SKIP, SKIP, SKIP,   55,   50); YMZ.beat( 8);
  YMZ.setChannels(  69,   41, SKIP, SKIP,   57,   53); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   48); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   53); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   48); YMZ.beat( 8);
  YMZ.setChannels( OFF,   43, SKIP, SKIP,  OFF,   53); YMZ.beat( 8);
  YMZ.setChannels(  69, SKIP, SKIP, SKIP,   57,   48); YMZ.beat( 8);
  YMZ.setChannels(  71, SKIP, SKIP, SKIP,   59,   55); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   50); YMZ.beat( 8);
  YMZ.setChannels(  72,   45, SKIP, SKIP,   60,   57); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   52); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   57); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   52); YMZ.beat( 8);
  YMZ.setChannels( OFF,   43, SKIP, SKIP,  OFF,   55); YMZ.beat( 8);
  YMZ.setChannels(  71, SKIP, SKIP, SKIP,   59,   50); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   55); YMZ.beat( 8);
  YMZ.setChannels(  67, SKIP, SKIP, SKIP,   55,   50); YMZ.beat( 8);
  YMZ.setChannels(  69,   41, SKIP, SKIP,   57,   53); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   48); YMZ.beat( 8);
  YMZ.setChannels(  71, SKIP, SKIP, SKIP,   59,   53); YMZ.beat( 8);
  YMZ.setChannels(  68, SKIP, SKIP, SKIP,   56,   48); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   40, SKIP, SKIP, SKIP,   52); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   47); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   52); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   47); YMZ.beat( 8);
  YMZ.setChannels(  72,   45, SKIP, SKIP,   60,   57); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   52); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   57); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   52); YMZ.beat( 8);
  YMZ.setChannels( OFF,   43, SKIP, SKIP,  OFF,   55); YMZ.beat( 8);
  YMZ.setChannels(  71, SKIP, SKIP, SKIP,   59,   50); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   55); YMZ.beat( 8);
  YMZ.setChannels(  67, SKIP, SKIP, SKIP,   55,   50); YMZ.beat( 8);
  YMZ.setChannels(  69,   41, SKIP, SKIP,   57,   53); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   48); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   53); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   48); YMZ.beat( 8);
  YMZ.setChannels( OFF,   43, SKIP, SKIP,  OFF,   53); YMZ.beat( 8);
  YMZ.setChannels(  59, SKIP, SKIP, SKIP,   47,   48); YMZ.beat( 8);
  YMZ.setChannels(  60, SKIP, SKIP, SKIP,   48,   55); YMZ.beat( 8);
  YMZ.setChannels(  62, SKIP, SKIP, SKIP,   50,   50); YMZ.beat( 8);
  YMZ.setChannels(  64,   45, SKIP, SKIP,   52,   57); YMZ.beat( 8);
  YMZ.setChannels(  72, SKIP, SKIP, SKIP,   60,   52); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   57); YMZ.beat( 8);
  YMZ.setChannels(  72, SKIP, SKIP, SKIP,   60,   52); YMZ.beat( 8);
  YMZ.setChannels(  74,   43, SKIP, SKIP,   62,   55); YMZ.beat( 8);
  YMZ.setChannels(  71, SKIP, SKIP, SKIP,   59,   50); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   55); YMZ.beat( 8);
  YMZ.setChannels(  74, SKIP, SKIP, SKIP,   62,   50); YMZ.beat( 8);
  YMZ.setChannels(  72,   41, SKIP, SKIP,   60,   53); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   48); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   53); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   48); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   40, SKIP, SKIP, SKIP,   52); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   47); YMZ.beat( 8);
  YMZ.setChannels( OFF, SKIP, SKIP, SKIP,  OFF,   52); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   47); YMZ.beat( 8);
  YMZ.setChannels(  72,   45,   72, SKIP,   60,   57); YMZ.beat( 8);
  YMZ.setChannels(  64, SKIP,   64, SKIP,   52,   52); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   57, SKIP, SKIP, SKIP,   57); YMZ.beat( 8);
  YMZ.setChannels(  65,   45,   65, SKIP,   53,   52); YMZ.beat(16);
  YMZ.setChannels(  64, SKIP,   64, SKIP,   52, SKIP); YMZ.beat(16);
  YMZ.setChannels(  71,   43,   71, SKIP,   59,   55); YMZ.beat( 8);
  YMZ.setChannels(  64, SKIP,   64, SKIP,   52,   52); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   55, SKIP, SKIP, SKIP,   55); YMZ.beat( 8);
  YMZ.setChannels(  65,   43,   65, SKIP,   53,   52); YMZ.beat(16);
  YMZ.setChannels(  64, SKIP,   64, SKIP,   52, SKIP); YMZ.beat(16);
  YMZ.setChannels(  69,   41,   69, SKIP,   57,   53); YMZ.beat( 8);
  YMZ.setChannels(  60, SKIP,   60, SKIP,   48,   48); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   53, SKIP, SKIP, SKIP,   53); YMZ.beat( 8);
  YMZ.setChannels(  62,   41,   62, SKIP,   50,   48); YMZ.beat(16);
  YMZ.setChannels(  60, SKIP,   60, SKIP,   48, SKIP); YMZ.beat(16);
  YMZ.setChannels(  69,   41,   69, SKIP,   57,   53); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   48); YMZ.beat( 8);
  YMZ.setChannels(  71,   50,   71, SKIP,   59,   55); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   47, SKIP, SKIP, SKIP,   50); YMZ.beat( 8);
  YMZ.setChannels(  72,   45,   72, SKIP,   60,   57); YMZ.beat( 8);
  YMZ.setChannels(  64, SKIP,   64, SKIP,   52,   52); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   57, SKIP, SKIP, SKIP,   57); YMZ.beat( 8);
  YMZ.setChannels(  65,   45,   65, SKIP,   53,   52); YMZ.beat(16);
  YMZ.setChannels(  64, SKIP,   64, SKIP,   52, SKIP); YMZ.beat(16);
  YMZ.setChannels(  71,   43,   71, SKIP,   59,   55); YMZ.beat( 8);
  YMZ.setChannels(  64, SKIP,   64, SKIP,   52,   52); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   55, SKIP, SKIP, SKIP,   55); YMZ.beat( 8);
  YMZ.setChannels(  65,   43,   65, SKIP,   53,   52); YMZ.beat(16);
  YMZ.setChannels(  64, SKIP,   64, SKIP,   52, SKIP); YMZ.beat(16);
  YMZ.setChannels(  69,   41,   69, SKIP,   57,   53); YMZ.beat( 8);
  YMZ.setChannels(  60, SKIP,   60, SKIP,   48,   48); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   53, SKIP, SKIP, SKIP,   53); YMZ.beat( 8);
  YMZ.setChannels(  62,   41,   62, SKIP,   50,   48); YMZ.beat(16);
  YMZ.setChannels(  60, SKIP,   60, SKIP,   48, SKIP); YMZ.beat(16);
  YMZ.setChannels(  69,   41,   69, SKIP,   57,   53); YMZ.beat(16);
  YMZ.setChannels(  60, SKIP,   60, SKIP,   48, SKIP); YMZ.beat(16);
  YMZ.setChannels(  65, SKIP,   65, SKIP,   53,   48); YMZ.beat(16);
  YMZ.setChannels(  69, SKIP,   69, SKIP,   57, SKIP); YMZ.beat(16);
  YMZ.setChannels(  72,   41,   72, SKIP,   60,   53); YMZ.beat(16);
  YMZ.setChannels(  69, SKIP,   69, SKIP,   57, SKIP); YMZ.beat(16);
  YMZ.setChannels(  72,   43,   72, SKIP,   60,   48); YMZ.beat(16);
  YMZ.setChannels(  74, SKIP,   74, SKIP,   62, SKIP); YMZ.beat(16);
  YMZ.setChannels( OFF,   48,   77,   77,   65,   60); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP,   76,   76,   64,   55); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   43, SKIP, SKIP, SKIP,   60); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   48,   77,   77,   65,   55); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   76,   76,   64, SKIP); YMZ.beat(16);
  YMZ.setChannels(SKIP,   47,   76,   76,   64,   59); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP,   74,   74,   62,   55); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   43, SKIP, SKIP, SKIP,   59); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   47,   76,   76,   64,   55); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   74,   74,   62, SKIP); YMZ.beat(16);
  YMZ.setChannels(SKIP,   45,   74,   74,   62,   57); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP,   72,   72,   60,   53); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   41, SKIP, SKIP, SKIP,   57); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   45,   74,   74,   62,   53); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   72,   72,   60, SKIP); YMZ.beat(16);
  YMZ.setChannels(SKIP,   45,   72,   72,   60,   57); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   43, SKIP, SKIP, SKIP,   53); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   45, SKIP, SKIP, SKIP,   59); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   47,   71,   71,   59,   55); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   45,   72,   72,   60,   57); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP,   72,   72,   60,   52); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP,   72,   72,   60,   57); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP,   72,   72,   60,   52); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   43,   71,   71,   59,   55); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP,   67,   67,   55,   50); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   55); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP,   69,   69,   57,   50); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   41, SKIP, SKIP, SKIP,   53); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP,   65,   65,   53,   48); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP,   67,   67,   55,   53); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP,   69,   69,   57,   48); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   40,   70,   70,   58,   56); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   44,   71,   71,   59,   52); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   45, SKIP, SKIP, SKIP,   56); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   47, SKIP, SKIP, SKIP,   52); YMZ.beat( 8);
  YMZ.setChannels(  72,   45,   72,  OFF,   60,   57); YMZ.beat( 8);
  YMZ.setChannels(  72, SKIP,   72, SKIP,   60,   52); YMZ.beat( 8);
  YMZ.setChannels(  72, SKIP,   72, SKIP,   60,   57); YMZ.beat( 8);
  YMZ.setChannels(  72, SKIP,   72, SKIP,   60,   52); YMZ.beat( 8);
  YMZ.setChannels(  71,   43,   71, SKIP,   59,   55); YMZ.beat( 8);
  YMZ.setChannels(  76, SKIP,   76, SKIP,   64,   50); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   55); YMZ.beat( 8);
  YMZ.setChannels(  74, SKIP,   74, SKIP,   62,   50); YMZ.beat( 8);
  YMZ.setChannels(  74,   41,   74, SKIP,   62,   53); YMZ.beat( 8);
  YMZ.setChannels(  72, SKIP,   72, SKIP,   60,   48); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   53); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   48); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   43, SKIP, SKIP, SKIP,   55); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   50); YMZ.beat( 8);
  YMZ.setChannels( OFF, SKIP,  OFF, SKIP,  OFF,   55); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   50); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   45,   72,   72,   60,   57); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP,   72,   72,   60,   52); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP,   72,   72,   60,   57); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP,   72,   72,   60,   52); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   43,   71,   71,   59,   55); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP,   67,   67,   55,   50); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   55); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP,   69,   69,   57,   50); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   41, SKIP, SKIP, SKIP,   53); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP,   65,   65,   53,   48); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP,   67,   67,   55,   53); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP,   69,   69,   57,   48); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   40,   70,   70,   58,   56); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   44,   71,   71,   59,   52); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   45, SKIP, SKIP, SKIP,   56); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   47, SKIP, SKIP, SKIP,   52); YMZ.beat( 8);
  YMZ.setChannels(  72,   45,   72,  OFF,   60,   57); YMZ.beat( 8);
  YMZ.setChannels(  72, SKIP,   72, SKIP,   60,   52); YMZ.beat( 8);
  YMZ.setChannels(  72, SKIP,   72, SKIP,   60,   57); YMZ.beat( 8);
  YMZ.setChannels(  72, SKIP,   72, SKIP,   60,   52); YMZ.beat( 8);
  YMZ.setChannels(  76,   44,   76, SKIP,   64,   56); YMZ.beat( 8);
  YMZ.setChannels(  75, SKIP,   75, SKIP,   63,   52); YMZ.beat( 8);
  YMZ.setChannels(  74, SKIP,   74, SKIP,   62,   56); YMZ.beat( 8);
  YMZ.setChannels(  72,   40,   72, SKIP,   60,   52); YMZ.beat( 8);
  YMZ.setChannels(  69,   45,   69, SKIP,   57,   57); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   52); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   57); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   52); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   57); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   52); YMZ.beat( 8);
  YMZ.setChannels( OFF,  OFF,  OFF, SKIP,  OFF,   57); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   52); YMZ.beat( 8);
  YMZ.setChannels(  72,   45, SKIP, SKIP,   60,   57); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   52); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   57); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   52); YMZ.beat( 8);
  YMZ.setChannels( OFF,   43, SKIP, SKIP,  OFF,   55); YMZ.beat( 8);
  YMZ.setChannels(  71, SKIP, SKIP, SKIP,   59,   50); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   55); YMZ.beat( 8);
  YMZ.setChannels(  67, SKIP, SKIP, SKIP,   55,   50); YMZ.beat( 8);
  YMZ.setChannels(  69,   41, SKIP, SKIP,   57,   53); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   48); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   53); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   48); YMZ.beat( 8);
  YMZ.setChannels( OFF,   43, SKIP, SKIP,  OFF,   53); YMZ.beat( 8);
  YMZ.setChannels(  69, SKIP, SKIP, SKIP,   57,   48); YMZ.beat( 8);
  YMZ.setChannels(  71, SKIP, SKIP, SKIP,   59,   55); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   50); YMZ.beat( 8);
  YMZ.setChannels(  72,   45, SKIP, SKIP,   60,   57); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   52); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   57); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   52); YMZ.beat( 8);
  YMZ.setChannels( OFF,   43, SKIP, SKIP,  OFF,   55); YMZ.beat( 8);
  YMZ.setChannels(  71, SKIP, SKIP, SKIP,   59,   50); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   55); YMZ.beat( 8);
  YMZ.setChannels(  67, SKIP, SKIP, SKIP,   55,   50); YMZ.beat( 8);
  YMZ.setChannels(  69,   41, SKIP, SKIP,   57,   53); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   48); YMZ.beat( 8);
  YMZ.setChannels(  71, SKIP, SKIP, SKIP,   59,   53); YMZ.beat( 8);
  YMZ.setChannels(  68, SKIP, SKIP, SKIP,   56,   48); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   40, SKIP, SKIP, SKIP,   52); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   47); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   52); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   47); YMZ.beat( 8);
  YMZ.setChannels(  72,   45, SKIP, SKIP,   60,   57); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   52); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   57); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   52); YMZ.beat( 8);
  YMZ.setChannels( OFF,   43, SKIP, SKIP,  OFF,   55); YMZ.beat( 8);
  YMZ.setChannels(  71, SKIP, SKIP, SKIP,   59,   50); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   55); YMZ.beat( 8);
  YMZ.setChannels(  67, SKIP, SKIP, SKIP,   55,   50); YMZ.beat( 8);
  YMZ.setChannels(  69,   41, SKIP, SKIP,   57,   53); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   48); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   53); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   48); YMZ.beat( 8);
  YMZ.setChannels( OFF,   43, SKIP, SKIP,  OFF,   53); YMZ.beat( 8);
  YMZ.setChannels(  59, SKIP, SKIP, SKIP,   47,   48); YMZ.beat( 8);
  YMZ.setChannels(  60, SKIP, SKIP, SKIP,   48,   55); YMZ.beat( 8);
  YMZ.setChannels(  62, SKIP, SKIP, SKIP,   50,   50); YMZ.beat( 8);
  YMZ.setChannels(  64,   45, SKIP, SKIP,   52,   57); YMZ.beat( 8);
  YMZ.setChannels(  72, SKIP, SKIP, SKIP,   60,   52); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   57); YMZ.beat( 8);
  YMZ.setChannels(  72, SKIP, SKIP, SKIP,   60,   52); YMZ.beat( 8);
  YMZ.setChannels(  74,   43, SKIP, SKIP,   62,   55); YMZ.beat( 8);
  YMZ.setChannels(  71, SKIP, SKIP, SKIP,   59,   50); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   55); YMZ.beat( 8);
  YMZ.setChannels(  74, SKIP, SKIP, SKIP,   62,   50); YMZ.beat( 8);
  YMZ.setChannels(  72,   41, SKIP, SKIP,   60,   53); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   48); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   53); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   48); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   40, SKIP, SKIP, SKIP,   52); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   47); YMZ.beat( 8);
  YMZ.setChannels( OFF, SKIP, SKIP, SKIP,  OFF,   52); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   47); YMZ.beat( 8);
  YMZ.setChannels(  72,   45,   72, SKIP,   60,   57); YMZ.beat( 8);
  YMZ.setChannels(  64, SKIP,   64, SKIP,   52,   52); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   57, SKIP, SKIP, SKIP,   57); YMZ.beat( 8);
  YMZ.setChannels(  65,   45,   65, SKIP,   53,   52); YMZ.beat(16);
  YMZ.setChannels(  64, SKIP,   64, SKIP,   52, SKIP); YMZ.beat(16);
  YMZ.setChannels(  71,   43,   71, SKIP,   59,   55); YMZ.beat( 8);
  YMZ.setChannels(  64, SKIP,   64, SKIP,   52,   52); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   55, SKIP, SKIP, SKIP,   55); YMZ.beat( 8);
  YMZ.setChannels(  65,   43,   65, SKIP,   53,   52); YMZ.beat(16);
  YMZ.setChannels(  64, SKIP,   64, SKIP,   52, SKIP); YMZ.beat(16);
  YMZ.setChannels(  69,   41,   69, SKIP,   57,   53); YMZ.beat( 8);
  YMZ.setChannels(  60, SKIP,   60, SKIP,   48,   48); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   53, SKIP, SKIP, SKIP,   53); YMZ.beat( 8);
  YMZ.setChannels(  62,   41,   62, SKIP,   50,   48); YMZ.beat(16);
  YMZ.setChannels(  60, SKIP,   60, SKIP,   48, SKIP); YMZ.beat(16);
  YMZ.setChannels(  69,   41,   69, SKIP,   57,   53); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   48); YMZ.beat( 8);
  YMZ.setChannels(  71,   50,   71, SKIP,   59,   55); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   47, SKIP, SKIP, SKIP,   50); YMZ.beat( 8);
  YMZ.setChannels(  72,   45,   72, SKIP,   60,   57); YMZ.beat( 8);
  YMZ.setChannels(  64, SKIP,   64, SKIP,   52,   52); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   57, SKIP, SKIP, SKIP,   57); YMZ.beat( 8);
  YMZ.setChannels(  65,   45,   65, SKIP,   53,   52); YMZ.beat(16);
  YMZ.setChannels(  64, SKIP,   64, SKIP,   52, SKIP); YMZ.beat(16);
  YMZ.setChannels(  71,   43,   71, SKIP,   59,   55); YMZ.beat( 8);
  YMZ.setChannels(  64, SKIP,   64, SKIP,   52,   52); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   55, SKIP, SKIP, SKIP,   55); YMZ.beat( 8);
  YMZ.setChannels(  65,   43,   65, SKIP,   53,   52); YMZ.beat(16);
  YMZ.setChannels(  64, SKIP,   64, SKIP,   52, SKIP); YMZ.beat(16);
  YMZ.setChannels(  69,   41,   69, SKIP,   57,   53); YMZ.beat( 8);
  YMZ.setChannels(  60, SKIP,   60, SKIP,   48,   48); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   53, SKIP, SKIP, SKIP,   53); YMZ.beat( 8);
  YMZ.setChannels(  62,   41,   62, SKIP,   50,   48); YMZ.beat(16);
  YMZ.setChannels(  60, SKIP,   60, SKIP,   48, SKIP); YMZ.beat(16);
  YMZ.setChannels(  69,   41,   69, SKIP,   57,   53); YMZ.beat(16);
  YMZ.setChannels(  60, SKIP,   60, SKIP,   48, SKIP); YMZ.beat(16);
  YMZ.setChannels(  65, SKIP,   65, SKIP,   53,   48); YMZ.beat(16);
  YMZ.setChannels(  69, SKIP,   69, SKIP,   57, SKIP); YMZ.beat(16);
  YMZ.setChannels(  72,   41,   72, SKIP,   60,   53); YMZ.beat(16);
  YMZ.setChannels(  69, SKIP,   69, SKIP,   57, SKIP); YMZ.beat(16);
  YMZ.setChannels(  72,   43,   72, SKIP,   60,   48); YMZ.beat(16);
  YMZ.setChannels(  74, SKIP,   74, SKIP,   62, SKIP); YMZ.beat(16);
  YMZ.setChannels( OFF,   48,   77,   77,   65,   60); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP,   76,   76,   64,   55); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   43, SKIP, SKIP, SKIP,   60); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   48,   77,   77,   65,   55); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   76,   76,   64, SKIP); YMZ.beat(16);
  YMZ.setChannels(SKIP,   47,   76,   76,   64,   59); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP,   74,   74,   62,   55); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   43, SKIP, SKIP, SKIP,   59); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   47,   76,   76,   64,   55); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   74,   74,   62, SKIP); YMZ.beat(16);
  YMZ.setChannels(SKIP,   45,   74,   74,   62,   57); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP,   72,   72,   60,   53); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   41, SKIP, SKIP, SKIP,   57); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   45,   74,   74,   62,   53); YMZ.beat(16);
  YMZ.setChannels(SKIP, SKIP,   72,   72,   60, SKIP); YMZ.beat(16);
  YMZ.setChannels(SKIP,   45,   72,   72,   60,   57); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   43, SKIP, SKIP, SKIP,   53); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   45, SKIP, SKIP, SKIP,   59); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   47,   71,   71,   59,   55); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   45,   72,   72,   60,   57); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP,   72,   72,   60,   52); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP,   72,   72,   60,   57); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP,   72,   72,   60,   52); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   43,   71,   71,   59,   55); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP,   67,   67,   55,   50); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   55); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP,   69,   69,   57,   50); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   41, SKIP, SKIP, SKIP,   53); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP,   65,   65,   53,   48); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP,   67,   67,   55,   53); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP,   69,   69,   57,   48); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   40,   70,   70,   58,   56); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   44,   71,   71,   59,   52); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   45, SKIP, SKIP, SKIP,   56); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   47, SKIP, SKIP, SKIP,   52); YMZ.beat( 8);
  YMZ.setChannels(  72,   45,   72,  OFF,   60,   57); YMZ.beat( 8);
  YMZ.setChannels(  72, SKIP,   72, SKIP,   60,   52); YMZ.beat( 8);
  YMZ.setChannels(  72, SKIP,   72, SKIP,   60,   57); YMZ.beat( 8);
  YMZ.setChannels(  72, SKIP,   72, SKIP,   60,   52); YMZ.beat( 8);
  YMZ.setChannels(  71,   43,   71, SKIP,   59,   55); YMZ.beat( 8);
  YMZ.setChannels(  76, SKIP,   76, SKIP,   64,   50); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   55); YMZ.beat( 8);
  YMZ.setChannels(  74, SKIP,   74, SKIP,   62,   50); YMZ.beat( 8);
  YMZ.setChannels(  74,   41,   74, SKIP,   62,   53); YMZ.beat( 8);
  YMZ.setChannels(  72, SKIP,   72, SKIP,   60,   48); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   53); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   48); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   43, SKIP, SKIP, SKIP,   55); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   50); YMZ.beat( 8);
  YMZ.setChannels( OFF, SKIP,  OFF, SKIP,  OFF,   55); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   50); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   45,   72,   72,   60,   57); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP,   72,   72,   60,   52); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP,   72,   72,   60,   57); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP,   72,   72,   60,   52); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   43,   71,   71,   59,   55); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP,   67,   67,   55,   50); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   55); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP,   69,   69,   57,   50); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   41, SKIP, SKIP, SKIP,   53); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP,   65,   65,   53,   48); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP,   67,   67,   55,   53); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP,   69,   69,   57,   48); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   40,   70,   70,   58,   56); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   44,   71,   71,   59,   52); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   45, SKIP, SKIP, SKIP,   56); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   47, SKIP, SKIP, SKIP,   52); YMZ.beat( 8);
  YMZ.setChannels(  72,   45,   72,  OFF,   60,   57); YMZ.beat( 8);
  YMZ.setChannels(  72, SKIP,   72, SKIP,   60,   52); YMZ.beat( 8);
  YMZ.setChannels(  72, SKIP,   72, SKIP,   60,   57); YMZ.beat( 8);
  YMZ.setChannels(  72, SKIP,   72, SKIP,   60,   52); YMZ.beat( 8);
  YMZ.setChannels(  76,   44,   76, SKIP,   64,   56); YMZ.beat( 8);
  YMZ.setChannels(  75, SKIP,   75, SKIP,   63,   52); YMZ.beat( 8);
  YMZ.setChannels(  74, SKIP,   74, SKIP,   62,   56); YMZ.beat( 8);
  YMZ.setChannels(  72,   40,   72, SKIP,   60,   52); YMZ.beat( 8);
  YMZ.setChannels(  69,   45,   69, SKIP,   57,   57); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   52); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   57); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   52); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   57); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   52); YMZ.beat( 8);
  YMZ.setChannels( OFF,  OFF,  OFF, SKIP,  OFF,   57); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP, SKIP, SKIP,   52); YMZ.beat( 8);
  YMZ.setChannels( OFF,  OFF,  OFF,  OFF,  OFF,  OFF); YMZ.mute();
  delay(3000); // Repeat every 3 seconds
}
