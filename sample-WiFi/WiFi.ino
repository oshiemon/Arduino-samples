const char wifiSsid[] = "SSID";
const char wifiPass[] = "PASSWORD";

void connectWiFi() {
  WiFi.mode(WIFI_STA);
  WiFi.begin(wifiSsid, wifiPass);

  Serial.print(F("\n[WiFi] Connecting"));
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(F("."));
    delay(1000);
  }

  Serial.println(F("\n[WiFi] Connected"));
  Serial.println(F("--"));
  WiFi.printDiag(Serial);
}
