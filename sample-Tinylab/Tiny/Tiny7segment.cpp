#if defined(ARDUINO) && ARDUINO >= 100
  #include "Arduino.h"
#else
  #include "WProgram.h"
#endif
#include "Tiny7segment.h"

Tiny7segment::Tiny7segment(int PIN_DIN, int PIN_CLK, int PIN_LOAD) : LedControl(PIN_DIN, PIN_CLK, PIN_LOAD, 1) {
}

void Tiny7segment::begin() {
  LedControl::shutdown(0, false);
  LedControl::setIntensity(0, 8);
  LedControl::clearDisplay(0);
}

void Tiny7segment::print(long n) {
  print(String(n));
}

void Tiny7segment::print(String str) {
  
  LedControl::clearDisplay(0);

  if (str.length() > 4) {
    str = str.substring(str.length()-4);
  }

  int digit = 0;
  for (int i = 0; i < 4; i++) {
    if ( 4 - i > str.length() ) {
      continue;
    }
    char buff[2];
    str.substring(digit, digit+1).toCharArray(buff, 2);
    digit++;
    
    LedControl::setChar(0, i, buff[0], false);
  }
}

