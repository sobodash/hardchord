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

hcYmzShield ymzShield;

void setup() {
  Serial.begin(9600);
  ymzShield.mute();
}

void loop() {
  Serial.println("12 shots on an 8-bit machine gun");
  ymzShield.setVolume(0);
  
  ymzShield.setEnvelopePeriod(0xfa0);
  ymzShield.setNoisePeriod(0xf);
  ymzShield.setNoise(0);
  ymzShield.setEnvelope(0);
  for(uint8_t bullets = 0; bullets < 12; bullets++) {
    ymzShield.startEnvelope(__CONT__); delay(80);
  }
  ymzShield.setNoise(0, false);
  ymzShield.setEnvelope(0, false);
  
  ymzShield.mute();
  delay(3000);
}

