//hardchord
#include "hcSPI.h"
//#include "hcShifter.h"

const byte data0 = 2;
const byte data1 = 3;
const byte data2 = 4;
const byte data3 = 5;
const byte data4 = 6;
const byte data5 = 7;
const byte data6 = 8;
const byte data7 = 9;

void setup() {
  hcGenericSPI SPI(10, MSBFIRST);
  
  Serial.begin(9600);
  
  Serial.print("Setting up Arduino pins\n");
  
  pinMode(data0, INPUT);
  pinMode(data1, INPUT);
  pinMode(data2, INPUT);
  pinMode(data3, INPUT);
  pinMode(data4, INPUT);
  pinMode(data5, INPUT);
  pinMode(data6, INPUT);
  pinMode(data7, INPUT);
  
  
  Serial.print("Writing 118 (B01110110) to shifter\n");
  SPI.write(B01110110);
  
  Serial.print("Reading state of shifter\n");
  byte val = readShifter();

  Serial.print("Shifter wrote ");
  Serial.print(val);
  Serial.print("\n");
  
}

int readShifter() {
  byte i;
  byte value;
  for(i = 0; i < 8; i++) {
    value = (value << 1) + digitalRead(2 + i);
    Serial.print("  Got ");
    Serial.print(digitalRead(2 + i));
    Serial.print(" from ");
    Serial.print(i);
    Serial.print("\n");
  }
  return(value);
}

void loop() {
  
}

