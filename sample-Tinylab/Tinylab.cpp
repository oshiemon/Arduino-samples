#if defined(ARDUINO) && ARDUINO >= 100
  #include "Arduino.h"
#else
  #include "WProgram.h"
#endif
#include "Tinylab.h"

Tinylab::Tinylab() {
}

void Tinylab::begin() {
  lcd.begin();
  segLed.begin();

  led1.off();
  led2.off();
  led3.off();
  led4.off();
}

float Tinylab::getTemperature() {
  float mv = readMilliVolt(PIN_TEMP);
  float val = mv / 10;                // LMl35: 10mV = 1C
  return val;
}

float Tinylab::getIlluminance(int max) {
  float mv = readMilliVolt(PIN_PHOT);
  int val = map(mv, 0, 5000, 0, max);
  return val;
}

int Tinylab::getVolume(int max) {
  float mv = readMilliVolt(PIN_POTN);
  int val = map(mv, 0, 5000, 0, max);
  return val;
}

float Tinylab::readMilliVolt(int pin) {
  analogRead(pin); // ADCを2個以上使った場合に値が不安定になるため1回空読みする
  float r = analogRead(pin);
  float mv = map(r, 0, 1023, 0, 5000); // convert to the range of 0-5000mV
  return mv;
}

