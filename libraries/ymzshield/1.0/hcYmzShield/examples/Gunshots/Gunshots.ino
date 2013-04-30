/**
 * Gunshots Demo
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
  Serial.println("12 shots fired on an 8-bit machine gun");
}


void loop() {
  // Initial state
  YMZ.setVolume(0);
  YMZ.setEnvelopePeriod(0xfa0);
  YMZ.setNoisePeriod(15);
  
  // Enable noise on Channel 0
  YMZ.setNoise(0);
  
  // Enable envelope on Channel 0
  YMZ.setEnvelope(0);
  
  // Restart the envelope on each loop since the beginning is what makes
  // the gunshot sound.
  for(uint8_t bullets = 0; bullets < 12; bullets++) {
    YMZ.startEnvelope(CONT);
    delay(80);
  }
  
  // Turn the noise and envelope back off
  YMZ.setNoise(0, false);
  YMZ.setEnvelope(0, false);
  YMZ.mute();
  
  delay(3000);
}


