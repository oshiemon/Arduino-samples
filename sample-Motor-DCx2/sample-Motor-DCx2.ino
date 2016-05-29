void setup() {
  Serial.begin(115200);
  delay(50);
  Serial.println("\nStart\n");
}

void loop() {
  if (Serial.available()) {
    String str = Serial.readString();
    setSpeedR(str.toInt());
    setSpeedL(str.toInt());
  }
}
