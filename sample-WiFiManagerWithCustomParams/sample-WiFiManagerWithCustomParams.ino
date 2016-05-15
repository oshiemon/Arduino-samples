#include <FS.h>
#include <ESP8266WiFi.h>
#include <DNSServer.h>
#include <ESP8266WebServer.h>
#include <WiFiManager.h>
#include <ArduinoJson.h>

#define PIN_CONF_MODE  13  //PULLDOWN状態で起動するとConfig Modeに移行する
char param1[80];
char param2[80];
char param3[80];
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
    Serial.print("\nConnected: "); Serial.println(millis()/1000);
    Serial.print("p1: "); Serial.println(param1);
    Serial.print("p2: "); Serial.println(param2);
    Serial.print("p3: "); Serial.println(param3);
  }
  
  delay(3000);
}

