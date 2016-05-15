#include <ESP8266WiFi.h>

void connectWiFi();
void postToIFTTT(String param1, String param2, String param3);

void setup() {
  Serial.begin(115200);
  Serial.println("\nStart\n");

  connectWiFi();
  postToIFTTT("test1", "test2", "test3");
}

void loop() {
}

