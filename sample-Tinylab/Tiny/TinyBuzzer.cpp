#if defined(ARDUINO) && ARDUINO >= 100
  #include "Arduino.h"
#else
  #include "WProgram.h"
#endif
#include "TinyBuzzer.h"

TinyBuzzer::TinyBuzzer(int pin) {
  _pin = pin;
}

void TinyBuzzer::_on() {
  analogWrite(_pin, 300);
}

void TinyBuzzer::_off() {
  analogWrite(_pin, 0);
}

void TinyBuzzer::beep(int ms) {
  _on();
  delay(ms);
  _off();
}
