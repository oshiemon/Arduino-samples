#if defined(ARDUINO) && ARDUINO >= 100
  #include "Arduino.h"
#else
  #include "WProgram.h"
#endif
#include "TinyButton.h"

TinyButton::TinyButton(int btn, int pin) {
  _pin = pin;
  _btn = btn;
  
  switch (_btn) {
    case 1:
      pinMode(_pin, INPUT_PULLUP);
      break;
    case 2:
      pinMode(_pin, INPUT_PULLUP);
      break;
  }
}

bool TinyButton::state() {
  switch (_btn) {
    case 1:
      if (digitalRead(_pin) == LOW) {
        return true;
      }
      return false;
    case 2:
      if (digitalRead(_pin) == LOW) {
        return true;
      }
      return false;
    case 3:
      if (analogRead(_pin) > 190 && analogRead(_pin) < 210) {
        return true;
      }
      return false;
    case 4:
      if (analogRead(_pin) > 500 && analogRead(_pin) < 520) {
        return true;
      }
      return false;
  }
}
