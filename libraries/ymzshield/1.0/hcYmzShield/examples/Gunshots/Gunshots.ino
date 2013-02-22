/**
 * Gunshots Demo
 * Derrick Sobodash <derrick@sobodash.com>
 * Version 0.1
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
  PSG.setVolume(0);
  
  PSG.setEnvelopePeriod(0xfa0);
  PSG.setNoisePeriod(0xf);
  PSG.setNoise(0);
  PSG.setEnvelope(0);
  for(uint8_t bullets = 0; bullets < 12; bullets++) {
    PSG.startEnvelope(CONT); delay(80);
  }
  PSG.setNoise(0, false);
  PSG.setEnvelope(0, false);
  
  PSG.mute();
  delay(3000);
}

