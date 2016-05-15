#include <Ticker.h>

Ticker ticker;
int counter = 0;

void setup() {
  Serial.begin(115200);
  Serial.println("\nStart\n");
  
  ticker.attach(1.0, callback);  // every 1.0s
}

void loop() {
}

void callback() {
  Serial.println(counter);
  counter++;
  
  if (counter > 10) {
    Serial.println("counter reached to 10\nExit");
    ticker.detach();
  }
}

