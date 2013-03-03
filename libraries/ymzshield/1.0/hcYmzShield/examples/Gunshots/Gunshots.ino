/**
 * Gunshots Demo
 * Derrick Sobodash <derrick@sobodash.com>
 * Version 0.3.0
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
  PSG.setVolume(0);
  PSG.setEnvelopePeriod(0xfa0);
  PSG.setNoisePeriod(15);
  
  // Enable noise on Channel 0
  PSG.setNoise(0);
  
  // Enable envelope on Channel 0
  PSG.setEnvelope(0);
  
  // Restart the envelope on each loop since the beginning is what makes
  // the gunshot sound.
  for(uint8_t bullets = 0; bullets < 12; bullets++) {
    PSG.startEnvelope(CONT);
    delay(80);
  }
  
  // Turn the noise and envelope back off
  PSG.setNoise(0, false);
  PSG.setEnvelope(0, false);
  PSG.mute();
  
  delay(3000);
}


