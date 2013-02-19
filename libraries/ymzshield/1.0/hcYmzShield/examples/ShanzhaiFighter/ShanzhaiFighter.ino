/**
 * Shanzhai Fighter II Demo
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
  Serial.println("HADOUKEN!");
  ymzShield.setVolume(0xd);
  
  ymzShield.setEnvelopePeriod(0x80);
  ymzShield.setNoisePeriod(0xf);
  ymzShield.setEnvelope(5);
  ymzShield.setVolume(5, 0x4);
  ymzShield.startEnvelope(__CONT__|__ATT__|__HOLD__);
  
  demoShanzhaiFighter();
}


/**
 * playNote()
 *
 * Tries to minimize some popping.
 */
void playNote(uint8_t channel, uint8_t note) {
  if(note == 0) {
    if(!ymzShield.isEnvelope(channel)) {
      ymzShield.setVolume(channel, 0);
    }
    ymzShield.setTone(channel, false);
    return;
  }
  
  // Restart the envelope on each note
  if(ymzShield.isEnvelope(channel))
    ymzShield.startEnvelope(__CONT__|__ATT__|__HOLD__);
  ymzShield.setToneMidi(channel, note);

  ymzShield.setTone(channel);
  if(!ymzShield.isEnvelope(channel)) {
    ymzShield.setVolume(channel, 4); delayMicroseconds(25);
    ymzShield.setVolume(channel, 14);
  }
}


/**
 * demoShanzhaiFighter()
 *
 * Plays the "Flying Through the Air," Ryu's music from SF2.
 */
void demoShanzhaiFighter() {
  playNote(1, 43);
  delay(161);
  playNote(1, 43);
  delay(61);
  playNote(1, 43);
  delay(105);
  playNote(1, 43);
  delay(5);
  playNote(1, 41);
  delay(105);
  playNote(1, 41);
  delay(5);
  playNote(1, 43);
  delay(161);
  playNote(1, 43);
  delay(59);
  playNote(1, 43);
  delay(107);
  playNote(1, 43);
  delay(3);
  playNote(1, 41);
  delay(107);
  playNote(1, 41);
  delay(4);
  playNote(1, 43);
  delay(107);
  playNote(1, 43);
  delay(3);
  playNote(1, 46);
  delay(217);
  playNote(1, 46);
  delay(4);
  playNote(1, 45);
  delay(217);
  playNote(1, 45);
  delay(4);
  playNote(1, 41);
  delay(106);
  playNote(1, 41);
  delay(5);
  playNote(1, 38);
  delay(217);
  playNote(1, 38);
  delay(4);
  playNote(1, 43);
  delay(161);
  playNote(1, 43);
  delay(60);
  playNote(1, 43);
  delay(106);
  playNote(1, 43);
  delay(4);
  playNote(1, 41);
  delay(106);
  playNote(1, 41);
  delay(3);
  playNote(1, 43); playNote(3, 82); playNote(4, 70);
  delay(161);
  playNote(1, 43);
  delay(60);
  playNote(1, 43);
  delay(105);
  playNote(1, 43);
  delay(5);
  playNote(1, 41);
  delay(106);
  playNote(1, 41);
  delay(5);
  playNote(1, 43);
  delay(106);
  playNote(1, 43);
  delay(3);
  playNote(1, 46);
  delay(217);
  playNote(1, 46);
  delay(3);
  playNote(1, 48); playNote(3, 67); playNote(4, 70);
  delay(111);
  playNote(3, 84); playNote(4, 72);
  delay(161);
  playNote(1, 48);
  delay(60);
  playNote(1, 50);
  delay(147);
  playNote(3, 69); playNote(4, 72);
  delay(69);
  playNote(1, 50);
  delay(5);
  playNote(1, 43); playNote(3, 86); playNote(4, 74);
  delay(105);
  playNote(3, 70); playNote(4, 74);
  delay(4);
  playNote(3, 84); playNote(4, 72);
  delay(50);
  playNote(1, 43);
  delay(56);
  playNote(3, 69); playNote(4, 72);
  delay(3);
  playNote(1, 43);
  delay(107);
  playNote(1, 43);
  delay(4);
  playNote(1, 41); playNote(3, 82); playNote(4, 70);
  delay(106);
  playNote(1, 41);
  delay(4);
  playNote(1, 43);
  delay(160);
  playNote(1, 43);
  delay(62);
  playNote(1, 43);
  delay(105);
  playNote(1, 43);
  delay(4);
  playNote(1, 41);
  delay(106);
  playNote(1, 41);
  delay(4);
  playNote(1, 43);
  delay(105);
  playNote(1, 43);
  delay(4);
  playNote(1, 46);
  delay(217);
  playNote(1, 46);
  delay(3);
  playNote(1, 45);
  delay(218);
  playNote(1, 45);
  delay(3);
  playNote(1, 41);
  delay(106);
  playNote(1, 41);
  delay(5);
  playNote(1, 38);
  delay(110);
  playNote(3, 67); playNote(4, 70);
  delay(105);
  playNote(1, 38);
  delay(4);
  playNote(0, 67); playNote(1, 43); playNote(3, 82); playNote(4, 70);
  delay(105);
  playNote(3, 67); playNote(4, 70);
  delay(4);
  playNote(3, 82); playNote(4, 70);
  delay(55);
  playNote(1, 43);
  delay(53);
  playNote(3, 67); playNote(4, 70);
  delay(4);
  playNote(1, 43);
  delay(106);
  playNote(1, 43);
  delay(4);
  playNote(1, 41);
  delay(107);
  playNote(1, 41);
  delay(3);
  playNote(1, 43); playNote(3, 81); playNote(4, 69);
  delay(160);
  playNote(1, 43);
  delay(60);
  playNote(1, 43);
  delay(106);
  playNote(1, 43);
  delay(5);
  playNote(1, 41);
  delay(106);
  playNote(1, 41);
  delay(5);
  playNote(1, 43);
  delay(105);
  playNote(1, 43);
  delay(4);
  playNote(1, 46);
  delay(216);
  playNote(1, 46);
  delay(4);
  playNote(1, 48); playNote(3, 65); playNote(4, 69);
  delay(110);
  playNote(3, 82); playNote(4, 70);
  delay(160);
  playNote(1, 48);
  delay(60);
  playNote(1, 50); playNote(2, 62);
  delay(106);
  playNote(2, 62);
  delay(4);
  playNote(0, 67); playNote(2, 65);
  delay(36);
  playNote(3, 67); playNote(4, 70);
  delay(70);
  playNote(1, 50); playNote(2, 65);
  delay(5);
  playNote(1, 43); playNote(2, 67); playNote(3, 70); playNote(4, 69);
  delay(103);
  playNote(4, 65);
  delay(55);
  playNote(1, 43);
  delay(60);
  playNote(1, 43); playNote(4, 70);
  delay(105);
  playNote(1, 43); playNote(4, 67);
  delay(4);
  playNote(1, 41); playNote(4, 67);
  delay(105);
  playNote(1, 41); playNote(4, 62);
  delay(4);
  playNote(1, 43);
  delay(110);
  playNote(4, 70);
  delay(50);
  playNote(1, 43);
  delay(56);
  playNote(4, 67);
  delay(3);
  playNote(1, 43);
  delay(107);
  playNote(1, 43);
  delay(4);
  playNote(1, 41); playNote(4, 69);
  delay(106);
  playNote(1, 41); playNote(4, 65);
  delay(3);
  playNote(1, 43);
  delay(106);
  playNote(1, 43);
  delay(5);
  playNote(1, 46); playNote(4, 69);
  delay(105);
  playNote(2, 67); playNote(4, 65);
  delay(4);
  playNote(2, 67);
  delay(105);
  playNote(1, 46);
  delay(4);
  playNote(1, 45); playNote(4, 70);
  delay(105);
  playNote(2, 67); playNote(4, 67);
  delay(4);
  playNote(2, 69); playNote(4, 67);
  delay(104);
  playNote(1, 45); playNote(4, 62);
  delay(4);
  playNote(1, 41);
  delay(106);
  playNote(1, 41); playNote(2, 69);
  delay(4);
  playNote(1, 38); playNote(2, 70); playNote(4, 70);
  delay(106);
  playNote(4, 67);
  delay(4);
  playNote(3, 70);
  delay(106);
  playNote(1, 38); playNote(2, 70);
  delay(4);
  playNote(1, 39); playNote(2, 72); playNote(3, 67); playNote(4, 69);
  delay(105);
  playNote(4, 65);
  delay(54);
  playNote(1, 39);
  delay(60);
  playNote(1, 39); playNote(4, 70);
  delay(105);
  playNote(1, 39); playNote(4, 67);
  delay(4);
  playNote(1, 38); playNote(4, 67);
  delay(105);
  playNote(1, 38); playNote(4, 62);
  delay(5);
  playNote(1, 39);
  delay(110);
  playNote(4, 70);
  delay(36);
  playNote(2, 72);
  delay(13);
  playNote(1, 39);
  delay(55);
  playNote(4, 67);
  delay(4);
  playNote(1, 39); playNote(2, 70);
  delay(106);
  playNote(1, 39); playNote(2, 70);
  delay(4);
  playNote(1, 38); playNote(2, 69); playNote(4, 69);
  delay(106);
  playNote(1, 38); playNote(2, 69); playNote(4, 65);
  delay(3);
  playNote(1, 39); playNote(2, 70);
  delay(106);
  playNote(1, 39);
  delay(3);
  playNote(1, 43); playNote(4, 69);
  delay(106);
  playNote(4, 65);
  delay(110);
  playNote(1, 43);
  delay(4);
  playNote(1, 45); playNote(4, 70);
  delay(36);
  playNote(2, 70);
  delay(69);
  playNote(4, 67);
  delay(4);
  playNote(2, 67); playNote(4, 67);
  delay(104);
  playNote(4, 62);
  delay(55);
  playNote(1, 45);
  delay(60);
  playNote(1, 46); playNote(4, 70);
  delay(105);
  playNote(4, 67);
  delay(4);
  playNote(3, 67);
  delay(36);
  playNote(2, 67);
  delay(69);
  playNote(1, 46);
  delay(4);
  playNote(1, 41); playNote(2, 69); playNote(3, 69); playNote(4, 70);
  delay(105);
  playNote(4, 67);
  delay(54);
  playNote(1, 41);
  delay(59);
  playNote(1, 41); playNote(4, 72);
  delay(106);
  playNote(1, 41); playNote(4, 69);
  delay(3);
  playNote(1, 39); playNote(4, 65);
  delay(106);
  playNote(1, 39); playNote(4, 60);
  delay(4);
  playNote(1, 41);
  delay(110);
  playNote(4, 72);
  delay(50);
  playNote(1, 41);
  delay(55);
  playNote(4, 69);
  delay(4);
  playNote(1, 41);
  delay(106);
  playNote(1, 41);
  delay(4);
  playNote(1, 39); playNote(4, 70);
  delay(104);
  playNote(1, 39); playNote(4, 67);
  delay(4);
  playNote(1, 41);
  delay(106);
  playNote(1, 41);
  delay(5);
  playNote(1, 45); playNote(4, 70);
  delay(106);
  playNote(2, 69); playNote(4, 67);
  delay(4);
  playNote(2, 70);
  delay(105);
  playNote(1, 45);
  delay(4);
  playNote(1, 46); playNote(4, 72);
  delay(107);
  playNote(2, 70); playNote(4, 69);
  delay(3);
  playNote(2, 72); playNote(4, 65);
  delay(105);
  playNote(1, 46); playNote(4, 60);
  delay(4);
  playNote(1, 46);
  delay(106);
  playNote(1, 46); playNote(2, 72);
  delay(4);
  playNote(1, 48); playNote(2, 67); playNote(4, 72);
  delay(105);
  playNote(4, 69);
  delay(4);
  playNote(3, 69);
  delay(106);
  playNote(1, 48); playNote(2, 67);
  delay(4);
  playNote(1, 34); playNote(2, 65); playNote(3, 74); playNote(4, 74);
  delay(104);
  playNote(4, 70);
  delay(55);
  playNote(1, 34);
  delay(60);
  playNote(1, 34); playNote(4, 74);
  delay(106);
  playNote(1, 34); playNote(2, 65); playNote(4, 70);
  delay(2);
  playNote(1, 33); playNote(4, 65);
  delay(106);
  playNote(1, 33); playNote(4, 62);
  delay(4);
  playNote(1, 34); playNote(2, 75);
  delay(109);
  playNote(4, 74);
  delay(50);
  playNote(1, 34);
  delay(56);
  playNote(4, 70);
  delay(4);
  playNote(1, 34);
  delay(106);
  playNote(1, 34);
  delay(4);
  playNote(1, 33); playNote(3, 74); playNote(4, 72);
  delay(105);
  playNote(1, 33); playNote(4, 69);
  delay(4);
  playNote(1, 34); playNote(3, 72);
  delay(105);
  playNote(1, 34);
  delay(4);
  playNote(1, 41); playNote(4, 72);
  delay(105);
  playNote(4, 69);
  delay(111);
  playNote(1, 41); playNote(2, 75);
  delay(4);
  playNote(1, 46); playNote(2, 74); playNote(4, 72);
  delay(106);
  playNote(2, 74); playNote(4, 69);
  delay(2);
  playNote(2, 72); playNote(4, 65);
  delay(106);
  playNote(1, 46); playNote(4, 62);
  delay(3);
  playNote(1, 41);
  delay(50);
  playNote(2, 72);
  delay(56);
  playNote(1, 41);
  delay(4);
  playNote(1, 38); playNote(2, 70); playNote(4, 74);
  delay(105);
  playNote(1, 38); playNote(4, 70);
  delay(4);
  playNote(1, 34); playNote(3, 72);
  delay(49);
  playNote(2, 70);
  delay(56);
  playNote(1, 34);
  delay(5);
  playNote(1, 39); playNote(2, 69); playNote(3, 67); playNote(4, 72);
  delay(104);
  playNote(2, 69); playNote(4, 72);
  delay(1);
  playNote(4, 69);
  delay(6);
  playNote(2, 67); playNote(4, 70);
  delay(46);
  playNote(1, 39);
  delay(54);
  playNote(2, 67); playNote(4, 67);
  delay(4);
  playNote(1, 39);
  delay(106);
  playNote(1, 39);
  delay(4);
  playNote(1, 38); playNote(2, 67);
  delay(105);
  playNote(1, 38);
  delay(4);
  playNote(1, 39); playNote(4, 70);
  delay(161);
  playNote(1, 39);
  delay(59);
  playNote(1, 39);
  delay(107);
  playNote(1, 39); playNote(4, 67);
  delay(3);
  playNote(1, 38);
  delay(107);
  playNote(1, 38);
  delay(4);
  playNote(1, 39); playNote(4, 69);
  delay(105);
  playNote(1, 39); playNote(4, 65);
  delay(4);
  playNote(1, 46); playNote(4, 67);
  delay(37);
  playNote(2, 67);
  delay(68);
  playNote(4, 63);
  delay(5);
  playNote(2, 67);
  delay(105);
  playNote(1, 46);
  delay(5);
  playNote(1, 45);
  delay(106);
  playNote(2, 67);
  delay(4);
  playNote(0, 71); playNote(2, 69); playNote(4, 67);
  delay(105);
  playNote(1, 45);
  delay(4);
  playNote(1, 41);
  delay(106);
  playNote(1, 41); playNote(2, 69);
  delay(3);
  playNote(1, 38); playNote(2, 70);
  delay(107);
  playNote(4, 63);
  delay(40);
  playNote(0, 71);
  delay(70);
  playNote(1, 38); playNote(2, 70);
  delay(3);
  playNote(1, 36); playNote(2, 74);
  delay(107);
  playNote(2, 74);
  delay(4);
  playNote(0, 67); playNote(2, 72);
  delay(50);
  playNote(1, 36);
  delay(56);
  playNote(0, 67); playNote(2, 72);
  delay(4);
  playNote(1, 36);
  delay(105);
  playNote(1, 36);
  delay(4);
  playNote(1, 34); playNote(2, 72);
  delay(36);
  playNote(3, 67);
  delay(69);
  playNote(1, 34);
  delay(5);
  playNote(1, 36); playNote(3, 74); playNote(4, 74);
  delay(105);
  playNote(3, 74); playNote(4, 74);
  delay(4);
  playNote(3, 72); playNote(4, 72);
  delay(51);
  playNote(1, 36);
  delay(54);
  playNote(3, 72); playNote(4, 72);
  delay(4);
  playNote(1, 36);
  delay(107);
  playNote(1, 36);
  delay(4);
  playNote(1, 34); playNote(3, 75); playNote(4, 75);
  delay(105);
  playNote(1, 34);
  delay(4);
  playNote(1, 36);
  delay(106);
  playNote(1, 36);
  delay(4);
  playNote(1, 39);
  delay(216);
  playNote(1, 39);
  delay(5);
  playNote(1, 41); playNote(2, 72);
  delay(36);
  playNote(3, 75); playNote(4, 75);
  delay(73);
  playNote(2, 70); playNote(3, 63); playNote(4, 63);
  delay(216);
  playNote(1, 41);
  delay(4);
  playNote(1, 43);
  delay(147);
  playNote(2, 70); playNote(3, 63); playNote(4, 63);
  delay(70);
  playNote(1, 43);
  delay(4);
  playNote(1, 38); playNote(2, 69); playNote(3, 62); playNote(4, 72);
  delay(105);
  playNote(4, 67);
  delay(54);
  playNote(1, 38);
  delay(60);
  playNote(1, 38); playNote(4, 74);
  delay(106);
  playNote(1, 38); playNote(4, 62);
  delay(4);
  playNote(1, 36); playNote(4, 69);
  delay(105);
  playNote(1, 36); playNote(4, 69);
  delay(4);
  playNote(1, 38);
  delay(110);
  playNote(4, 74);
  delay(50);
  playNote(1, 38);
  delay(54);
  playNote(4, 69);
  delay(4);
  playNote(1, 38);
  delay(106);
  playNote(1, 38);
  delay(4);
  playNote(1, 36); playNote(4, 72);
  delay(105);
  playNote(1, 36); playNote(4, 67);
  delay(5);
  playNote(1, 38);
  delay(106);
  playNote(1, 38);
  delay(3);
  playNote(1, 46); playNote(4, 72);
  delay(107);
  playNote(2, 69); playNote(4, 67);
  delay(2);
  playNote(2, 70);
  delay(107);
  playNote(1, 46);
  delay(3);
  playNote(1, 45); playNote(4, 74);
  delay(106);
  playNote(2, 70); playNote(4, 62);
  delay(4);
  playNote(2, 72); playNote(4, 69);
  delay(105);
  playNote(1, 45); playNote(4, 69);
  delay(4);
  playNote(1, 41);
  delay(106);
  playNote(1, 41); playNote(2, 72);
  delay(4);
  playNote(1, 38); playNote(2, 74); playNote(4, 74);
  delay(105);
  playNote(4, 69);
  delay(4);
  playNote(3, 62);
  delay(106);
  playNote(1, 38); playNote(2, 74); playNote(4, 62);
  delay(4);
  playNote(1, 38); playNote(2, 75); playNote(3, 62); playNote(4, 62);
  delay(216);
  playNote(1, 38); playNote(2, 75); playNote(3, 62); playNote(4, 62);
  delay(225);
  playNote(1, 38); playNote(2, 74); playNote(3, 65); playNote(4, 69);
  delay(549);
  playNote(1, 38);
  delay(5);
  playNote(1, 46);
  delay(36);
  playNote(2, 74);
  delay(74);
  playNote(2, 72);
  delay(106);
  playNote(1, 46);
  delay(4);
  playNote(1, 45);
  delay(107);
  playNote(1, 45);
  delay(3);
  playNote(1, 41);
  delay(147);
  playNote(2, 72);
  delay(13);
  playNote(1, 41);
  delay(61);
  playNote(1, 38); playNote(2, 74);
  delay(109);
  playNote(3, 65); playNote(4, 65);
  delay(50);
  playNote(1, 38);
  delay(55);
  playNote(2, 74);
  delay(4);
  playNote(1, 39); playNote(2, 70);
  delay(110);
  playNote(5, 75);
  delay(50);
  playNote(1, 39);
  delay(55);
  playNote(5, 75);
  delay(4);
  playNote(1, 39); playNote(5, 79);
  delay(107);
  playNote(1, 39); playNote(5, 79);
  delay(3);
  playNote(1, 38); playNote(5, 82);
  delay(107);
  playNote(1, 38); playNote(5, 82);
  delay(3);
  playNote(1, 39); playNote(5, 86);
  delay(161);
  playNote(1, 39);
  delay(59);
  playNote(1, 39);
  delay(107);
  playNote(1, 39);
  delay(5);
  playNote(1, 38);
  delay(105);
  playNote(1, 38);
  delay(4);
  playNote(1, 39);
  delay(106);
  playNote(1, 39);
  delay(5);
  playNote(1, 46); playNote(3, 82);
  delay(105);
  playNote(2, 70); playNote(3, 79);
  delay(4);
  playNote(2, 67); playNote(3, 82);
  delay(105);
  playNote(1, 46); playNote(3, 79);
  delay(4);
  playNote(1, 45); playNote(3, 82); playNote(5, 86);
  delay(105);
  playNote(2, 67); playNote(3, 79);
  delay(4);
  playNote(2, 69); playNote(3, 82);
  delay(106);
  playNote(1, 45); playNote(3, 79);
  delay(3);
  playNote(1, 41); playNote(3, 79);
  delay(107);
  playNote(1, 41); playNote(2, 69); playNote(3, 79);
  delay(3);
  playNote(1, 38); playNote(2, 70); playNote(3, 79);
  delay(217);
  playNote(1, 38); playNote(2, 70); playNote(3, 79);
  delay(4);
  playNote(1, 41); playNote(2, 72);
  delay(110);
  playNote(5, 77);
  delay(50);
  playNote(1, 41);
  delay(55);
  playNote(5, 77);
  delay(4);
  playNote(1, 41);
  playNote(5, 81);
  delay(106);
  playNote(1, 41); playNote(5, 81);
  delay(4);
  playNote(1, 39); playNote(5, 82);
  delay(105);
  playNote(1, 39); playNote(5, 82);
  delay(4);
  playNote(1, 41); playNote(5, 84);
  delay(161);
  playNote(1, 41);
  delay(60);
  playNote(1, 41);
  delay(107);
  playNote(1, 41);
  delay(4);
  playNote(1, 39);
  delay(106);
  playNote(1, 39);
  delay(3);
  playNote(1, 41);
  delay(107);
  playNote(1, 41);
  delay(4);
  playNote(1, 45); playNote(3, 84);
  delay(105);
  playNote(2, 72); playNote(3, 81);
  delay(4);
  playNote(0, 67); playNote(2, 70);
  delay(105);
  playNote(1, 45);
  delay(5);
  playNote(1, 46); playNote(3, 84); playNote(5, 84);
  delay(105);
  playNote(2, 70); playNote(3, 81);
  delay(4);
  playNote(2, 69); playNote(3, 84);
  delay(105);
  playNote(2, 69); playNote(3, 81);
  delay(4);
  playNote(2, 62); playNote(3, 81);
  delay(106);
  playNote(1, 46); playNote(3, 81);
  delay(4);
  playNote(1, 48); playNote(3, 81);
  delay(147);
  playNote(0, 67);
  delay(14);
  playNote(2, 62);
  delay(56);
  playNote(1, 48); playNote(3, 81);
  delay(114);
  playNote(1, 43); playNote(2, 67); playNote(3, 79); playNote(4, 79);
  delay(327);
  playNote(1, 43); playNote(2, 67); playNote(3, 74); playNote(4, 74);
  delay(2);
  playNote(1, 43); playNote(2, 69); playNote(3, 79); playNote(4, 79);
  delay(103);
  playNote(1, 43); playNote(2, 69); playNote(3, 74); playNote(4, 74);
  delay(115);
  playNote(1, 45); playNote(2, 70); playNote(3, 79); playNote(4, 79);
  delay(105);
  playNote(1, 45); playNote(2, 70); playNote(3, 74); playNote(4, 74);
  delay(4);
  playNote(1, 46);
  delay(107);
  playNote(1, 46);
  delay(3);
  playNote(1, 45); playNote(2, 72); playNote(3, 79); playNote(4, 79);
  delay(106);
  playNote(1, 45);
  delay(4);
  playNote(1, 46);
  delay(106);
  playNote(1, 46);
  delay(4);
  playNote(1, 45);
  delay(106);
  playNote(1, 45); playNote(2, 72); playNote(3, 74); playNote(4, 74);
  delay(4);
  playNote(1, 43); playNote(2, 74); playNote(3, 79); playNote(4, 79);
  delay(368);
  playNote(1, 43);
  delay(74);
  playNote(1, 38);
  delay(36);
  playNote(2, 74); playNote(3, 74); playNote(4, 74);
  delay(67);
  playNote(1, 38);
  delay(5);
  playNote(1, 39); playNote(2, 70); playNote(4, 63); playNote(5, 86);
  delay(105);
  playNote(4, 58); playNote(5, 86);
  delay(3);
  playNote(4, 63); playNote(5, 82);
  delay(50);
  playNote(1, 39);
  delay(56);
  playNote(4, 58); playNote(5, 82);
  delay(3);
  playNote(1, 39); playNote(5, 79);
  delay(106);
  playNote(1, 39); playNote(5, 79);
  delay(3);
  playNote(1, 38); playNote(5, 74);
  delay(106);
  playNote(1, 38); playNote(5, 74);
  delay(4);
  playNote(1, 39); playNote(4, 70); playNote(5, 79);
  delay(105);
  playNote(5, 79);
  delay(4);
  playNote(5, 74);
  delay(51);
  playNote(1, 39);
  delay(54);
  playNote(5, 74);
  delay(5);
  playNote(1, 39); playNote(5, 79);
  delay(105);
  playNote(1, 39); playNote(4, 67); playNote(5, 79);
  delay(4);
  playNote(1, 38); playNote(4, 63); playNote(5, 82);
  delay(104);
  playNote(1, 38); playNote(4, 58); playNote(5, 82);
  delay(4);
  playNote(1, 39); playNote(5, 79);
  delay(105);
  playNote(1, 39); playNote(5, 79);
  delay(4);
  playNote(1, 46); playNote(4, 63); playNote(5, 74);
  delay(106);
  playNote(2, 70); playNote(4, 58); playNote(5, 74);
  delay(2);
  playNote(2, 67); playNote(5, 79);
  delay(106);
  playNote(1, 46); playNote(5, 79);
  delay(3);
  playNote(1, 45); playNote(4, 70); playNote(5, 82);
  delay(106);
  playNote(2, 67); playNote(4, 67); playNote(5, 82);
  delay(3);
  playNote(2, 69); playNote(4, 63); playNote(5, 79);
  delay(105);
  playNote(1, 45); playNote(5, 79);
  delay(4);
  playNote(1, 41); playNote(5, 74);
  delay(105);
  playNote(1, 41); playNote(2, 69); playNote(4, 58); playNote(5, 74);
  delay(4);
  playNote(1, 38); playNote(2, 70); playNote(4, 70); playNote(5, 70);
  delay(105);
  playNote(5, 70);
  delay(5);
  playNote(5, 67);
  delay(105);
  playNote(1, 38); playNote(2, 70); playNote(4, 67); playNote(5, 67);
  delay(3);
  playNote(1, 41); playNote(2, 72); playNote(4, 65); playNote(5, 84);
  delay(104);
  playNote(4, 60); playNote(5, 84);
  delay(4);
  playNote(4, 65); playNote(5, 81);
  delay(50);
  playNote(1, 41);
  delay(54);
  playNote(4, 60); playNote(5, 81);
  delay(4);
  playNote(1, 41); playNote(5, 77);
  delay(106);
  playNote(1, 41); playNote(5, 77);
  delay(3);
  playNote(1, 39); playNote(5, 72);
  delay(106);
  playNote(1, 39); playNote(5, 72);
  delay(4);
  playNote(1, 41); playNote(4, 72); playNote(5, 77);
  delay(105);
  playNote(5, 77);
  delay(4);
  playNote(5, 72);
  delay(50);
  playNote(1, 41);
  delay(55);
  playNote(5, 72);
  delay(5);
  playNote(1, 41); playNote(5, 77);
  delay(105);
  playNote(1, 41); playNote(4, 69); playNote(5, 77);
  delay(5);
  playNote(1, 39); playNote(4, 65); playNote(5, 81);
  delay(104);
  playNote(1, 39); playNote(4, 60); playNote(5, 81);
  delay(4);
  playNote(1, 41); playNote(4, 69); playNote(5, 77);
  delay(105);
  playNote(1, 41); playNote(4, 65); playNote(5, 77);
  delay(4);
  playNote(1, 45); playNote(4, 72); playNote(5, 81);
  delay(105);
  playNote(2, 72); playNote(4, 69); playNote(5, 81);
  delay(4);
  playNote(0, 67); playNote(2, 74); playNote(5, 84);
  delay(105);
  playNote(1, 45); playNote(5, 84);
  delay(4);
  playNote(1, 46); playNote(4, 72); playNote(5, 93);
  delay(106);
  playNote(2, 74); playNote(5, 93);
  delay(3);
  playNote(2, 75); playNote(5, 96);
  delay(106);
  playNote(2, 75); playNote(5, 96);
  delay(2);
  playNote(2, 74); playNote(5, 93);
  delay(107);
  playNote(1, 46); playNote(4, 69); playNote(5, 93);
  delay(3);
  playNote(1, 48); playNote(4, 72); playNote(5, 89);
  delay(106);
  playNote(1, 48); playNote(5, 89);
  delay(4);
  playNote(1, 38); playNote(5, 84);
  delay(37);
  playNote(0, 67);
  delay(12);
  playNote(2, 74);
  delay(56);
  playNote(1, 38); playNote(4, 69); playNote(5, 84);
  delay(115);
  playNote(1, 38); playNote(2, 74); playNote(3, 81); playNote(4, 81);
  delay(104);
  playNote(1, 38);
  delay(4);
  playNote(1, 33);
  delay(106);
  playNote(1, 33);
  delay(4);
  playNote(1, 36);
  delay(106);
  playNote(1, 36); playNote(2, 74); playNote(3, 81);
  delay(1);
  playNote(3, 74); playNote(4, 62);
  delay(1);
  playNote(1, 38); playNote(2, 72); playNote(3, 81); playNote(4, 81);
  delay(105);
  playNote(1, 38); playNote(2, 72); playNote(3, 74); playNote(4, 62);
  delay(114);
  playNote(0, 67); playNote(1, 38); playNote(2, 70); playNote(3, 81); playNote(4, 81);
  delay(106);
  playNote(0, 67); playNote(1, 38); playNote(2, 70); playNote(3, 74); playNote(4, 62);
  delay(1);
  playNote(0, 67); playNote(1, 46);
  delay(107);
  playNote(0, 67); playNote(1, 46);
  delay(4);
  playNote(1, 48); playNote(2, 69); playNote(3, 81); playNote(4, 81);
  delay(104);
  playNote(1, 48);
  delay(5);
  playNote(1, 50);
  delay(105);
  playNote(1, 50);
  delay(4);
  playNote(1, 48);
  delay(106);
  playNote(1, 48); playNote(2, 69); playNote(3, 74); playNote(4, 62);
  delay(3);
  playNote(1, 45); playNote(2, 68);
  delay(1);
  playNote(3, 81); playNote(4, 81);
  delay(215);
  playNote(1, 45);
  delay(5);
  playNote(1, 44);
  delay(107);
  playNote(1, 44); playNote(2, 68); playNote(3, 74); playNote(4, 62);
  delay(2);
  playNote(1, 43); playNote(2, 67); playNote(3, 81); playNote(4, 81);
  delay(105);
  playNote(1, 43);
  delay(3);
  playNote(1, 41);
  delay(107);
  playNote(1, 41); playNote(2, 67); playNote(3, 74); playNote(4, 62);
  delay(2);
  playNote(1, 48); playNote(2, 66); playNote(3, 81); playNote(4, 81);
  delay(105);
  playNote(1, 48);
  delay(5);
  playNote(1, 50);
  delay(105);
  playNote(1, 50);
  delay(5);
  playNote(1, 38);
  delay(105);
  playNote(1, 38);
  delay(5);
  playNote(1, 50);
  delay(105);
  playNote(1, 50);
  delay(116);
  playNote(1, 48);
  delay(106);
  playNote(1, 48);
  delay(116);
  playNote(1, 50);
  delay(107);
  playNote(1, 50);
  delay(338);
  playNote(2, 66); playNote(3, 74); playNote(4, 62);
  delay(110);
  playNote(1, 50); playNote(3, 81); playNote(4, 81);
  delay(105);
  playNote(1, 50); playNote(3, 74); playNote(4, 62);
  delay(4);
  playNote(1, 50); playNote(3, 81); playNote(4, 81);
  delay(104);
  playNote(1, 50);
  delay(4);
  playNote(1, 38);
  delay(218);
  playNote(1, 38); playNote(3, 74); playNote(4, 62);
  delay(3);
  playNote(1, 43); playNote(3, 70); playNote(4, 72);
  delay(105);
  playNote(4, 69);
  delay(54);
  playNote(1, 43);
  delay(59);
  playNote(1, 43); playNote(4, 74);
  delay(106);
  playNote(1, 43); playNote(4, 70);
  delay(4);
  playNote(1, 41); playNote(4, 67);
  delay(105);
  playNote(1, 41); playNote(4, 62);
  delay(5);
  playNote(1, 43); playNote(2, 62);
  delay(110);
  playNote(4, 74);
  delay(51);
  playNote(1, 43);
  delay(59);
  playNote(1, 43);
  delay(106);
  playNote(1, 43); playNote(4, 70);
  delay(4);
  playNote(1, 41);
  delay(36);
  playNote(2, 62);
  delay(68);
  playNote(1, 41);
  delay(5);
  playNote(1, 43); playNote(2, 69); playNote(4, 72);
  delay(106);
  playNote(4, 69);
  delay(111);
  playNote(1, 43); playNote(2, 69);
  delay(3);
  playNote(1, 46); playNote(2, 70); playNote(4, 74);
  delay(107);
  playNote(1, 46); playNote(2, 70); playNote(4, 70);
  delay(3);
  playNote(1, 48); playNote(2, 72); playNote(4, 67);
  delay(105);
  playNote(4, 62);
  delay(54);
  playNote(2, 72);
  delay(55);
  playNote(1, 48);
  delay(4);
  playNote(2, 74); playNote(4, 74);
  delay(105);
  playNote(4, 70);
  delay(4);
  playNote(1, 43);
  delay(51);
  playNote(2, 74);
  delay(60);
  playNote(2, 70); playNote(3, 70); playNote(4, 72);
  delay(107);
  playNote(1, 43);
  delay(4);
  playNote(1, 41); playNote(3, 72);
  delay(105);
  playNote(4, 69);
  delay(55);
  playNote(1, 41);
  delay(59);
  playNote(1, 41); playNote(4, 74);
  delay(107);
  playNote(1, 41); playNote(4, 70);
  delay(3);
  playNote(1, 39); playNote(4, 67);
  delay(36);
  playNote(2, 70);
  delay(70);
  playNote(1, 39); playNote(4, 62);
  delay(3);
  playNote(1, 41); playNote(2, 62);
  delay(111);
  playNote(4, 74);
  delay(49);
  playNote(1, 41);
  delay(60);
  playNote(1, 41);
  delay(107);
  playNote(1, 41); playNote(4, 70);
  delay(4);
  playNote(1, 39);
  delay(36);
  playNote(2, 62);
  delay(69);
  playNote(1, 39);
  delay(5);
  playNote(1, 41); playNote(2, 69); playNote(4, 72);
  delay(104);
  playNote(1, 41); playNote(4, 69);
  delay(110);
  playNote(2, 69);
  delay(5);
  playNote(1, 45); playNote(2, 70); playNote(4, 74);
  delay(106);
  playNote(1, 45); playNote(2, 70); playNote(4, 70);
  delay(3);
  playNote(1, 46); playNote(2, 72); playNote(4, 67);
  delay(108);
  playNote(1, 46); playNote(4, 62);
  delay(54);
  playNote(2, 72);
  delay(60);
  playNote(1, 46); playNote(2, 74); playNote(4, 74);
  delay(106);
  playNote(1, 46); playNote(4, 70);
  delay(3);
  playNote(1, 38);
  delay(50);
  playNote(2, 74);
  delay(56);
  playNote(1, 38);
  delay(3);
  playNote(1, 40); playNote(2, 70); playNote(3, 72); playNote(4, 72);
  delay(105);
  playNote(4, 69);
  delay(4);
  playNote(3, 74); playNote(4, 62);
  delay(104);
  playNote(4, 58);
  delay(4);
  playNote(4, 62);
  delay(51);
  playNote(1, 40);
  delay(55);
  playNote(2, 70); playNote(4, 58);
  delay(4);
  playNote(1, 40); playNote(2, 69); playNote(4, 70);
  delay(105);
  playNote(1, 40); playNote(2, 69); playNote(4, 67);
  delay(4);
  playNote(1, 38); playNote(2, 67); playNote(4, 62);
  delay(105);
  playNote(1, 38); playNote(4, 58);
  delay(3);
  playNote(1, 40); playNote(4, 72);
  delay(106);
  playNote(4, 69);
  delay(3);
  playNote(4, 70);
  delay(50);
  playNote(1, 40);
  delay(60);
  playNote(1, 40);
  delay(107);
  playNote(1, 40); playNote(4, 67);
  delay(3);
  playNote(1, 38); playNote(4, 70);
  delay(106);
  playNote(1, 38); playNote(4, 67);
  delay(4);
  playNote(1, 40);
  delay(105);
  playNote(1, 40);
  delay(4);
  playNote(1, 45);
  delay(111);
  playNote(2, 67);
  delay(105);
  playNote(1, 45);
  delay(5);
  playNote(1, 46); playNote(2, 69); playNote(4, 62);
  delay(105);
  playNote(4, 58);
  delay(5);
  playNote(4, 69);
  delay(106);
  playNote(1, 46);
  delay(111);
  playNote(2, 69); playNote(4, 65);
  delay(3);
  playNote(1, 48); playNote(2, 70); playNote(4, 70);
  delay(110);
  playNote(3, 74);
  delay(106);
  playNote(1, 48); playNote(2, 70); playNote(4, 67);
  delay(5);
  playNote(1, 39); playNote(2, 72); playNote(3, 75); playNote(4, 72);
  delay(104);
  playNote(2, 72); playNote(4, 69);
  delay(4);
  playNote(2, 70);
  delay(51);
  playNote(1, 39);
  delay(55);
  playNote(2, 70);
  delay(4);
  playNote(1, 39); playNote(2, 69); playNote(4, 74);
  delay(105);
  playNote(1, 39); playNote(2, 69); playNote(4, 70);
  delay(3);
  playNote(1, 38); playNote(2, 62); playNote(4, 67);
  delay(105);
  playNote(1, 38); playNote(4, 62);
  delay(4);
  playNote(1, 39);
  delay(110);
  playNote(4, 74);
  delay(50);
  playNote(1, 39);
  delay(60);
  playNote(1, 39);
  delay(107);
  playNote(1, 39); playNote(4, 70);
  delay(3);
  playNote(1, 38); playNote(3, 75); playNote(4, 72);
  delay(105);
  playNote(1, 38); playNote(4, 69);
  delay(2);
  playNote(1, 39); playNote(3, 74);
  delay(106);
  playNote(1, 39);
  delay(4);
  playNote(1, 46); playNote(4, 72);
  delay(105);
  playNote(4, 69);
  delay(110);
  playNote(1, 46);
  delay(5);
  playNote(1, 45); playNote(4, 74);
  delay(36);
  playNote(3, 74);
  delay(69);
  playNote(1, 45); playNote(4, 70);
  delay(4);
  playNote(1, 41); playNote(3, 69); playNote(4, 67);
  delay(104);
  playNote(1, 41); playNote(4, 62);
  delay(116);
  playNote(1, 38); playNote(4, 74);
  delay(109);
  playNote(2, 62);
  delay(37);
  playNote(3, 69);
  delay(70);
  playNote(1, 38); playNote(4, 70);
  delay(4);
  playNote(1, 43); playNote(3, 70); playNote(4, 72);
  delay(106);
  playNote(4, 69);
  delay(53);
  playNote(1, 43);
  delay(61);
  playNote(1, 43); playNote(4, 74);
  delay(106);
  playNote(1, 43); playNote(4, 70);
  delay(4);
  playNote(1, 41); playNote(4, 67);
  delay(105);
  playNote(1, 41); playNote(4, 62);
  delay(4);
  playNote(1, 43); playNote(2, 62);
  delay(110);
  playNote(4, 74);
  delay(50);
  playNote(1, 43);
  delay(60);
  playNote(1, 43);
  delay(106);
  playNote(1, 43); playNote(4, 70);
  delay(4);
  playNote(1, 41);
  delay(36);
  playNote(2, 62);
  delay(71);
  playNote(1, 41);
  delay(2);
  playNote(1, 43); playNote(2, 69); playNote(4, 72);
  delay(106);
  playNote(4, 69);
  delay(111);
  playNote(1, 43); playNote(2, 69);
  delay(3);
  playNote(1, 46); playNote(2, 70); playNote(4, 74);
  delay(106);
  playNote(1, 46); playNote(2, 70); playNote(4, 70);
  delay(4);
  playNote(1, 48); playNote(2, 72); playNote(4, 67);
  delay(105);
  playNote(4, 62);
  delay(55);
  playNote(2, 72);
  delay(54);
  playNote(1, 48);
  delay(5);
  playNote(2, 74); playNote(4, 74);
  delay(105);
  playNote(4, 70);
  delay(4);
  playNote(1, 43);
  delay(51);
  playNote(2, 74);
  delay(60);
  playNote(2, 70); playNote(3, 70); playNote(4, 72);
  delay(105);
  playNote(1, 43);
  delay(4);
  playNote(1, 41); playNote(3, 72);
  delay(106);
  playNote(4, 69);
  delay(54);
  playNote(1, 41);
  delay(60);
  playNote(1, 41); playNote(4, 74);
  delay(107);
  playNote(1, 41); playNote(4, 70);
  delay(3);
  playNote(1, 39); playNote(4, 67);
  delay(36);
  playNote(2, 70);
  delay(70);
  playNote(1, 39); playNote(4, 62);
  delay(5);
  playNote(1, 41); playNote(2, 62);
  delay(109);
  playNote(4, 74);
  delay(50);
  playNote(1, 41);
  delay(60);
  playNote(1, 41);
  delay(106);
  playNote(1, 41); playNote(4, 70);
  delay(4);
  playNote(1, 39);
  delay(36);
  playNote(2, 62);
  delay(69);
  playNote(1, 39);
  delay(5);
  playNote(1, 41); playNote(2, 69); playNote(4, 72);
  delay(104);
  playNote(1, 41); playNote(4, 69);
  delay(112);
  playNote(2, 69);
  delay(3);
  playNote(1, 45); playNote(2, 70); playNote(4, 74);
  delay(105);
  playNote(1, 45); playNote(2, 70); playNote(4, 70);
  delay(4);
  playNote(1, 46); playNote(2, 72); playNote(4, 67);
  delay(105);
  playNote(1, 46); playNote(4, 62);
  delay(52);
  playNote(2, 72);
  delay(61);
  playNote(1, 46); playNote(2, 74); playNote(4, 74);
  delay(105);
  playNote(1, 46); playNote(4, 70);
  delay(4);
  playNote(1, 38);
  delay(51);
  playNote(2, 74);
  delay(55);
  playNote(1, 38);
  delay(4);
  playNote(1, 40); playNote(2, 72); playNote(3, 72); playNote(4, 72);
  delay(105);
  playNote(4, 72);
  delay(1);
  playNote(4, 69);
  delay(2);
  playNote(3, 74); playNote(4, 62);
  delay(105);
  playNote(2, 72); playNote(4, 58);
  delay(6);
  playNote(2, 70);
  delay(3);
  playNote(4, 62);
  delay(45);
  playNote(1, 40);
  delay(55);
  playNote(2, 70); playNote(4, 58);
  delay(4);
  playNote(1, 40); playNote(2, 69); playNote(4, 70);
  delay(105);
  playNote(1, 40); playNote(2, 69); playNote(4, 67);
  delay(3);
  playNote(1, 38); playNote(2, 67); playNote(4, 62);
  delay(107);
  playNote(1, 38); playNote(4, 58);
  delay(3);
  playNote(1, 40); playNote(4, 72);
  delay(106);
  playNote(4, 69);
  delay(3);
  playNote(4, 70);
  delay(51);
  playNote(1, 40);
  delay(61);
  playNote(1, 40);
  delay(106);
  playNote(1, 40); playNote(4, 67);
  delay(4);
  playNote(1, 38); playNote(4, 70);
  delay(105);
  playNote(1, 38); playNote(4, 67);
  delay(4);
  playNote(1, 40);
  delay(105);
  playNote(1, 40);
  delay(5);
  playNote(1, 45);
  delay(36);
  playNote(2, 67);
  delay(73);
  playNote(0, 71); playNote(2, 69);
  delay(105);
  playNote(1, 45);
  delay(5);
  playNote(1, 46); playNote(4, 62);
  delay(106);
  playNote(0, 71); playNote(2, 69); playNote(4, 58);
  delay(3);
  playNote(2, 70); playNote(4, 70);
  delay(106);
  playNote(1, 46);
  delay(111);
  playNote(2, 70);
  delay(4);
  playNote(0, 67); playNote(1, 48); playNote(2, 72);
  delay(105);
  playNote(0, 67);
  delay(4);
  playNote(0, 67); playNote(3, 74);
  delay(36);
  playNote(4, 67);
  delay(69);
  playNote(0, 67); playNote(1, 48); playNote(2, 72);
  delay(5);
  playNote(1, 39); playNote(2, 63); playNote(3, 75); playNote(4, 75);
  delay(160);
  playNote(1, 39);
  delay(54);
  playNote(4, 69);
  delay(5);
  playNote(1, 39);
  delay(105);
  playNote(1, 39); playNote(2, 63);
  delay(11);
  playNote(1, 38);
  delay(99);
  playNote(1, 38);
  delay(4);
  playNote(1, 39); playNote(2, 74); playNote(4, 74);
  delay(106);
  playNote(1, 39);
  delay(3);
  playNote(1, 36);
  delay(162);
  playNote(1, 36);
  delay(59);
  playNote(1, 38); playNote(3, 75);
  delay(112);
  playNote(3, 74);
  delay(49);
  playNote(1, 38);
  delay(61);
  playNote(1, 46);
  delay(216);
  playNote(1, 46); playNote(2, 74); playNote(3, 74);
  delay(4);
  playNote(1, 45); playNote(2, 72); playNote(3, 72);
  delay(105);
  playNote(1, 45); playNote(2, 72); playNote(3, 72);
  delay(4);
  playNote(1, 41); playNote(2, 70); playNote(3, 70);
  delay(161);
  playNote(1, 41); playNote(2, 70); playNote(3, 70);
  delay(55);
  playNote(4, 69);
  delay(4);
  playNote(1, 38); playNote(2, 69); playNote(3, 69); playNote(4, 74);
  delay(217);
  playNote(1, 38); playNote(2, 69); playNote(3, 69); playNote(4, 69);
  delay(3);
  playNote(1, 43); playNote(2, 69); playNote(3, 70); playNote(4, 67);
  delay(105);
  playNote(1, 43); playNote(2, 69);
  delay(4);
  playNote(1, 41); playNote(2, 67);
  delay(105);
  playNote(1, 41); playNote(2, 67);
  delay(115);
  playNote(1, 43); playNote(2, 67);
  delay(443);
  playNote(3, 67); playNote(4, 67);
  delay(110);
  playNote(3, 69); playNote(4, 69);
  delay(370);
  playNote(3, 70); playNote(4, 69);
  delay(74);
  playNote(3, 70); playNote(4, 70);
  delay(331);
  playNote(1, 43);
  delay(37);
  playNote(4, 70);
  delay(74);
  playNote(1, 41); playNote(3, 72); playNote(4, 72);
  delay(105);
  playNote(1, 41);
  delay(4);
  playNote(1, 39);
  delay(107);
  playNote(1, 39);
  delay(115);
  playNote(1, 41);
  delay(592);
  playNote(1, 41);
  delay(73);
  playNote(1, 41);
  delay(107);
  playNote(1, 41); playNote(3, 70); playNote(4, 72);
  delay(2);
  playNote(1, 45); playNote(3, 70); playNote(4, 70);
  delay(106);
  playNote(1, 45);
  delay(4);
  playNote(1, 46);
  delay(106);
  playNote(1, 46); playNote(4, 70);
  delay(5);
  playNote(1, 48); playNote(3, 69); playNote(4, 69);
  delay(105);
  playNote(1, 48);
  delay(5);
  playNote(1, 46);
  delay(106);
  playNote(1, 46); playNote(3, 69); playNote(4, 69);
  delay(5);
  playNote(1, 45); playNote(3, 62); playNote(4, 62);
  delay(105);
  playNote(1, 45);
  delay(4);
  playNote(1, 38); playNote(2, 67);
  delay(105);
  playNote(1, 38); playNote(3, 70); playNote(4, 62);
  delay(5);
  playNote(1, 43); playNote(3, 79);
  delay(105);
  playNote(3, 70);
  delay(4);
  playNote(3, 79);
  delay(50);
  playNote(1, 43);
  delay(60);
  playNote(1, 43);
  delay(106);
  playNote(1, 43); playNote(3, 70);
  delay(3);
  playNote(1, 41);
  delay(107);
  playNote(1, 41);
  delay(4);
  ymzShield.mute();
}