//------------------------------------------------------------------------------
// 初回書き込みは通常どおりUSB接続で行う
// 2回目以降は以下の変更によりOTA更新が可能
// 
// ・ArduinoIDEを再起動
// ・モジュール側をFlash Boot Modeで起動
// ・Upload Using: "OTA"
// ・シリアルポート: "esp8266 at ***"
//------------------------------------------------------------------------------

#include <ESP8266WiFi.h>
#include <ESP8266mDNS.h>
#include <WiFiUdp.h>
#include <ArduinoOTA.h>

void connectWiFi();
void beginOTA();

void setup() {
  Serial.begin(115200);
  Serial.println("\nStart\n");

  connectWiFi();
  
  beginOTA();

}

void loop() {
  ArduinoOTA.handle();
}

