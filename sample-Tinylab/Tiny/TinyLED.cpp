#if defined(ARDUINO) && ARDUINO >= 100
  #include "Arduino.h"
#else
  #include "WProgram.h"
#endif
#include "TinyLED.h"

TinyLED::TinyLED(int pin) {
  _pin = pin;
}

void TinyLED::on() {
  pinMode(_pin, OUTPUT);
  digitalWrite(_pin, HIGH);
}

void TinyLED::off() {
  digitalWrite(_pin, LOW);
}
