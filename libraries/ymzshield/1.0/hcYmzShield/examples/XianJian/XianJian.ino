/**
 * Xian Jian Qi Xia Demo
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
  Serial.println("Suzhou - Xian Jian Qi Xia Zhuan by Lin Kunxin");
}


void loop() {
  YMZ.setVolume(0,  8);
  YMZ.setVolume(1, 10);
  YMZ.setVolume(2,  8);
  YMZ.setVolume(3, 10);
  YMZ.setVolume(4,  9);
  YMZ.setVolume(5, 10);
  
  YMZ.setTempo(130);
  YMZ.setArticulation(LEGATO);
  
  YMZ.setChannels(  64,   64,   59,   64,   40,   76); delay(226);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(4);
  YMZ.setChannels(  67, SKIP, SKIP,   67, SKIP,   79); delay(227);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(4);
  YMZ.setChannels(  62, SKIP, SKIP,   62, SKIP,   74); delay(155);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(72);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(5);
  YMZ.setChannels(  64,   64,   59,   64,   40,   76); delay(225);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(6);
  YMZ.setChannels(  59, SKIP, SKIP,   59, SKIP,   71); delay(384);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(423);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(116);
  YMZ.setChannels(  62,   64,   59,   62,   40,   74); delay(225);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(5);
  YMZ.setChannels(  64, SKIP, SKIP,   64, SKIP,   76); delay(227);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(4);
  YMZ.setChannels(  59, SKIP, SKIP,   59, SKIP,   71); delay(154);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(73);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(5);
  YMZ.setChannels(  62,   62,   57,   62,   38,   74); delay(225);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(6);
  YMZ.setChannels(  57, SKIP, SKIP,   57, SKIP,   69); delay(807);
  YMZ.setChannels( OFF,  OFF,  OFF,  OFF,  OFF,  OFF); delay(116);
  YMZ.setChannels(  55,   60,   55,   55,   36,   67); delay(225);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(6);
  YMZ.setChannels(  52, SKIP, SKIP,   52, SKIP,   64); delay(225);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(5);
  YMZ.setChannels(  55, SKIP, SKIP,   55, SKIP,   67); delay(154);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(73);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(4);
  YMZ.setChannels(  59,   62,   57,   59,   38,   71); delay(227);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(5);
  YMZ.setChannels(  57, SKIP, SKIP,   57, SKIP,   69); delay(225);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(6);
  YMZ.setChannels(  62, SKIP, SKIP,   62, SKIP,   74); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(4);
  YMZ.setChannels(  59, SKIP, SKIP,   59, SKIP,   71); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(5);
  YMZ.setChannels(  57, SKIP, SKIP,   57, SKIP,   69); delay(227);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(4);
  YMZ.setChannels(  52, SKIP, SKIP,   52, SKIP,   64); delay(116);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(5);
  YMZ.setChannels(  59,   64,   59,   59,   40,   71); delay(110);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(5);
  YMZ.setChannels(  59, SKIP, SKIP,   59, SKIP,   71); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(6);
  YMZ.setChannels(  59, SKIP, SKIP,   59, SKIP,   71); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(4);
  YMZ.setChannels(  59, SKIP, SKIP,   59, SKIP,   71); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(6);
  YMZ.setChannels(  59, SKIP, SKIP,   59, SKIP,   71); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(5);
  YMZ.setChannels(  59, SKIP, SKIP,   59, SKIP,   71); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(4);
  YMZ.setChannels(  59, SKIP, SKIP,   59, SKIP,   71); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(6);
  YMZ.setChannels(  59, SKIP, SKIP,   59, SKIP,   71); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(4);
  YMZ.setChannels(  59, SKIP, SKIP,   59, SKIP,   71); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(5);
  YMZ.setChannels(  59, SKIP, SKIP,   59, SKIP,   71); delay(112);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(5);
  YMZ.setChannels(  59, SKIP, SKIP,   59, SKIP,   71); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(4);
  YMZ.setChannels(  59, SKIP, SKIP,   59, SKIP,   71); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(6);
  YMZ.setChannels(  59, SKIP, SKIP,   59, SKIP,   71); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(5);
  YMZ.setChannels(  59, SKIP, SKIP,   59, SKIP,   71); delay(231);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(4);
  YMZ.setChannels(  64,   64,   59,   64,   40,   76); delay(227);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(5);
  YMZ.setChannels(  67, SKIP, SKIP,   67, SKIP,   79); delay(225);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(6);
  YMZ.setChannels(  62, SKIP, SKIP,   62, SKIP,   74); delay(154);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(71);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(5);
  YMZ.setChannels(  64,   64,   59,   64,   40,   76); delay(227);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(4);
  YMZ.setChannels(  59, SKIP, SKIP,   59, SKIP,   71); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(6);
  YMZ.setChannels(  59, SKIP, SKIP,   59, SKIP,   71); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(5);
  YMZ.setChannels(  59, SKIP, SKIP,   59, SKIP,   71); delay(110);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(5);
  YMZ.setChannels(  59, SKIP, SKIP,   59, SKIP,   71); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(352);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(114);
  YMZ.setChannels(  62,   64,   59,   62,   40,   74); delay(227);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(4);
  YMZ.setChannels(  64, SKIP, SKIP,   64, SKIP,   76); delay(227);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(5);
  YMZ.setChannels(  59, SKIP, SKIP,   59, SKIP,   71); delay(154);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(71);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(6);
  YMZ.setChannels(  62,   62,   57,   62,   38,   74); delay(225);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(5);
  YMZ.setChannels(  57, SKIP, SKIP,   57, SKIP,   69); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(6);
  YMZ.setChannels(  57, SKIP, SKIP,   57, SKIP,   69); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(4);
  YMZ.setChannels(  57, SKIP, SKIP,   57, SKIP,   69); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(6);
  YMZ.setChannels(  57, SKIP, SKIP,   57, SKIP,   69); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(5);
  YMZ.setChannels(  57, SKIP, SKIP,   57, SKIP,   69); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(4);
  YMZ.setChannels(  57, SKIP, SKIP,   57, SKIP,   69); delay(231);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(5);
  YMZ.setChannels(  55,   60,   55,   55,   36,   67); delay(227);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(4);
  YMZ.setChannels(  52, SKIP, SKIP,   52, SKIP,   64); delay(227);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(5);
  YMZ.setChannels(  55, SKIP, SKIP,   55, SKIP,   67); delay(154);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(71);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(6);
  YMZ.setChannels(  59,   62,   57,   59,   38,   71); delay(225);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(6);
  YMZ.setChannels(  57, SKIP, SKIP,   57, SKIP,   69); delay(226);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(4);
  YMZ.setChannels(  62, SKIP, SKIP,   62, SKIP,   74); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(6);
  YMZ.setChannels(  59, SKIP, SKIP,   59, SKIP,   71); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(4);
  YMZ.setChannels(  57, SKIP, SKIP,   57, SKIP,   69); delay(227);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(5);
  YMZ.setChannels(  59, SKIP, SKIP,   59, SKIP,   71); delay(114);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(6);
  YMZ.setChannels(  52,   64,   59,   52,   40,   64); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(5);
  YMZ.setChannels(  52, SKIP, SKIP,   52, SKIP,   64); delay(110);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(5);
  YMZ.setChannels(  52, SKIP, SKIP,   52, SKIP,   64); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(6);
  YMZ.setChannels(  52, SKIP, SKIP,   52, SKIP,   64); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(4);
  YMZ.setChannels(  52, SKIP, SKIP,   52, SKIP,   64); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(6);
  YMZ.setChannels(  52, SKIP, SKIP,   52, SKIP,   64); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(5);
  YMZ.setChannels(  52, SKIP, SKIP,   52, SKIP,   64); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(4);
  YMZ.setChannels(  52, SKIP, SKIP,   52, SKIP,   64); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(6);
  YMZ.setChannels(  52, SKIP, SKIP,   52, SKIP,   64); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(4);
  YMZ.setChannels(  52, SKIP, SKIP,   52, SKIP,   64); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(5);
  YMZ.setChannels(  52, SKIP, SKIP,   52, SKIP,   64); delay(112);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(5);
  YMZ.setChannels(  52, SKIP, SKIP,   52, SKIP,   64); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(350);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(116);
  YMZ.setChannels(  67,   67,   62,   67,   43,   79); delay(225);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(6);
  YMZ.setChannels(  70, SKIP, SKIP,   70, SKIP,   82); delay(226);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(4);
  YMZ.setChannels(  65, SKIP, SKIP,   65, SKIP,   77); delay(154);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(73);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(4);
  YMZ.setChannels(  67,   67,   62,   67,   43,   79); delay(227);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(5);
  YMZ.setChannels(  62, SKIP, SKIP,   62, SKIP,   74); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(4);
  YMZ.setChannels(  62, SKIP, SKIP,   62, SKIP,   74); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(6);
  YMZ.setChannels(  62, SKIP, SKIP,   62, SKIP,   74); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(5);
  YMZ.setChannels(  62, SKIP, SKIP,   62, SKIP,   74); delay(110);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(5);
  YMZ.setChannels(  62, SKIP, SKIP,   62, SKIP,   74); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(6);
  YMZ.setChannels(  62, SKIP, SKIP,   62, SKIP,   74); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(4);
  YMZ.setChannels(  62, SKIP, SKIP,   62, SKIP,   74); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(6);
  YMZ.setChannels(  62,  OFF,  OFF,   62,  OFF,   74); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(5);
  YMZ.setChannels(  65,   67,   62,   65,   43,   77); delay(225);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(6);
  YMZ.setChannels(  67, SKIP, SKIP,   67, SKIP,   79); delay(225);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(5);
  YMZ.setChannels(  62, SKIP, SKIP,   62, SKIP,   74); delay(154);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(73);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(4);
  YMZ.setChannels(  65,   65,   60,   65,   41,   77); delay(227);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(5);
  YMZ.setChannels(  60, SKIP, SKIP,   60, SKIP,   72); delay(110);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(5);
  YMZ.setChannels(  60, SKIP, SKIP,   60, SKIP,   72); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(6);
  YMZ.setChannels(  60, SKIP, SKIP,   60, SKIP,   72); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(4);
  YMZ.setChannels(  60, SKIP, SKIP,   60, SKIP,   72); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(6);
  YMZ.setChannels(  60, SKIP, SKIP,   60, SKIP,   72); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(5);
  YMZ.setChannels(  60, SKIP, SKIP,   60, SKIP,   72); delay(231);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(4);
  YMZ.setChannels(  58,   63,   58,   58,   39,   70); delay(227);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(5);
  YMZ.setChannels(  55, SKIP, SKIP,   55, SKIP,   67); delay(225);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(6);
  YMZ.setChannels(  58, SKIP, SKIP,   58, SKIP,   70); delay(153);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(72);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(5);
  YMZ.setChannels(  62,   65,   60,   62,   41,   74); delay(227);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(4);
  YMZ.setChannels(  60, SKIP, SKIP,   60, SKIP,   72); delay(227);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(5);
  YMZ.setChannels(  65, SKIP, SKIP,   65, SKIP,   77); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(4);
  YMZ.setChannels(  62, SKIP, SKIP,   62, SKIP,   74); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(6);
  YMZ.setChannels(  60, SKIP, SKIP,   60, SKIP,   72); delay(225);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(5);
  YMZ.setChannels(  55, SKIP, SKIP,   55, SKIP,   67); delay(116);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(4);
  YMZ.setChannels(  62,   67,   62,   62,   43,   74); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(6);
  YMZ.setChannels(  62, SKIP, SKIP,   62, SKIP,   74); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(5);
  YMZ.setChannels(  62, SKIP, SKIP,   62, SKIP,   74); delay(110);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(5);
  YMZ.setChannels(  62, SKIP, SKIP,   62, SKIP,   74); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(6);
  YMZ.setChannels(  62, SKIP, SKIP,   62, SKIP,   74); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(4);
  YMZ.setChannels(  62, SKIP, SKIP,   62, SKIP,   74); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(6);
  YMZ.setChannels(  62, SKIP, SKIP,   62, SKIP,   74); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(5);
  YMZ.setChannels(  62, SKIP, SKIP,   62, SKIP,   74); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(4);
  YMZ.setChannels(  62, SKIP, SKIP,   62, SKIP,   74); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(6);
  YMZ.setChannels(  62, SKIP, SKIP,   62, SKIP,   74); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(4);
  YMZ.setChannels(  62, SKIP, SKIP,   62, SKIP,   74); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(5);
  YMZ.setChannels(  62, SKIP, SKIP,   62, SKIP,   74); delay(112);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(5);
  YMZ.setChannels(  62, SKIP, SKIP,   62, SKIP,   74); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(4);
  YMZ.setChannels(  62, SKIP, SKIP,   62, SKIP,   74); delay(232);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(110);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(5);
  YMZ.setChannels(  67,   67,   62,   67,   43,   79); delay(227);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(4);
  YMZ.setChannels(  70, SKIP, SKIP,   70, SKIP,   82); delay(227);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(5);
  YMZ.setChannels(  65, SKIP, SKIP,   65, SKIP,   77); delay(154);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(71);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(6);
  YMZ.setChannels(  67,   67,   62,   67,   43,   79); delay(225);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(5);
  YMZ.setChannels(  62, SKIP, SKIP,   62, SKIP,   74); delay(112);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(5);
  YMZ.setChannels(  62, SKIP, SKIP,   62, SKIP,   74); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(4);
  YMZ.setChannels(  62, SKIP, SKIP,   62, SKIP,   74); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(6);
  YMZ.setChannels(  62, SKIP, SKIP,   62, SKIP,   74); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(5);
  YMZ.setChannels(  62, SKIP, SKIP,   62, SKIP,   74); delay(110);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(5);
  YMZ.setChannels(  62, SKIP, SKIP,   62, SKIP,   74); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(6);
  YMZ.setChannels(  62, SKIP, SKIP,   62, SKIP,   74); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(4);
  YMZ.setChannels(  62,  OFF,  OFF,   62,  OFF,   74); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(6);
  YMZ.setChannels(  65,   67,   62,   65,   43,   77); delay(226);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(4);
  YMZ.setChannels(  67, SKIP, SKIP,   67, SKIP,   79); delay(227);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(4);
  YMZ.setChannels(  62, SKIP, SKIP,   62, SKIP,   74); delay(155);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(72);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(5);
  YMZ.setChannels(  65,   65,   60,   65,   41,   77); delay(225);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(6);
  YMZ.setChannels(  60, SKIP, SKIP,   60, SKIP,   72); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(5);
  YMZ.setChannels(  60, SKIP, SKIP,   60, SKIP,   72); delay(110);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(5);
  YMZ.setChannels(  60, SKIP, SKIP,   60, SKIP,   72); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(6);
  YMZ.setChannels(  60, SKIP, SKIP,   60, SKIP,   72); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(4);
  YMZ.setChannels(  60, SKIP, SKIP,   60, SKIP,   72); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(6);
  YMZ.setChannels(  60, SKIP, SKIP,   60, SKIP,   72); delay(230);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(6);
  YMZ.setChannels(  58,   63,   58,   58,   39,   70); delay(225);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(5);
  YMZ.setChannels(  55, SKIP, SKIP,   55, SKIP,   67); delay(227);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(4);
  YMZ.setChannels(  58, SKIP, SKIP,   58, SKIP,   70); delay(154);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(73);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(5);
  YMZ.setChannels(  62,   65,   60,   62,   41,   74); delay(225);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(6);
  YMZ.setChannels(  60, SKIP, SKIP,   60, SKIP,   72); delay(225);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(6);
  YMZ.setChannels(  65, SKIP, SKIP,   65, SKIP,   77); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(5);
  YMZ.setChannels(  62, SKIP, SKIP,   62, SKIP,   74); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(4);
  YMZ.setChannels(  60, SKIP, SKIP,   60, SKIP,   72); delay(227);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(4);
  YMZ.setChannels(  62, SKIP, SKIP,   62, SKIP,   74); delay(115);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(112);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(5);
  YMZ.setChannels(  55,   67,   62,   55,   43,   67); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(4);
  YMZ.setChannels(  55, SKIP, SKIP,   55, SKIP,   67); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(6);
  YMZ.setChannels(  55, SKIP, SKIP,   55, SKIP,   67); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(5);
  YMZ.setChannels(  55, SKIP, SKIP,   55, SKIP,   67); delay(110);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(5);
  YMZ.setChannels(  55, SKIP, SKIP,   55, SKIP,   67); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(6);
  YMZ.setChannels(  55, SKIP, SKIP,   55, SKIP,   67); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(4);
  YMZ.setChannels(  55, SKIP, SKIP,   55, SKIP,   67); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(6);
  YMZ.setChannels(  55, SKIP, SKIP,   55, SKIP,   67); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(5);
  YMZ.setChannels(  55, SKIP, SKIP,   55, SKIP,   67); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(4);
  YMZ.setChannels(  55, SKIP, SKIP,   55, SKIP,   67); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(6);
  YMZ.setChannels(  55, SKIP, SKIP,   55, SKIP,   67); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(4);
  YMZ.setChannels(  55, SKIP, SKIP,   55, SKIP,   67); delay(111);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(352);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(115);
  YMZ.setChannels(  53,   65,   60,   53,   41,   65); delay(225);
  YMZ.setChannels( OFF,  OFF,  OFF,  OFF,  OFF,  OFF); delay(6);
  YMZ.setChannels(  57,   65,   60,   57,   41,   69); delay(225);
  YMZ.setChannels( OFF,  OFF,  OFF,  OFF,  OFF,  OFF); delay(6);
  YMZ.setChannels(  60,   65,   60,   60,   41,   72); delay(226);
  YMZ.setChannels( OFF,  OFF,  OFF,  OFF,  OFF,  OFF); delay(4);
  YMZ.setChannels(  62,   65,   60,   62,   41,   74); delay(227);
  YMZ.setChannels( OFF,  OFF,  OFF,  OFF,  OFF,  OFF); delay(4);
  YMZ.setChannels(  67,   65,   60,   67,   41,   79); delay(227);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(5);
  YMZ.setChannels(SKIP,   65,   60, SKIP,   41, SKIP); delay(225);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(6);
  YMZ.setChannels(SKIP,   65,   60, SKIP,   41, SKIP); delay(153);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(72);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(5);
  YMZ.setChannels(  65,   65,   60,   65,   41,   77); delay(227);
  YMZ.setChannels( OFF,  OFF,  OFF,  OFF,  OFF,  OFF); delay(4);
  YMZ.setChannels(  62,   62,   57,   62,   38,   74); delay(227);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(5);
  YMZ.setChannels(SKIP,   62,   57, SKIP,   38, SKIP); delay(225);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(6);
  YMZ.setChannels(SKIP,   62,   57, SKIP,   38, SKIP); delay(225);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(5);
  YMZ.setChannels(SKIP,   62,   57, SKIP,   38, SKIP); delay(227);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(4);
  YMZ.setChannels(SKIP,   62,   57, SKIP,   38, SKIP); delay(227);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(5);
  YMZ.setChannels(SKIP,   62,   57, SKIP,   38, SKIP); delay(114);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(111);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(6);
  YMZ.setChannels(  60,   62,   57,   60,   38,   72); delay(225);
  YMZ.setChannels( OFF,  OFF,  OFF,  OFF,  OFF,  OFF); delay(6);
  YMZ.setChannels(  62,   62,   57,   62,   38,   74); delay(226);
  YMZ.setChannels( OFF,  OFF,  OFF,  OFF,  OFF,  OFF); delay(4);
  YMZ.setChannels(  53,   65,   60,   53,   41,   65); delay(227);
  YMZ.setChannels( OFF,  OFF,  OFF,  OFF,  OFF,  OFF); delay(4);
  YMZ.setChannels(  57,   65,   60,   57,   41,   69); delay(227);
  YMZ.setChannels( OFF,  OFF,  OFF,  OFF,  OFF,  OFF); delay(5);
  YMZ.setChannels(  60,   65,   60,   60,   41,   72); delay(225);
  YMZ.setChannels( OFF,  OFF,  OFF,  OFF,  OFF,  OFF); delay(6);
  YMZ.setChannels(  62,   65,   60,   62,   41,   74); delay(225);
  YMZ.setChannels( OFF,  OFF,  OFF,  OFF,  OFF,  OFF); delay(5);
  YMZ.setChannels(  65,   65,   60,   65,   41,   77); delay(227);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(4);
  YMZ.setChannels(SKIP,   65,   60, SKIP,   41, SKIP); delay(227);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(5);
  YMZ.setChannels(SKIP,   65,   60, SKIP,   41, SKIP); delay(154);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(71);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(6);
  YMZ.setChannels(  67,   65,   60,   67,   41,   79); delay(225);
  YMZ.setChannels( OFF,  OFF,  OFF,  OFF,  OFF,  OFF); delay(5);
  YMZ.setChannels(  62,   62,   57,   62,   38,   74); delay(227);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(4);
  YMZ.setChannels(SKIP,   62,   57, SKIP,   38, SKIP); delay(227);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(5);
  YMZ.setChannels(SKIP,   62,   57, SKIP,   38, SKIP); delay(225);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(6);
  YMZ.setChannels(SKIP,   62,   57, SKIP,   38, SKIP); delay(225);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(6);
  YMZ.setChannels(SKIP,   62,   57, SKIP,   38, SKIP); delay(226);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(4);
  YMZ.setChannels(SKIP,   62,   57, SKIP,   38, SKIP); delay(116);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(111);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(4);
  YMZ.setChannels(  62,   62,   57,   62,   38,   74); delay(227);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(5);
  YMZ.setChannels(SKIP,   62,   57, SKIP,   38, SKIP); delay(154);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(71);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(6);
  YMZ.setChannels(  67,   67,   62,   67,   43,   79); delay(225);
  YMZ.setChannels( OFF,  OFF,  OFF,  OFF,  OFF,  OFF); delay(5);
  YMZ.setChannels(  70,   67,   62,   70,   43,   82); delay(227);
  YMZ.setChannels( OFF,  OFF,  OFF,  OFF,  OFF,  OFF); delay(4);
  YMZ.setChannels(  65,   67,   62,   65,   43,   77); delay(227);
  YMZ.setChannels( OFF,  OFF,  OFF,  OFF,  OFF,  OFF); delay(5);
  YMZ.setChannels(  67,   65,   60,   67,   41,   79); delay(225);
  YMZ.setChannels( OFF,  OFF,  OFF,  OFF,  OFF,  OFF); delay(6);
  YMZ.setChannels(  62,   65,   60,   62,   41,   74); delay(225);
  YMZ.setChannels( OFF,  OFF,  OFF,  OFF,  OFF,  OFF); delay(5);
  YMZ.setChannels(  65,   65,   60,   65,   41,   77); delay(227);
  YMZ.setChannels( OFF,  OFF,  OFF,  OFF,  OFF,  OFF); delay(4);
  YMZ.setChannels(  60,   65,   60,   60,   41,   72); delay(227);
  YMZ.setChannels( OFF,  OFF,  OFF,  OFF,  OFF,  OFF); delay(5);
  YMZ.setChannels(  62,   65,   60,   62,   41,   74); delay(225);
  YMZ.setChannels( OFF,  OFF,  OFF,  OFF,  OFF,  OFF); delay(6);
  YMZ.setChannels(  58,   63,   58,   58,   39,   70); delay(225);
  YMZ.setChannels( OFF,  OFF,  OFF,  OFF,  OFF,  OFF); delay(6);
  YMZ.setChannels(  60,   63,   58,   60,   39,   72); delay(226);
  YMZ.setChannels( OFF,  OFF,  OFF,  OFF,  OFF,  OFF); delay(4);
  YMZ.setChannels(  62,   63,   58,   62,   39,   74); delay(227);
  YMZ.setChannels( OFF,  OFF,  OFF,  OFF,  OFF,  OFF); delay(4);
  YMZ.setChannels(  65,   65,   60,   65,   41,   77); delay(227);
  YMZ.setChannels( OFF,  OFF,  OFF,  OFF,  OFF,  OFF); delay(5);
  YMZ.setChannels(  60,   65,   60,   60,   41,   72); delay(225);
  YMZ.setChannels( OFF,  OFF,  OFF,  OFF,  OFF,  OFF); delay(6);
  YMZ.setChannels(  62,   65,   60,   62,   41,   74); delay(225);
  YMZ.setChannels( OFF,  OFF,  OFF,  OFF,  OFF,  OFF); delay(5);
  YMZ.setChannels(  65,   65,   60,   65,   41,   77); delay(227);
  YMZ.setChannels( OFF,  OFF,  OFF,  OFF,  OFF,  OFF); delay(4);
  YMZ.setChannels(  62,   65,   60,   62,   41,   74); delay(227);
  YMZ.setChannels( OFF,  OFF,  OFF,  OFF,  OFF,  OFF); delay(5);
  YMZ.setChannels(  67,   67,   62,   67,   43,   79); delay(225);
  YMZ.setChannels( OFF,  OFF,  OFF,  OFF,  OFF,  OFF); delay(6);
  YMZ.setChannels(  70,   67,   62,   70,   43,   82); delay(225);
  YMZ.setChannels( OFF,  OFF,  OFF,  OFF,  OFF,  OFF); delay(5);
  YMZ.setChannels(  65,   67,   62,   65,   43,   77); delay(227);
  YMZ.setChannels( OFF,  OFF,  OFF,  OFF,  OFF,  OFF); delay(4);
  YMZ.setChannels(  67,   65,   60,   67,   41,   79); delay(227);
  YMZ.setChannels( OFF,  OFF,  OFF,  OFF,  OFF,  OFF); delay(5);
  YMZ.setChannels(  62,   65,   60,   62,   41,   74); delay(225);
  YMZ.setChannels( OFF,  OFF,  OFF,  OFF,  OFF,  OFF); delay(6);
  YMZ.setChannels(  65,   65,   60,   65,   41,   77); delay(225);
  YMZ.setChannels( OFF,  OFF,  OFF,  OFF,  OFF,  OFF); delay(6);
  YMZ.setChannels(  60,   65,   60,   60,   41,   72); delay(226);
  YMZ.setChannels( OFF,  OFF,  OFF,  OFF,  OFF,  OFF); delay(4);
  YMZ.setChannels(  62,   65,   60,   62,   41,   74); delay(227);
  YMZ.setChannels( OFF,  OFF,  OFF,  OFF,  OFF,  OFF); delay(4);
  YMZ.setChannels(  58,   63,   58,   58,   39,   70); delay(227);
  YMZ.setChannels( OFF,  OFF,  OFF,  OFF,  OFF,  OFF); delay(5);
  YMZ.setChannels(  60,   63,   58,   60,   39,   72); delay(225);
  YMZ.setChannels( OFF,  OFF,  OFF,  OFF,  OFF,  OFF); delay(6);
  YMZ.setChannels(  62,   63,   58,   62,   39,   74); delay(225);
  YMZ.setChannels( OFF,  OFF,  OFF,  OFF,  OFF,  OFF); delay(5);
  YMZ.setChannels(  65,   65,   60,   65,   41,   77); delay(227);
  YMZ.setChannels( OFF,  OFF,  OFF,  OFF,  OFF,  OFF); delay(4);
  YMZ.setChannels(  62,   65,   60,   62,   41,   74); delay(227);
  YMZ.setChannels( OFF,  OFF,  OFF,  OFF,  OFF,  OFF); delay(5);
  YMZ.setChannels(  65,   65,   60,   65,   41,   77); delay(225);
  YMZ.setChannels( OFF,  OFF,  OFF,  OFF,  OFF,  OFF); delay(6);
  YMZ.setChannels(  67,   65,   60,   67,   41,   79); delay(225);
  YMZ.setChannels( OFF,  OFF,  OFF,  OFF,  OFF,  OFF); delay(5);
  YMZ.setChannels(  65,   65,   60,   65,   41,   77); delay(227);
  YMZ.setChannels( OFF,  OFF,  OFF,  OFF,  OFF,  OFF); delay(4);
  YMZ.setChannels(  63,   63,   58,   63,   39,   75); delay(227);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(5);
  YMZ.setChannels(SKIP,   63,   58, SKIP,   39, SKIP); delay(225);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(6);
  YMZ.setChannels(SKIP,   63,   58, SKIP,   39, SKIP); delay(154);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(71);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(6);
  YMZ.setChannels(  63,   63,   58,   63,   39,   75); delay(226);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(4);
  YMZ.setChannels(SKIP,   63,   58, SKIP,   39, SKIP); delay(227);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(4);
  YMZ.setChannels(SKIP,   63,   58, SKIP,   39, SKIP); delay(155);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(72);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(5);
  YMZ.setChannels(  65,   63,   58,   65,   39,   77); delay(225);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(6);
  YMZ.setChannels(SKIP,   63,   58, SKIP,   39, SKIP); delay(153);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(72);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(5);
  YMZ.setChannels(  67,   65,   60,   67,   41,   79); delay(227);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(4);
  YMZ.setChannels(SKIP,   65,   60, SKIP,   41, SKIP); delay(227);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(5);
  YMZ.setChannels(SKIP,   65,   60, SKIP,   41, SKIP); delay(154);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(71);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(6);
  YMZ.setChannels(  69,   65,   60,   69,   41,   81); delay(225);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(5);
  YMZ.setChannels(SKIP,   65,   60, SKIP,   41, SKIP); delay(227);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(4);
  YMZ.setChannels(SKIP,   65,   60, SKIP,   41, SKIP); delay(154);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(73);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(5);
  YMZ.setChannels(  70,   65,   60,   70,   41,   82); delay(225);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(6);
  YMZ.setChannels(SKIP,   65,   60, SKIP,   41, SKIP); delay(154);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(71);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(6);
  YMZ.setChannels(  72,   65,   60,   72,   41,   84); delay(226);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(4);
  YMZ.setChannels(SKIP,   65,   60, SKIP,   41, SKIP); delay(227);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(4);
  YMZ.setChannels(SKIP,   65,   60, SKIP,   41, SKIP); delay(227);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(5);
  YMZ.setChannels(SKIP,   65,   60, SKIP,   41, SKIP); delay(225);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(6);
  YMZ.setChannels(SKIP,   65,   60, SKIP,   41, SKIP); delay(225);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(5);
  YMZ.setChannels(SKIP,   65,   60, SKIP,   41, SKIP); delay(227);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(4);
  YMZ.setChannels(SKIP,   65,   60, SKIP,   41, SKIP); delay(227);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(5);
  YMZ.setChannels(SKIP,   65,   60, SKIP,   41, SKIP); delay(225);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(6);
  YMZ.setChannels(SKIP,   62,   57, SKIP,   38, SKIP); delay(225);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(5);
  YMZ.setChannels(SKIP,   62,   57, SKIP,   38, SKIP); delay(227);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(4);
  YMZ.setChannels(SKIP,   62,   57, SKIP,   38, SKIP); delay(227);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(5);
  YMZ.setChannels(SKIP,   62,   57, SKIP,   38, SKIP); delay(225);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(6);
  YMZ.setChannels(SKIP,   62,   57, SKIP,   38, SKIP); delay(225);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(6);
  YMZ.setChannels(SKIP,   62,   57, SKIP,   38, SKIP); delay(115);
  YMZ.setChannels( OFF, SKIP, SKIP,  OFF, SKIP,  OFF); delay(111);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(4);
  YMZ.setChannels(SKIP,   62,   57, SKIP,   38, SKIP); delay(386);
  YMZ.setChannels(SKIP,  OFF,  OFF, SKIP,  OFF, SKIP); delay(4);
  
  YMZ.mute();
}


