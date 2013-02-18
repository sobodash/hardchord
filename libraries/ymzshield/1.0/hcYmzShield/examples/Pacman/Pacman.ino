/**
 * Pacman Demo (Round Start!)
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

