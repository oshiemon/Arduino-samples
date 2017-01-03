void testLed() {
  tiny.led1.on(); delay(150); tiny.led1.off();
  tiny.led2.on(); delay(150); tiny.led2.off();
  tiny.led3.on(); delay(150); tiny.led3.off();
  tiny.led4.on(); delay(150); tiny.led4.off();
}

void testLcd() {
  // https://github.com/lincomatic/LiquidTWI2
  
  tiny.lcd.print1("Tinylab: On");
  tiny.lcd.print2("Hello!");
  
  for (int i = 0; i < 3; i++) {
    tiny.lcd.noDisplay();
    delay(500);
    tiny.lcd.display();
    delay(500);
  }
}

void test7segment() {
  tiny.segLed.print(millis()/1000);
}

void testTemperature() {
  tiny.lcd.print2("Temp: " + String(tiny.getTemperature()));
}

void testIlluminance() {
  tiny.lcd.print2("Light: " + String(tiny.getIlluminance()));
}

void testVolume() {
  tiny.lcd.print1("Volume: " + String(tiny.getVolume()));
}

void testBuzzer() {
  if (tiny.getVolume() > 0) {
    tiny.buzzer.beep();
  }
  delay(2000);
}

void testButtons() {
  
  if (tiny.btn1.state()) {
    tiny.led1.on();
  } else {
    tiny.led1.off();
  }
  
  if (tiny.btn2.state()) {
    tiny.led2.on();
  } else {
    tiny.led2.off();
  }
  
  if (tiny.btn3.state()) {
    tiny.led3.on();
  } else {
    tiny.led3.off();
  }
  
  if (tiny.btn4.state()) {
    tiny.led4.on();
  } else {
    tiny.led4.off();
  }
  
}

