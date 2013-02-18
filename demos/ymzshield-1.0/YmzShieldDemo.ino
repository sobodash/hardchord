/**
 * Hardchord YMZ Shield 1.0 Demo
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

#include "hcYmzShield.h"

hcYmzShield ymzShield;

void setup() {
  Serial.begin(9600);
  ymzShield.mute();
}

void loop() {
  Serial.println("12 shots on an 8-bit machine gun");
  ymzShield.setVolume(0);
  demoMachineGun();
  ymzShield.mute();
  delay(3000);
  
  Serial.println("Going down an 8-bit staricase");
  demoStaircase();
  ymzShield.mute();
  delay(3000);
    
  Serial.println("Duck Hunt round start");
  ymzShield.setVolume(0xd);
  demoDuckHunt();
  ymzShield.mute();
  delay(3000);
  
  Serial.println("Pacman round start");
  ymzShield.setVolume(0xd);
  demoPacman();
  ymzShield.mute();
  delay(3000);
}


/**
 * playNote()
 *
 * Tries to minimize some popping.
 */
void playNote(int note, byte channel) {
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
 * demoStaircase()
 *
 * Plays a sound like descending a staircase in an 8-bit game.
 */
void demoStaircase() {
  ymzShield.setVolume(0xe);
  ymzShield.setEnvelopePeriod(0xc00);
  ymzShield.setNoisePeriod(0x4);
  ymzShield.setNoise(0);
  ymzShield.setEnvelope(0);
  ymzShield.startEnvelope(__CONT__ | __ATT__);
  delay(1700);
  ymzShield.setNoise(0, false);
  ymzShield.setEnvelope(0, false);
  ymzShield.setVolume(0x0);
}


/**
 * demoMachineGun()
 *
 * Plays a sound like an 8-bit gunshot.
 */
void demoMachineGun() {
  ymzShield.setEnvelopePeriod(0xfa0);
  ymzShield.setNoisePeriod(0xf);
  ymzShield.setNoise(0);
  ymzShield.setEnvelope(0);
  for(byte bullets = 0; bullets < 12; bullets++) {
    ymzShield.startEnvelope(__CONT__); delay(80);
  }
  ymzShield.setNoise(0, false);
  ymzShield.setEnvelope(0, false);
}

/**
 * demoPacman()
 *
 * Plays the Round Start music from the original Pacman.
 */
void demoPacman() {
  playNote(71, 0); playNote(35, 1);
  delay(1);
  playNote(71, 0); playNote(83, 0); playNote(35, 1);
  delay(69);
  playNote(83, 0);
  delay(70);
  playNote(78, 0);
  delay(71);
  playNote(78, 0);
  delay(70);
  playNote(75, 0); playNote(47, 1);
  delay(70);
  playNote(75, 0);
  delay(70);
  playNote(83, 0); playNote(47, 1); playNote(35, 1);
  delay(70);
  playNote(83, 0); playNote(78, 0);
  delay(69);
  playNote(78, 0); playNote(35, 1);
  delay(141);
  playNote(75, 0);
  delay(140);
  playNote(47, 1);
  delay(71);
  playNote(75, 0);
  delay(70);
  playNote(72, 0); playNote(47, 1); playNote(36, 1);
  delay(70);
  playNote(72, 0);
  delay(71);
  playNote(84, 0); playNote(36, 1);
  delay(69);
  playNote(84, 0);
  delay(70);
  playNote(79, 0);
  delay(70);
  playNote(79, 0);
  delay(71);
  playNote(76, 0); playNote(48, 1);
  delay(69);
  playNote(76, 0);
  delay(70);
  playNote(84, 0); playNote(48, 1); playNote(36, 1);
  delay(70);
  playNote(84, 0); playNote(79, 0);
  delay(70);
  playNote(79, 0); playNote(36, 1);
  delay(140);
  playNote(76, 0);
  delay(141);
  playNote(48, 1);
  delay(69);
  playNote(76, 0);
  delay(70);
  playNote(71, 0); playNote(48, 1); playNote(35, 1);
  delay(70);
  playNote(71, 0);
  delay(70);
  playNote(83, 0); playNote(35, 1);
  delay(69);
  playNote(83, 0);
  delay(70);
  playNote(78, 0);
  delay(70);
  playNote(78, 0);
  delay(71);
  playNote(75, 0); playNote(47, 1);
  delay(69);
  playNote(75, 0);
  delay(70);
  playNote(83, 0); playNote(47, 1); playNote(35, 1);
  delay(70);
  playNote(83, 0); playNote(78, 0);
  delay(70);
  playNote(78, 0); playNote(35, 1);
  delay(140);
  playNote(75, 0);
  delay(141);
  playNote(47, 1);
  delay(69);
  playNote(75, 0);
  delay(71);
  playNote(75, 0); playNote(47, 1); playNote(42, 1);
  delay(70);
  playNote(75, 0); playNote(76, 0);
  delay(70);
  playNote(76, 0); playNote(77, 0); playNote(42, 1);
  delay(69);
  playNote(77, 0);
  delay(70);
  playNote(77, 0); playNote(44, 1);
  delay(70);
  playNote(77, 0); playNote(78, 0);
  delay(70);
  playNote(78, 0); playNote(79, 0); playNote(44, 1);
  delay(69);
  playNote(79, 0);
  delay(70);
  playNote(79, 0); playNote(46, 1);
  delay(70);
  playNote(79, 0); playNote(80, 0);
  delay(70);
  playNote(80, 0); playNote(81, 0); playNote(46, 1);
  delay(69);
  playNote(81, 0);
  delay(70);
  playNote(83, 0); playNote(47, 1);
  delay(141);
  playNote(83, 0); playNote(47, 1);
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
