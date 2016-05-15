#include <Bounce2.h>

#define PIN_BTN  13
Bounce debouncer = Bounce();

void setup() {
  Serial.begin(115200);
  Serial.println("\nStart\n");

  debouncer.attachWithInterval(PIN_BTN, INPUT_PULLUP, 10);
}

void loop() {
  debouncer.update();
  
  if ( debouncer.fell() ) {
    Serial.println("Button pushed!\n");
  }
}

