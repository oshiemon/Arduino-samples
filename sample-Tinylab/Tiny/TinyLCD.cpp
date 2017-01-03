#if defined(ARDUINO) && ARDUINO >= 100
  #include "Arduino.h"
#else
  #include "WProgram.h"
#endif
#include "TinyLCD.h"

TinyLCD::TinyLCD() : LiquidTWI2(0x20) {
}

void TinyLCD::begin() {
  LiquidTWI2::setMCPType(LTI_TYPE_MCP23008);
  LiquidTWI2::begin(LCD_COL_MAX, LCD_ROW_MAX);
  LiquidTWI2::setBacklight(HIGH);

  print1("Tinylab");
  print2("Hello!");
}

void TinyLCD::print1(float f) {
  print1(String(f));
}

void TinyLCD::print2(float f) {
  print2(String(f));
}

void TinyLCD::print1(String str) {
  LiquidTWI2::setCursor(0, 0);
  LiquidTWI2::print(str + "                ");
}

void TinyLCD::print2(String str) {
  LiquidTWI2::setCursor(0, 1);
  LiquidTWI2::print(str + "                ");
}
