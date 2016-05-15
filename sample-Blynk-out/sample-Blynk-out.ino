#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <SimpleTimer.h>

char blynkAuthToken[] = "BLYNKTOKEN";
char toSSID[] = "SSID";
char ssidPASSWD[] = "PASSWORD";

void setup() {
  Serial.begin(115200);
  Serial.println("\nStart\n");
  
  Blynk.begin(blynkAuthToken, toSSID, ssidPASSWD);

}

void loop() {
  Blynk.run();
  Blynk.virtualWrite(V1, millis() / 1000);
  delay(1000);
}

