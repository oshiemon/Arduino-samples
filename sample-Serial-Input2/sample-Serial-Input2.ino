void setup() {
  Serial.begin(115200);
  Serial.pringln("Start.\n");
}

void loop() {
  if (Serial.available()) {
    String str = Serial.readString();
    Serial.println(str);
  }
}

