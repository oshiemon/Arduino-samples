//------------------------------------------------------------------------------
// ※7セグメントLEDと4つの赤色LEDは同じピンを共有しているため、同時に使用できない
// ※ブザーは故障中（要交換）
// 
//------------------------------------------------------------------------------
#include "Tinylab.h"

Tinylab tiny;

void setup() {
  Serial.begin(115200); delay(500); Serial.println("\nTinylab\n");
  tiny.begin();

  
}

void loop() {
  
  analogWrite(10, tiny.getVolume(255));
  Serial.println(tiny.getVolume(255));
  //tiny.lcd.print1("Volume: " + String(tiny.getVolume(255)));
  //testButtons();
  //testVolume();
  //testIlluminance();
  //testTemperature();
  //testBuzzer();  //故障中
  //test7segment();
  delay(100);
}
