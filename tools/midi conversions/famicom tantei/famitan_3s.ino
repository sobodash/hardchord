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
  // famitan_3s.csv
  YMZ.setVolume(8);
  YMZ.setTempo(94);
  YMZ.beat( 1);
  YMZ.setChannels(  74,  OFF,  OFF,   51,  OFF,  OFF); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   58, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   60, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   62, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  72, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  70, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  69, SKIP, SKIP,   51, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   58, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   60, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  65, SKIP, SKIP,   62, SKIP, SKIP); YMZ.beat( 4, DOUBLEDOT);
  YMZ.setChannels(  67, SKIP, SKIP,   50, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   53, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   57, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  72, SKIP, SKIP,   60, SKIP, SKIP); YMZ.beat( 4, DOUBLEDOT);
  YMZ.setChannels(SKIP, SKIP, SKIP,   50, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   53, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   57, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   60, SKIP, SKIP); YMZ.beat( 4, DOUBLEDOT);
  YMZ.setChannels(  74, SKIP, SKIP,   51, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   58, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   60, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   62, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  72, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  70, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  69, SKIP, SKIP,   51, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   58, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   60, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  81, SKIP, SKIP,   62, SKIP, SKIP); YMZ.beat( 4, DOUBLEDOT);
  YMZ.setChannels(  77, SKIP, SKIP,   50, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   53, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   57, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   60, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   65, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   69, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  79, SKIP, SKIP,   67, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   62, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   60, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   59, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   55, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   57, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  79, SKIP, SKIP,   51, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   58, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   60, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   62, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  75, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  74, SKIP, SKIP,   51, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   58, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   60, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   62, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  84, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  83, SKIP, SKIP,   55, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   62, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   67, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   71, SKIP, SKIP); YMZ.beat( 4, DOUBLEDOT);
  YMZ.setChannels(SKIP, SKIP, SKIP,   55, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   62, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   67, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   71, SKIP, SKIP); YMZ.beat( 4, DOUBLEDOT);
  YMZ.setChannels(  79, SKIP, SKIP,   51, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   58, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   60, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   62, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  75, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  74, SKIP, SKIP,   51, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   58, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   60, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   62, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  84, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  83, SKIP, SKIP,   55, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   62, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   67, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   71, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   69, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   71, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   74, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   67, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   69, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   71, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   72, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   74, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  74, SKIP, SKIP,   51, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   58, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   60, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   62, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  72, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  70, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  69, SKIP, SKIP,   51, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   58, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   60, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  65, SKIP, SKIP,   62, SKIP, SKIP); YMZ.beat( 4, DOUBLEDOT);
  YMZ.setChannels(  67, SKIP, SKIP,   50, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   53, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   57, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  72, SKIP, SKIP,   60, SKIP, SKIP); YMZ.beat( 4, DOUBLEDOT);
  YMZ.setChannels(SKIP, SKIP, SKIP,   50, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   53, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   57, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   60, SKIP, SKIP); YMZ.beat( 4, DOUBLEDOT);
  YMZ.setChannels(  74, SKIP, SKIP,   51, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   58, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   60, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   62, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  72, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  70, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  69, SKIP, SKIP,   51, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   58, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   60, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  81, SKIP, SKIP,   62, SKIP, SKIP); YMZ.beat( 4, DOUBLEDOT);
  YMZ.setChannels(  77, SKIP, SKIP,   50, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   53, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   57, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   60, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   65, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   69, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  79, SKIP, SKIP,   67, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   62, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   60, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   59, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   55, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   57, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  79, SKIP, SKIP,   51, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   58, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   60, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   62, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  75, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  74, SKIP, SKIP,   51, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   58, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   60, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   62, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  84, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  83, SKIP, SKIP,   55, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   62, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   67, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   71, SKIP, SKIP); YMZ.beat( 4, DOUBLEDOT);
  YMZ.setChannels(SKIP, SKIP, SKIP,   55, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   62, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   67, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   71, SKIP, SKIP); YMZ.beat( 4, DOUBLEDOT);
  YMZ.setChannels(  79, SKIP, SKIP,   51, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   58, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   60, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   62, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  75, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  74, SKIP, SKIP,   51, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   58, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   60, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   62, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  84, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  83, SKIP, SKIP,   55, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   62, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   67, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   71, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   69, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   71, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   74, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   67, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   69, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   71, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   72, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   74, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  74, SKIP, SKIP,   51, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   58, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   60, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   62, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  72, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  70, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  69, SKIP, SKIP,   51, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   58, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   60, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  65, SKIP, SKIP,   62, SKIP, SKIP); YMZ.beat( 4, DOUBLEDOT);
  YMZ.setChannels(  67, SKIP, SKIP,   50, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   53, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   57, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  72, SKIP, SKIP,   60, SKIP, SKIP); YMZ.beat( 4, DOUBLEDOT);
  YMZ.setChannels(SKIP, SKIP, SKIP,   50, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   53, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   57, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   60, SKIP, SKIP); YMZ.beat( 4, DOUBLEDOT);
  YMZ.setChannels(  74, SKIP, SKIP,   51, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   58, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   60, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   62, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  72, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  70, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  69, SKIP, SKIP,   51, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   58, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   60, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  81, SKIP, SKIP,   62, SKIP, SKIP); YMZ.beat( 4, DOUBLEDOT);
  YMZ.setChannels(  77, SKIP, SKIP,   50, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   53, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   57, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   60, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   65, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   69, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  79, SKIP, SKIP,   67, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   62, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   60, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   59, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   55, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   57, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  79, SKIP, SKIP,   51, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   58, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   60, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   62, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  75, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  74, SKIP, SKIP,   51, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   58, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   60, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   62, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  84, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  83, SKIP, SKIP,   55, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   62, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   67, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   71, SKIP, SKIP); YMZ.beat( 4, DOUBLEDOT);
  YMZ.setChannels(SKIP, SKIP, SKIP,   55, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   62, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   67, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   71, SKIP, SKIP); YMZ.beat( 4, DOUBLEDOT);
  YMZ.setChannels(  79, SKIP, SKIP,   51, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   58, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   60, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   62, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  75, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  74, SKIP, SKIP,   51, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   58, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   60, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   62, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  77, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  84, SKIP, SKIP, SKIP, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(  83, SKIP, SKIP,   55, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   62, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   67, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   71, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   69, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   71, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   74, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   67, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   69, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   71, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   72, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels(SKIP, SKIP, SKIP,   74, SKIP, SKIP); YMZ.beat( 8);
  YMZ.setChannels( OFF,  OFF,  OFF,  OFF,  OFF,  OFF); YMZ.mute();
  delay(3000); // Repeat every 3 seconds
}