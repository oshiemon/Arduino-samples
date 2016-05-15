#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char blynkAuthToken[] = "BLYNKTOKEN";
char toSSID[] = "SSID";
char ssidPASSWD[] = "PASSWORD";

void setup() {
  Serial.begin(115200);
  Serial.println("\nStart\n");
  
  Blynk.begin(blynkAuthToken, toSSID, ssidPASSWD);
}

// Appからの入力でコールバックされる関数
BLYNK_WRITE(V0)
{
  String val = param.asString();
  Serial.println(val);
}

void loop() {
  Blynk.run();
}

