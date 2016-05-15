#include <ST7032.h>

ST7032 lcd;

void setup() {
  Serial.begin(115200);
  
  lcd.begin(16, 2);
  lcd.setContrast5V();
  
  lcd.print("hello, world!");
}

void loop() {
  lcd.setCursor(0, 1); // position 0 on line 1
  lcd.print(millis()/1000);
}

