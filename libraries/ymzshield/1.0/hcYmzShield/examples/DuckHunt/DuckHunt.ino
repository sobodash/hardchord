/**
 * Duck Hunt Demo (Round Start!)
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
void playNote(uint8_t note, uint8_t channel) {
  if(note == 0) {
    ymzShield.setVolume(channel, 15); delayMicroseconds(25);
    ymzShield.setVolume(channel, 8); delayMicroseconds(25);
    ymzShield.setTone(channel, false);
    ymzShield.setVolume(channel, 0);
    return;
  }
  
  ymzShield.setToneMidi(channel, note);
  
  if(ymzShield.isTone(channel) == false) {
    ymzShield.setVolume(channel, 0);
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
  playNote(68, 0); playNote(65, 1);
  delay(119);
  playNote(68, 0); playNote(65, 1);
  delay(6);
  playNote(68, 0); playNote(65, 1);
  delay(129);
  playNote(68, 0); playNote(65, 1);
  delay(6);
  playNote(67, 0); playNote(64, 1);
  delay(258);
  playNote(67, 0); playNote(64, 1);
  delay(13);
  playNote(66, 0); playNote(63, 1);
  delay(258);
  playNote(66, 0); playNote(63, 1);
  delay(13);
  playNote(65, 0); playNote(62, 1);
  delay(258);
  playNote(65, 0); playNote(62, 1);
  delay(12);
  playNote(64, 0); playNote(55, 1); playNote(48, 2);
  delay(388);
  playNote(64, 0); playNote(55, 1); playNote(48, 2);
  delay(19);
  playNote(65, 0); playNote(56, 1); playNote(49, 2);
  delay(258);
  playNote(65, 0); playNote(56, 1); playNote(49, 2);
  delay(558);
  playNote(77, 0); playNote(68, 1);
  delay(129);
  playNote(77, 0); playNote(68, 1);
  delay(6);
  playNote(73, 0); playNote(65, 1); playNote(68, 2);
  delay(128);
  playNote(73, 0); playNote(65, 1); playNote(68, 2);
  delay(6);
  playNote(68, 0); playNote(61, 1); playNote(65, 2);
  delay(128);
  playNote(68, 0); playNote(61, 1); playNote(65, 2);
  delay(6);
  playNote(68, 0); playNote(60, 1); playNote(63, 2);
  delay(129);
  playNote(68, 0); playNote(60, 1); playNote(63, 2);
  delay(5);
  playNote(67, 0); playNote(59, 1); playNote(62, 2);
  delay(129);
  playNote(67, 0); playNote(59, 1); playNote(62, 2);
  delay(6);
  playNote(66, 0); playNote(58, 1); playNote(61, 2);
  delay(129);
  playNote(66, 0); playNote(58, 1); playNote(61, 2);
  delay(5);
  playNote(65, 0); playNote(56, 1); playNote(60, 2);
  delay(130);
  playNote(65, 0); playNote(56, 1); playNote(60, 2);
  delay(5);
  playNote(64, 0); playNote(55, 1); playNote(48, 2);
  delay(388);
  playNote(64, 0); playNote(55, 1); playNote(48, 2);
  delay(19);
  playNote(65, 0); playNote(56, 1); playNote(49, 2);
  delay(258);
  playNote(65, 0); playNote(56, 1); playNote(49, 2);
}

