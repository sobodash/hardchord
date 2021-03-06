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
  // Smb2-1.csv
  YMZ.setVolume(8);
  YMZ.setTempo(120);
  YMZ.beat( 2, DOUBLEDOT);
  YMZ.setChannels(  71,   62,  OFF,   79,   62,  OFF); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  70,   61, SKIP,   78,   61, SKIP); delay(5);
  YMZ.setChannels(  71,   62, SKIP,   79,   62, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(SKIP,   61, SKIP, SKIP,   61, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  70,   60, SKIP,   78,   60, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  65,   59, SKIP,   74,   59, SKIP); delay(5);
  YMZ.setChannels(  69,   60, SKIP,   77,   60, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(SKIP,   59, SKIP, SKIP,   59, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  62,   55, SKIP,   71,   55, SKIP); delay(5);
  YMZ.setChannels(  65, SKIP, SKIP,   74, SKIP, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  62,   53, SKIP,   71,   53, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  59,   52, SKIP,   68,   52, SKIP); delay(5);
  YMZ.setChannels(  60, SKIP, SKIP,   69, SKIP, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  59,   50, SKIP,   67,   50, SKIP); delay(5);
  YMZ.setChannels( OFF,   52, SKIP,   68,   52, SKIP); YMZ.beat(16, DOT);
  YMZ.setChannels(SKIP,   50, SKIP, SKIP,   50, SKIP); YMZ.beat(16, DOT);
  YMZ.setChannels(  71,   62, SKIP,   79,   62, SKIP); YMZ.beat( 8, DOT);
  YMZ.setChannels(  65,   50, SKIP,   67,   50, SKIP); delay(5);
  YMZ.setChannels(  71, SKIP, SKIP,   79, SKIP, SKIP); YMZ.beat( 8, DOT);
  YMZ.setChannels(SKIP,   55, SKIP, SKIP,   55, SKIP); YMZ.beat( 8, DOT);
  YMZ.setChannels(  72,   48, SKIP,   79,   48, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  64,  OFF, SKIP,   72,  OFF, SKIP); delay(5);
  YMZ.setChannels(  72, SKIP, SKIP,   79, SKIP, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  67,   55, SKIP,   76,   55, SKIP); delay(5);
  YMZ.setChannels(  64, SKIP, SKIP,   72, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  72,  OFF, SKIP,   79,  OFF, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(SKIP,   48, SKIP, SKIP,   48, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  64,  OFF, SKIP,   72,  OFF, SKIP); delay(5);
  YMZ.setChannels(  72, SKIP, SKIP,   79, SKIP, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  67,   55, SKIP,   76,   55, SKIP); delay(5);
  YMZ.setChannels(  64, SKIP, SKIP,   72, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  72,  OFF, SKIP,   79,  OFF, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  63,   47, SKIP,   71,   47, SKIP); delay(5);
  YMZ.setChannels(  72, SKIP, SKIP,   79, SKIP, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  67, SKIP, SKIP,   75, SKIP, SKIP); delay(5);
  YMZ.setChannels(  63, SKIP, SKIP,   71, SKIP, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  71,  OFF, SKIP,   79,  OFF, SKIP); delay(5);
  YMZ.setChannels(  67, SKIP, SKIP,   75, SKIP, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  75,   55, SKIP,   83,   55, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  71,  OFF, SKIP,   81,  OFF, SKIP); delay(5);
  YMZ.setChannels(  75, SKIP, SKIP,   83, SKIP, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(SKIP,   47, SKIP, SKIP,   47, SKIP); YMZ.beat( 8, DOT);
  YMZ.setChannels(SKIP,   55, SKIP, SKIP,   55, SKIP); YMZ.beat( 8, DOT);
  YMZ.setChannels(  70,   46, SKIP,   79,   46, SKIP); delay(5);
  YMZ.setChannels(  71, SKIP, SKIP,   81, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  70,  OFF, SKIP,   79,  OFF, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  67,   55, SKIP,   74,   55, SKIP); delay(5);
  YMZ.setChannels(  62, SKIP, SKIP,   70, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  70,  OFF, SKIP,   79,  OFF, SKIP); delay(5);
  YMZ.setChannels(  67, SKIP, SKIP,   74, SKIP, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(SKIP,   46, SKIP, SKIP,   46, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  70,  OFF, SKIP,   79,  OFF, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  67,   55, SKIP,   74,   55, SKIP); delay(5);
  YMZ.setChannels(  62, SKIP, SKIP,   70, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  70,  OFF, SKIP,   79,  OFF, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  64,   45, SKIP,   73,   45, SKIP); delay(5);
  YMZ.setChannels(  70, SKIP, SKIP,   79, SKIP, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  69, SKIP, SKIP,   76, SKIP, SKIP); delay(5);
  YMZ.setChannels(  64, SKIP, SKIP,   73, SKIP, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  73,  OFF, SKIP,   79,  OFF, SKIP); delay(5);
  YMZ.setChannels(  69, SKIP, SKIP,   76, SKIP, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  76,   55, SKIP,   83,   55, SKIP); delay(5);
  YMZ.setChannels(  73, SKIP, SKIP,   79, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  76,  OFF, SKIP,   83,  OFF, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(SKIP,   45, SKIP, SKIP,   45, SKIP); YMZ.beat( 8, DOT);
  YMZ.setChannels(SKIP,   55, SKIP, SKIP,   55, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  76,  OFF, SKIP,   83,  OFF, SKIP); delay(5);
  YMZ.setChannels(  73, SKIP, SKIP,   81, SKIP, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  81,   41, SKIP,   84,   41, SKIP); delay(5);
  YMZ.setChannels(  76, SKIP, SKIP,   83, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  81,  OFF, SKIP,   84,  OFF, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  81,   53, SKIP,   84,   53, SKIP); delay(5);
  YMZ.setChannels(  79, SKIP, SKIP,   83, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  77,  OFF, SKIP,   81,  OFF, SKIP); delay(5);
  YMZ.setChannels(  81, SKIP, SKIP,   84, SKIP, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(SKIP,   42, SKIP, SKIP,   42, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  81,  OFF, SKIP,   84,  OFF, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  79,   54, SKIP,   83,   54, SKIP); delay(5);
  YMZ.setChannels(  81, SKIP, SKIP,   84, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  78,  OFF, SKIP,   81,  OFF, SKIP); delay(5);
  YMZ.setChannels(  79, SKIP, SKIP,   83, SKIP, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  78,   43, SKIP,   81,   43, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  75,  OFF, SKIP,   78,  OFF, SKIP); delay(5);
  YMZ.setChannels(  76, SKIP, SKIP,   79, SKIP, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  76,   55, SKIP,   79,   55, SKIP); delay(5);
  YMZ.setChannels(  75, SKIP, SKIP,   78, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  76,  OFF, SKIP,   79,  OFF, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(SKIP,   45, SKIP, SKIP,   45, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  69,  OFF, SKIP,   73,  OFF, SKIP); delay(5);
  YMZ.setChannels(  72, SKIP, SKIP,   76, SKIP, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  71,   57, SKIP,   74,   57, SKIP); delay(5);
  YMZ.setChannels(  69, SKIP, SKIP,   73, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  73,  OFF, SKIP,   76,  OFF, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  74,   50, SKIP,   77,   50, SKIP); delay(5);
  YMZ.setChannels(  73, SKIP, SKIP,   76, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  72,  OFF, SKIP,   76,  OFF, SKIP); delay(5);
  YMZ.setChannels(  74, SKIP, SKIP,   77, SKIP, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  74,   53, SKIP,   77,   53, SKIP); delay(5);
  YMZ.setChannels(  72, SKIP, SKIP,   76, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  74,  OFF, SKIP,   77,  OFF, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(SKIP,   43, SKIP, SKIP,   43, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  72,  OFF, SKIP,   76,  OFF, SKIP); delay(5);
  YMZ.setChannels(  67, SKIP, SKIP,   71, SKIP, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  72,   50, SKIP,   76,   50, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  67,  OFF, SKIP,   72,  OFF, SKIP); delay(5);
  YMZ.setChannels(  71, SKIP, SKIP,   74, SKIP, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(SKIP,   48, SKIP, SKIP,   48, SKIP); YMZ.beat( 8, DOT);
  YMZ.setChannels(SKIP,   43, SKIP, SKIP,   43, SKIP); YMZ.beat( 8, DOT);
  YMZ.setChannels(SKIP,   48, SKIP, SKIP,   48, SKIP); YMZ.beat( 4, DOT);
  YMZ.setChannels(SKIP,   48, SKIP, SKIP,   48, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  67,  OFF, SKIP,   76,  OFF, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(SKIP,   50, SKIP, SKIP,   50, SKIP); YMZ.beat( 8, DOT);
  YMZ.setChannels(  72,   52, SKIP,   79,   52, SKIP); YMZ.beat( 8, DOT);
  YMZ.setChannels(  76,   55, SKIP,   81,   55, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  79,  OFF, SKIP,   84,  OFF, SKIP); delay(5);
  YMZ.setChannels(  76, SKIP, SKIP,   81, SKIP, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(SKIP,   57, SKIP, SKIP,   57, SKIP); YMZ.beat( 8, DOT);
  YMZ.setChannels(SKIP,   55, SKIP, SKIP,   55, SKIP); YMZ.beat( 8, DOT);
  YMZ.setChannels(  76,   52, SKIP,   81,   52, SKIP); delay(5);
  YMZ.setChannels(  79, SKIP, SKIP,   84, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  76,  OFF, SKIP,   81,  OFF, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  69,   48, SKIP,   76,   48, SKIP); delay(5);
  YMZ.setChannels(  72, SKIP, SKIP,   79, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  67,  OFF, SKIP,   72,  OFF, SKIP); delay(5);
  YMZ.setChannels(  69, SKIP, SKIP,   76, SKIP, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  67,   50, SKIP,   74,   50, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  67,  OFF, SKIP,   76,  OFF, SKIP); delay(5);
  YMZ.setChannels(  66, SKIP, SKIP,   74, SKIP, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  66,   52, SKIP,   74,   52, SKIP); delay(5);
  YMZ.setChannels(  67, SKIP, SKIP,   76, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  67,  OFF, SKIP,   76,  OFF, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  66,   54, SKIP,   74,   54, SKIP); delay(5);
  YMZ.setChannels(  67, SKIP, SKIP,   76, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  62,  OFF, SKIP,   69,  OFF, SKIP); delay(5);
  YMZ.setChannels(  66, SKIP, SKIP,   74, SKIP, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(SKIP,   45, SKIP, SKIP,   45, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  66,  OFF, SKIP,   74,  OFF, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(SKIP,   50, SKIP, SKIP,   50, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  62,   52, SKIP,   69,   52, SKIP); delay(5);
  YMZ.setChannels(  66, SKIP, SKIP,   74, SKIP, SKIP); YMZ.beat(32);
  YMZ.setChannels(  66, SKIP, SKIP,   74, SKIP, SKIP); YMZ.beat(64, DOT);
  YMZ.setChannels(SKIP,   48, SKIP, SKIP,   48, SKIP); YMZ.beat(64);
  YMZ.setChannels(  62, SKIP, SKIP,   69, SKIP, SKIP); YMZ.beat(32);
  YMZ.setChannels(  62, SKIP, SKIP,   74, SKIP, SKIP); YMZ.beat(32);
  YMZ.setChannels(  66,  OFF, SKIP,   69,  OFF, SKIP); YMZ.beat(32);
  YMZ.setChannels(  62, SKIP, SKIP,   74, SKIP, SKIP); delay(5);
  YMZ.setChannels(  66, SKIP, SKIP,   69, SKIP, SKIP); YMZ.beat(32);
  YMZ.setChannels(  66,   47, SKIP,   74,   47, SKIP); YMZ.beat(32);
  YMZ.setChannels(  62, SKIP, SKIP,   74, SKIP, SKIP); YMZ.beat(32);
  YMZ.setChannels(  66, SKIP, SKIP,   69, SKIP, SKIP); YMZ.beat(32);
  YMZ.setChannels(  62,  OFF, SKIP,   74,  OFF, SKIP); YMZ.beat(32);
  YMZ.setChannels(  66, SKIP, SKIP,   69, SKIP, SKIP); delay(5);
  YMZ.setChannels(  62, SKIP, SKIP,   74, SKIP, SKIP); YMZ.beat(64);
  YMZ.setChannels(SKIP,   45, SKIP, SKIP,   45, SKIP); YMZ.beat(64);
  YMZ.setChannels(  66, SKIP, SKIP,   74, SKIP, SKIP); YMZ.beat(16, DOT);
  YMZ.setChannels(  65,  OFF, SKIP,   74,  OFF, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(SKIP,   43, SKIP, SKIP,   43, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  67,  OFF, SKIP,   76,  OFF, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  65,   55, SKIP,   74,   55, SKIP); delay(5);
  YMZ.setChannels(  67, SKIP, SKIP,   76, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  67,  OFF, SKIP,   76,  OFF, SKIP); delay(5);
  YMZ.setChannels(  65, SKIP, SKIP,   74, SKIP, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  67,   53, SKIP,   76,   53, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  67,  OFF, SKIP,   76,  OFF, SKIP); delay(5);
  YMZ.setChannels(  65, SKIP, SKIP,   74, SKIP, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(SKIP,   50, SKIP, SKIP,   50, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  72,  OFF, SKIP,   81,  OFF, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(SKIP,   47, SKIP, SKIP,   47, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  71,  OFF, SKIP,   79,  OFF, SKIP); delay(5);
  YMZ.setChannels(  72, SKIP, SKIP,   81, SKIP, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  72,   43, SKIP,   81,   43, SKIP); delay(5);
  YMZ.setChannels(  71, SKIP, SKIP,   79, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  72,  OFF, SKIP,   81,  OFF, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  67,   45, SKIP,   76,   45, SKIP); delay(5);
  YMZ.setChannels(  71, SKIP, SKIP,   79, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  65,  OFF, SKIP,   74,  OFF, SKIP); delay(5);
  YMZ.setChannels(  67, SKIP, SKIP,   76, SKIP, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  65,   47, SKIP,   74,   47, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  72,  OFF, SKIP,   76,  OFF, SKIP); delay(5);
  YMZ.setChannels(  64, SKIP, SKIP,   72, SKIP, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(SKIP,   48, SKIP, SKIP,   48, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  72,  OFF, SKIP,   76,  OFF, SKIP); YMZ.beat(32);
  YMZ.setChannels(  72, SKIP, SKIP,   76, SKIP, SKIP); delay(5);
  YMZ.setChannels(  64, SKIP, SKIP,   67, SKIP, SKIP); YMZ.beat(64);
  YMZ.setChannels(SKIP,   49, SKIP, SKIP,   49, SKIP); YMZ.beat(64);
  YMZ.setChannels(  72, SKIP, SKIP,   76, SKIP, SKIP); YMZ.beat(32);
  YMZ.setChannels(  72, SKIP, SKIP,   76, SKIP, SKIP); YMZ.beat(32);
  YMZ.setChannels(  64,  OFF, SKIP,   67,  OFF, SKIP); YMZ.beat(32);
  YMZ.setChannels(  72, SKIP, SKIP,   76, SKIP, SKIP); YMZ.beat(32);
  YMZ.setChannels(  64,   50, SKIP,   67,   50, SKIP); delay(5);
  YMZ.setChannels(  72, SKIP, SKIP,   76, SKIP, SKIP); YMZ.beat(32);
  YMZ.setChannels(  72, SKIP, SKIP,   76, SKIP, SKIP); YMZ.beat(32);
  YMZ.setChannels(  64, SKIP, SKIP,   67, SKIP, SKIP); YMZ.beat(32);
  YMZ.setChannels(  72,  OFF, SKIP,   76,  OFF, SKIP); YMZ.beat(32);
  YMZ.setChannels(  64, SKIP, SKIP,   67, SKIP, SKIP); delay(5);
  YMZ.setChannels(  72, SKIP, SKIP,   76, SKIP, SKIP); YMZ.beat(64);
  YMZ.setChannels(SKIP,   51, SKIP, SKIP,   51, SKIP); YMZ.beat(64);
  YMZ.setChannels(  72, SKIP, SKIP,   76, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP,   52, SKIP, SKIP,   52, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  71,   47, SKIP,   79,   47, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(SKIP,   45, SKIP, SKIP,   45, SKIP); delay(5);
  YMZ.setChannels(SKIP,   47, SKIP, SKIP,   47, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  69, SKIP, SKIP,   75, SKIP, SKIP); delay(5);
  YMZ.setChannels(  71, SKIP, SKIP,   79, SKIP, SKIP); YMZ.beat(64, DOUBLEDOT);
  YMZ.setChannels(SKIP,   45, SKIP, SKIP,   45, SKIP); YMZ.beat(16, DOT);
  YMZ.setChannels(  69,   43, SKIP,   75,   43, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  65,  OFF, SKIP,   69,  OFF, SKIP); delay(5);
  YMZ.setChannels(  67, SKIP, SKIP,   71, SKIP, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(SKIP,   47, SKIP, SKIP,   47, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  63, SKIP, SKIP,   67, SKIP, SKIP); delay(5);
  YMZ.setChannels(  65, SKIP, SKIP,   69, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(SKIP,   48, SKIP, SKIP,   48, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  67,  OFF, SKIP,   76,  OFF, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(SKIP,   50, SKIP, SKIP,   50, SKIP); YMZ.beat( 8, DOT);
  YMZ.setChannels(  72,   52, SKIP,   79,   52, SKIP); YMZ.beat( 8, DOT);
  YMZ.setChannels(  76,   55, SKIP,   81,   55, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  79,  OFF, SKIP,   84,  OFF, SKIP); delay(5);
  YMZ.setChannels(  76, SKIP, SKIP,   81, SKIP, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(SKIP,   57, SKIP, SKIP,   57, SKIP); YMZ.beat( 8, DOT);
  YMZ.setChannels(SKIP,   55, SKIP, SKIP,   55, SKIP); YMZ.beat( 8, DOT);
  YMZ.setChannels(  79,   52, SKIP,   84,   52, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  72,  OFF, SKIP,   79,  OFF, SKIP); delay(5);
  YMZ.setChannels(  76, SKIP, SKIP,   81, SKIP, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  69,   48, SKIP,   76,   48, SKIP); delay(5);
  YMZ.setChannels(  72, SKIP, SKIP,   79, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  69,  OFF, SKIP,   76,  OFF, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  66,   50, SKIP,   74,   50, SKIP); delay(5);
  YMZ.setChannels(  67, SKIP, SKIP,   72, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  67,  OFF, SKIP,   76,  OFF, SKIP); delay(5);
  YMZ.setChannels(  66, SKIP, SKIP,   74, SKIP, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  66,   52, SKIP,   74,   52, SKIP); delay(5);
  YMZ.setChannels(  67, SKIP, SKIP,   76, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  67,  OFF, SKIP,   76,  OFF, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  66,   54, SKIP,   74,   54, SKIP); delay(5);
  YMZ.setChannels(  67, SKIP, SKIP,   76, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  62,  OFF, SKIP,   69,  OFF, SKIP); delay(5);
  YMZ.setChannels(  66, SKIP, SKIP,   74, SKIP, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(SKIP,   45, SKIP, SKIP,   45, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  66,  OFF, SKIP,   74,  OFF, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(SKIP,   50, SKIP, SKIP,   50, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  62,   52, SKIP,   69,   52, SKIP); YMZ.beat(32);
  YMZ.setChannels(  66, SKIP, SKIP,   74, SKIP, SKIP); delay(5);
  YMZ.setChannels(  62, SKIP, SKIP,   69, SKIP, SKIP); YMZ.beat(64);
  YMZ.setChannels(SKIP,   48, SKIP, SKIP,   48, SKIP); delay(5);
  YMZ.setChannels(SKIP,   52, SKIP, SKIP,   52, SKIP); YMZ.beat(128, DOUBLEDOT);
  YMZ.setChannels(  66, SKIP, SKIP,   74, SKIP, SKIP); YMZ.beat(32);
  YMZ.setChannels(  62, SKIP, SKIP,   74, SKIP, SKIP); YMZ.beat(64, DOUBLEDOT);
  YMZ.setChannels(SKIP,   48, SKIP, SKIP,   48, SKIP); YMZ.beat(128);
  YMZ.setChannels(  66, SKIP, SKIP,   69, SKIP, SKIP); YMZ.beat(32);
  YMZ.setChannels(  62, SKIP, SKIP,   74, SKIP, SKIP); YMZ.beat(32);
  YMZ.setChannels(  66,   47, SKIP,   69,   47, SKIP); delay(5);
  YMZ.setChannels(  62, SKIP, SKIP,   74, SKIP, SKIP); YMZ.beat(32);
  YMZ.setChannels(  66, SKIP, SKIP,   74, SKIP, SKIP); YMZ.beat(32);
  YMZ.setChannels(  66, SKIP, SKIP,   69, SKIP, SKIP); YMZ.beat(32);
  YMZ.setChannels(  62,  OFF, SKIP,   74,  OFF, SKIP); YMZ.beat(32);
  YMZ.setChannels(  66, SKIP, SKIP,   69, SKIP, SKIP); YMZ.beat(64);
  YMZ.setChannels(SKIP,   45, SKIP, SKIP,   45, SKIP); YMZ.beat(64);
  YMZ.setChannels(  62, SKIP, SKIP,   74, SKIP, SKIP); delay(5);
  YMZ.setChannels(  66, SKIP, SKIP,   69, SKIP, SKIP); YMZ.beat(16, DOT);
  YMZ.setChannels(  65,  OFF, SKIP,   74,  OFF, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(SKIP,   43, SKIP, SKIP,   43, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  67,  OFF, SKIP,   76,  OFF, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  65,   55, SKIP,   74,   55, SKIP); delay(5);
  YMZ.setChannels(  67, SKIP, SKIP,   76, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  67,  OFF, SKIP,   76,  OFF, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  65,   53, SKIP,   74,   53, SKIP); delay(5);
  YMZ.setChannels(  67, SKIP, SKIP,   76, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  67,  OFF, SKIP,   76,  OFF, SKIP); delay(5);
  YMZ.setChannels(  65, SKIP, SKIP,   74, SKIP, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(SKIP,   50, SKIP, SKIP,   50, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  72,  OFF, SKIP,   81,  OFF, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(SKIP,   47, SKIP, SKIP,   47, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  71,  OFF, SKIP,   79,  OFF, SKIP); delay(5);
  YMZ.setChannels(  72, SKIP, SKIP,   81, SKIP, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  72,   43, SKIP,   81,   43, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  71,  OFF, SKIP,   79,  OFF, SKIP); delay(5);
  YMZ.setChannels(  72, SKIP, SKIP,   81, SKIP, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  72,   45, SKIP,   81,   45, SKIP); delay(5);
  YMZ.setChannels(  71, SKIP, SKIP,   79, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  72,  OFF, SKIP,   81,  OFF, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  67,   47, SKIP,   76,   47, SKIP); delay(5);
  YMZ.setChannels(  71, SKIP, SKIP,   79, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  64,  OFF, SKIP,   72,  OFF, SKIP); delay(5);
  YMZ.setChannels(  67, SKIP, SKIP,   76, SKIP, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(SKIP,   48, SKIP, SKIP,   48, SKIP); YMZ.beat( 8, DOT);
  YMZ.setChannels(SKIP,   43, SKIP, SKIP,   43, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(SKIP,  OFF, SKIP,   66,  OFF, SKIP); delay(5);
  YMZ.setChannels(SKIP, SKIP, SKIP,   72, SKIP, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(SKIP,   45, SKIP,   67,   45, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(SKIP,  OFF, SKIP,   68,  OFF, SKIP); delay(5);
  YMZ.setChannels(SKIP, SKIP, SKIP,   67, SKIP, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  65,   47, SKIP,   69,   47, SKIP); delay(5);
  YMZ.setChannels(  64, SKIP, SKIP,   68, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  65,  OFF, SKIP,   72,  OFF, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(SKIP,   48, SKIP, SKIP,   48, SKIP); YMZ.beat( 4);
  YMZ.setChannels(  64,   48, SKIP,   72,   48, SKIP); YMZ.beat( 4, DOT);
  YMZ.setChannels(  64,  OFF, SKIP,   76,  OFF, SKIP); delay(5);
  YMZ.setChannels( OFF, SKIP, SKIP,   72, SKIP, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(SKIP,   52, SKIP, SKIP,   52, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  65,  OFF, SKIP,   77,  OFF, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  63,   59, SKIP,   75,   59, SKIP); delay(5);
  YMZ.setChannels(  65, SKIP, SKIP,   77, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  64,  OFF, SKIP,   76,  OFF, SKIP); delay(5);
  YMZ.setChannels(  63, SKIP, SKIP,   75, SKIP, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  65,   56, SKIP,   77,   56, SKIP); delay(5);
  YMZ.setChannels(  64, SKIP, SKIP,   76, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  65,  OFF, SKIP,   77,  OFF, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  64,   53, SKIP,   76,   53, SKIP); delay(5);
  YMZ.setChannels(  63, SKIP, SKIP,   75, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  71,  OFF, SKIP,   83,  OFF, SKIP); delay(5);
  YMZ.setChannels(  64, SKIP, SKIP,   76, SKIP, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(SKIP,   52, SKIP, SKIP,   52, SKIP); YMZ.beat( 8, DOT);
  YMZ.setChannels(  71,   50, SKIP,   83,   50, SKIP); YMZ.beat( 8, DOT);
  YMZ.setChannels(  68,   47, SKIP,   80,   47, SKIP); YMZ.beat( 8, DOT);
  YMZ.setChannels(  64,   44, SKIP,   76,   44, SKIP); delay(5);
  YMZ.setChannels(  65, SKIP, SKIP,   77, SKIP, SKIP); YMZ.beat( 8, DOT);
  YMZ.setChannels(  64,   45, SKIP,   76,   45, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  64, SKIP, SKIP,   76, SKIP, SKIP); delay(5);
  YMZ.setChannels(  62, SKIP, SKIP,   74, SKIP, SKIP); YMZ.beat(32);
  YMZ.setChannels(  64,  OFF, SKIP,   76,  OFF, SKIP); YMZ.beat(32);
  YMZ.setChannels(  62, SKIP, SKIP,   74, SKIP, SKIP); YMZ.beat(32);
  YMZ.setChannels(  60,   47, SKIP,   72,   47, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  60,  OFF, SKIP,   72,  OFF, SKIP); delay(5);
  YMZ.setChannels(  59, SKIP, SKIP,   71, SKIP, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  62,   48, SKIP,   74,   48, SKIP); delay(5);
  YMZ.setChannels(  60, SKIP, SKIP,   72, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  62,  OFF, SKIP,   74,  OFF, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  59,   50, SKIP,   71,   50, SKIP); delay(5);
  YMZ.setChannels(  60, SKIP, SKIP,   72, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  60,  OFF, SKIP,   72,  OFF, SKIP); delay(5);
  YMZ.setChannels(  59, SKIP, SKIP,   71, SKIP, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(SKIP,   52, SKIP, SKIP,   52, SKIP); YMZ.beat( 8, DOT);
  YMZ.setChannels(SKIP,   48, SKIP, SKIP,   48, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  60,  OFF, SKIP,   72,  OFF, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  59,   47, SKIP,   71,   47, SKIP); YMZ.beat( 8, DOT);
  YMZ.setChannels(  60,   45, SKIP,   72,   45, SKIP); delay(5);
  YMZ.setChannels(  59, SKIP, SKIP,   71, SKIP, SKIP); YMZ.beat( 8, DOT);
  YMZ.setChannels(SKIP,   50, SKIP, SKIP,   50, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  62,  OFF, SKIP,   74,  OFF, SKIP); delay(5);
  YMZ.setChannels(  60, SKIP, SKIP,   72, SKIP, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(SKIP,   52, SKIP, SKIP,   52, SKIP); YMZ.beat( 8, DOT);
  YMZ.setChannels(  62,   54, SKIP,   74,   54, SKIP); YMZ.beat( 8, DOT);
  YMZ.setChannels(  62,   57, SKIP,   74,   57, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  69,  OFF, SKIP,   81,  OFF, SKIP); delay(5);
  YMZ.setChannels(  62, SKIP, SKIP,   74, SKIP, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(SKIP,   50, SKIP, SKIP,   50, SKIP); YMZ.beat( 8, DOT);
  YMZ.setChannels(  69,   45, SKIP,   81,   45, SKIP); YMZ.beat( 8, DOT);
  YMZ.setChannels(  67,   50, SKIP,   79,   50, SKIP); delay(5);
  YMZ.setChannels(  66, SKIP, SKIP,   78, SKIP, SKIP); YMZ.beat( 8, DOT);
  YMZ.setChannels(  69,   54, SKIP,   81,   54, SKIP); YMZ.beat( 8, DOT);
  YMZ.setChannels(  71,   55, SKIP,   83,   55, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  70,  OFF, SKIP, SKIP,  OFF, SKIP); delay(5);
  YMZ.setChannels(  71, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  71,   53, SKIP, SKIP,   53, SKIP); delay(5);
  YMZ.setChannels(  70, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  83,  OFF, SKIP, SKIP,  OFF, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  69,   50, SKIP,   81,   50, SKIP); delay(5);
  YMZ.setChannels(  83, SKIP, SKIP,   83, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  68,  OFF, SKIP, SKIP,  OFF, SKIP); delay(5);
  YMZ.setChannels(  69, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  69,   47, SKIP, SKIP,   47, SKIP); delay(5);
  YMZ.setChannels(  68, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  81,  OFF, SKIP, SKIP,  OFF, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  68,   50, SKIP,   80,   50, SKIP); delay(5);
  YMZ.setChannels(  81, SKIP, SKIP,   81, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  67,  OFF, SKIP, SKIP,  OFF, SKIP); delay(5);
  YMZ.setChannels(  68, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  68,   47, SKIP, SKIP,   47, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  80,  OFF, SKIP, SKIP,  OFF, SKIP); delay(5);
  YMZ.setChannels(  68, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  67,   45, SKIP,   79,   45, SKIP); delay(5);
  YMZ.setChannels(  80, SKIP, SKIP,   80, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  67,  OFF, SKIP,   79,  OFF, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  59,   43, SKIP,   71,   43, SKIP); delay(5);
  YMZ.setChannels(  62, SKIP, SKIP,   74, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  55,  OFF, SKIP,   67,  OFF, SKIP); delay(5);
  YMZ.setChannels(  59, SKIP, SKIP,   71, SKIP, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  72,   48, SKIP,   79,   48, SKIP); delay(5);
  YMZ.setChannels(  55, SKIP, SKIP,   67, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  72,  OFF, SKIP,   79,  OFF, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  67,   55, SKIP,   76,   55, SKIP); delay(5);
  YMZ.setChannels(  64, SKIP, SKIP,   72, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  72,  OFF, SKIP,   79,  OFF, SKIP); delay(5);
  YMZ.setChannels(  67, SKIP, SKIP,   76, SKIP, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(SKIP,   48, SKIP, SKIP,   48, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  72,  OFF, SKIP,   79,  OFF, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  67,   55, SKIP,   76,   55, SKIP); delay(5);
  YMZ.setChannels(  64, SKIP, SKIP,   72, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  72,  OFF, SKIP,   79,  OFF, SKIP); delay(5);
  YMZ.setChannels(  67, SKIP, SKIP,   76, SKIP, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  72,   47, SKIP,   79,   47, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  67, SKIP, SKIP,   75, SKIP, SKIP); delay(5);
  YMZ.setChannels(  63, SKIP, SKIP,   71, SKIP, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  71,  OFF, SKIP,   79,  OFF, SKIP); delay(5);
  YMZ.setChannels(  67, SKIP, SKIP,   75, SKIP, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  75,   55, SKIP,   83,   55, SKIP); delay(5);
  YMZ.setChannels(  71, SKIP, SKIP,   79, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  75,  OFF, SKIP,   83,  OFF, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(SKIP,   47, SKIP, SKIP,   47, SKIP); YMZ.beat( 8, DOT);
  YMZ.setChannels(SKIP,   55, SKIP, SKIP,   55, SKIP); YMZ.beat( 8, DOT);
  YMZ.setChannels(  70,   46, SKIP,   79,   46, SKIP); delay(5);
  YMZ.setChannels(  71, SKIP, SKIP,   81, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  62,  OFF, SKIP,   70,  OFF, SKIP); delay(5);
  YMZ.setChannels(  70, SKIP, SKIP,   79, SKIP, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  67,   55, SKIP,   74,   55, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  70,  OFF, SKIP,   79,  OFF, SKIP); delay(5);
  YMZ.setChannels(  67, SKIP, SKIP,   74, SKIP, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(SKIP,   46, SKIP, SKIP,   46, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  70,  OFF, SKIP,   79,  OFF, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  67,   55, SKIP,   74,   55, SKIP); delay(5);
  YMZ.setChannels(  62, SKIP, SKIP,   70, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  70,  OFF, SKIP,   79,  OFF, SKIP); delay(5);
  YMZ.setChannels(  67, SKIP, SKIP,   74, SKIP, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  64,   45, SKIP,   73,   45, SKIP); delay(5);
  YMZ.setChannels(  70, SKIP, SKIP,   79, SKIP, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  69, SKIP, SKIP,   76, SKIP, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  73,  OFF, SKIP,   79,  OFF, SKIP); delay(5);
  YMZ.setChannels(  69, SKIP, SKIP,   76, SKIP, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  76,   55, SKIP,   83,   55, SKIP); delay(5);
  YMZ.setChannels(  73, SKIP, SKIP,   79, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  73,  OFF, SKIP,   81,  OFF, SKIP); delay(5);
  YMZ.setChannels(  76, SKIP, SKIP,   83, SKIP, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(SKIP,   45, SKIP, SKIP,   45, SKIP); YMZ.beat( 8, DOT);
  YMZ.setChannels(SKIP,   55, SKIP, SKIP,   55, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  76,  OFF, SKIP,   83,  OFF, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  81,   41, SKIP,   84,   41, SKIP); delay(5);
  YMZ.setChannels(  76, SKIP, SKIP,   83, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  79,  OFF, SKIP,   83,  OFF, SKIP); delay(5);
  YMZ.setChannels(  81, SKIP, SKIP,   84, SKIP, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  81,   53, SKIP,   84,   53, SKIP); delay(5);
  YMZ.setChannels(  79, SKIP, SKIP,   83, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  81,  OFF, SKIP,   84,  OFF, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(SKIP,   42, SKIP, SKIP,   42, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  81,  OFF, SKIP,   84,  OFF, SKIP); delay(5);
  YMZ.setChannels(  77, SKIP, SKIP,   81, SKIP, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  81,   54, SKIP,   84,   54, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  78,  OFF, SKIP,   81,  OFF, SKIP); delay(5);
  YMZ.setChannels(  79, SKIP, SKIP,   83, SKIP, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  76,   43, SKIP,   79,   43, SKIP); delay(5);
  YMZ.setChannels(  78, SKIP, SKIP,   81, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  76,  OFF, SKIP,   79,  OFF, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  76,   55, SKIP,   79,   55, SKIP); delay(5);
  YMZ.setChannels(  75, SKIP, SKIP,   78, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  72,  OFF, SKIP,   76,  OFF, SKIP); delay(5);
  YMZ.setChannels(  76, SKIP, SKIP,   79, SKIP, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(SKIP,   45, SKIP, SKIP,   45, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  72,  OFF, SKIP,   76,  OFF, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  71,   57, SKIP,   74,   57, SKIP); delay(5);
  YMZ.setChannels(  69, SKIP, SKIP,   73, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  73,  OFF, SKIP,   76,  OFF, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  74,   50, SKIP,   77,   50, SKIP); delay(5);
  YMZ.setChannels(  73, SKIP, SKIP,   76, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  72,  OFF, SKIP,   76,  OFF, SKIP); delay(5);
  YMZ.setChannels(  74, SKIP, SKIP,   77, SKIP, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  74,   53, SKIP,   77,   53, SKIP); delay(5);
  YMZ.setChannels(  72, SKIP, SKIP,   76, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  74,  OFF, SKIP,   77,  OFF, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(SKIP,   43, SKIP, SKIP,   43, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  72,  OFF, SKIP,   76,  OFF, SKIP); delay(5);
  YMZ.setChannels(  67, SKIP, SKIP,   71, SKIP, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(  72,   50, SKIP,   76,   50, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  67,  OFF, SKIP,   72,  OFF, SKIP); delay(5);
  YMZ.setChannels(  71, SKIP, SKIP,   74, SKIP, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(SKIP,   48, SKIP, SKIP,   48, SKIP); YMZ.beat( 8, DOT);
  YMZ.setChannels(SKIP,   43, SKIP, SKIP,   43, SKIP); YMZ.beat( 8, DOT);
  YMZ.setChannels(SKIP,   48, SKIP, SKIP,   48, SKIP); YMZ.beat( 4, DOT);
  YMZ.setChannels(SKIP,   48, SKIP, SKIP,   48, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  67,  OFF, SKIP,   76,  OFF, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(SKIP,   50, SKIP, SKIP,   50, SKIP); YMZ.beat( 8, DOT);
  YMZ.setChannels(  72,   52, SKIP,   79,   52, SKIP); YMZ.beat( 8, DOT);
  YMZ.setChannels(  76,   55, SKIP,   81,   55, SKIP); delay(5);
  YMZ.setChannels(  72, SKIP, SKIP,   79, SKIP, SKIP); YMZ.beat(16, DOUBLEDOT);
  YMZ.setChannels(  79,  OFF, SKIP,   84,  OFF, SKIP); YMZ.beat(32, DOUBLEDOT);
  YMZ.setChannels(SKIP,   57, SKIP, SKIP,   57, SKIP); YMZ.beat( 8, DOT);
  YMZ.setChannels(SKIP,   55, SKIP, SKIP,   55, SKIP); YMZ.beat(32, DOT);
  YMZ.setChannels( OFF,  OFF,  OFF,  OFF,  OFF,  OFF); YMZ.mute();
  delay(3000); // Repeat every 3 seconds
}
