/**
 * Staircase Demo
 * Derrick Sobodash <derrick@sobodash.com>
 * Version 0.3.5
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 * 
 * 1. Redistributions of source code must retain the above copyright notice, this
 *    list of conditions and the following disclaimer. 
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution. 
 */

#include <hcYmzShield.h>


void setup() {
  Serial.begin(9600);
  Serial.println("Ascending an 8-bit staricase");
}


void loop() {
  // Initial setup
  YMZ.setVolume(0);
  YMZ.setEnvelopePeriod(0xa00);
  YMZ.setNoisePeriod(0x5);
  
  // Enable noise on Channel 0
  YMZ.setNoise(0);
  
  // Enable envelope on Channel 0
  YMZ.setEnvelope(0);
  
  // Begin the envelope pattern
  YMZ.startEnvelope(CONT | ATT);
  delay(1700);
  
  // Tuin noise and sound back off
  YMZ.setNoise(0, false);
  YMZ.setEnvelope(0, false);

  YMZ.mute();
  
  delay(3000);
}


