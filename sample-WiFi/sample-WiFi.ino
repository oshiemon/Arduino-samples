#include <ESP8266WiFi.h>

void connectWiFi();

void setup() {
  Serial.begin(115200);
  Serial.println("\nStart\n");

  connectWiFi();
}

void loop() {
}

