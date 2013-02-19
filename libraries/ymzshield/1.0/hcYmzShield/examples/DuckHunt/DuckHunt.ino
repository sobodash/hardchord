/**
 * Duck Hunt Demo (Round Start!)
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

hcYmzShield ymzShield;

void setup() {
  Serial.begin(9600);
  ymzShield.mute();
}

void loop() {
  Serial.println("Duck Hunt round start");
  ymzShield.setVolume(0xd);
  
  demoDuckHunt();
  
  ymzShield.mute();
  delay(3000);
}


/**
 * playNote()
 *
 * Tries to minimize some popping.
 */
void playNote(uint8_t channel, uint8_t note) {
  if(note == 0) {
    ymzShield.setVolume(channel, 8); delayMicroseconds(25);
    ymzShield.setTone(channel, false);
    ymzShield.setVolume(channel, 0);
    return;
  }
  
  ymzShield.setToneMidi(channel, note);
  
  if(ymzShield.isTone(channel) == false) {
    ymzShield.setTone(channel);
    ymzShield.setVolume(channel, 8); delayMicroseconds(25);
    ymzShield.setVolume(channel, 15); delayMicroseconds(25);
  }
}


/**
 * demoDuckHunt()
 *
 * Plays the Round Start music from the NES Duck Hunt.
 */
void demoDuckHunt() {
  playNote(0, 68); playNote(1, 65);
  delay(119);
  playNote(0, 68); playNote(1, 65);
  delay(6);
  playNote(0, 68); playNote(1, 65);
  delay(129);
  playNote(0, 68); playNote(1, 65);
  delay(6);
  playNote(0, 67); playNote(1, 64);
  delay(258);
  playNote(0, 67); playNote(1, 64);
  delay(13);
  playNote(0, 66); playNote(1, 63);
  delay(258);
  playNote(0, 66); playNote(1, 63);
  delay(13);
  playNote(0, 65); playNote(1, 62);
  delay(258);
  playNote(0, 65); playNote(1, 62);
  delay(12);
  playNote(0, 64); playNote(1, 55); playNote(2, 48);
  delay(388);
  playNote(0, 64); playNote(1, 55); playNote(2, 48);
  delay(19);
  playNote(0, 65); playNote(1, 56); playNote(2, 49);
  delay(258);
  playNote(0, 65); playNote(1, 56); playNote(2, 49);
  delay(558);
  playNote(0, 77); playNote(1, 68);
  delay(129);
  playNote(0, 77); playNote(1, 68);
  delay(6);
  playNote(0, 73); playNote(1, 65); playNote(2, 68);
  delay(128);
  playNote(0, 73); playNote(1, 65); playNote(2, 68);
  delay(6);
  playNote(0, 68); playNote(1, 61); playNote(2, 65);
  delay(128);
  playNote(0, 68); playNote(1, 61); playNote(2, 65);
  delay(6);
  playNote(0, 68); playNote(1, 60); playNote(2, 63);
  delay(129);
  playNote(0, 68); playNote(1, 60); playNote(2, 63);
  delay(5);
  playNote(0, 67); playNote(1, 59); playNote(2, 62);
  delay(129);
  playNote(0, 67); playNote(1, 59); playNote(2, 62);
  delay(6);
  playNote(0, 66); playNote(1, 58); playNote(2, 61);
  delay(129);
  playNote(0, 66); playNote(1, 58); playNote(2, 61);
  delay(5);
  playNote(0, 65); playNote(1, 56); playNote(2, 60);
  delay(130);
  playNote(0, 65); playNote(1, 56); playNote(2, 60);
  delay(5);
  playNote(0, 64); playNote(1, 55); playNote(2, 48);
  delay(388);
  playNote(0, 64); playNote(1, 55); playNote(2, 48);
  delay(19);
  playNote(0, 65); playNote(1, 56); playNote(2, 49);
  delay(258);
  playNote(0, 65); playNote(1, 56); playNote(2, 49);
}

