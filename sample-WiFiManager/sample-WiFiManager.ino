#include <ESP8266WiFi.h>
#include <DNSServer.h>
#include <ESP8266WebServer.h>
#include <WiFiManager.h>

#define PIN_CONF_MODE  13  //PULLDOWN状態で起動するとConfig Modeに移行する

void connectWiFi();

void setup() {
  Serial.begin(115200);
  Serial.println("\nStart\n");
  
  connectWiFi();
}

void loop() {
  if (WiFi.status() != WL_CONNECTED) {
    Serial.print("...");
  } else {
    Serial.println("Connected");
  }
  
  delay(3000);
}

