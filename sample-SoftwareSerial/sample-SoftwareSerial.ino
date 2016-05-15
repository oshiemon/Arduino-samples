#include <SoftwareSerial.h>

SoftwareSerial softSerial(0,1);

void setup() {
  Serial.begin(115200);
  softSerial.begin(115200);
}

void loop() {
  Serial.println("default serial...");
  softSerial.println("software serial...");
  delay(1000);
}
