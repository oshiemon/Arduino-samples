#include <Wire.h>

void setup() {
  Serial.begin(115200);
  Wire.begin();
}

void loop() {
  if (Serial.available()) {
    String str = Serial.readString();
    str = str + "\r";
    char buf[str.length()];
    str.toCharArray(buf, str.length());
    Serial.println(buf);
    
    atp_talk(buf);
  }
}

