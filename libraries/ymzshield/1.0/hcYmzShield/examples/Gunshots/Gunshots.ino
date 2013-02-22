/**
 * Gunshots Demo
 * Derrick Sobodash <derrick@sobodash.com>
 * Version 0.2
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
}


void loop() {
  Serial.println("12 shots on an 8-bit machine gun");
  
  // Volume off. We don't want to interfere with the envelope generator
  PSG.setVolume(0);
  
  PSG.setEnvelopePeriod(0xfa0);
  PSG.setNoisePeriod(15);
  
  // Enable noise on Channel 0
  PSG.setNoise(0);
  
  // Enable envelope on Channel 0
  PSG.setEnvelope(0);
  
  // Fire away!
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

