#include "LedControl.h"

#define PIN_DIN  10
#define PIN_CLK  12
#define PIN_LOAD 11

LedControl lc = LedControl(PIN_DIN, PIN_CLK, PIN_LOAD, 1);  // 1 is the number of MAX72XX

void setup() {
  Serial.begin(115200); delay(100); Serial.println("\nStart\n");

  lc.shutdown(0, false);
  lc.setIntensity(0, 8);
  lc.clearDisplay(0);
}

void loop() {
  lc.setDigit(0, 0, 5, false);
  lc.setDigit(0, 1, 6, false);
  lc.setDigit(0, 2, 7, false);
  lc.setDigit(0, 3, 8, false);
  delay(2000);

  lc.setChar(0, 0, 'a', false);
  lc.setChar(0, 1, 'b', false);
  lc.setChar(0, 2, 'c', false);
  lc.setChar(0, 3, 'd', false);
  delay(2000);
}

