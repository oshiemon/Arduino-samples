void setup() {
  Serial.begin(115200);
  Serial.println("\nStart\n");

}

void loop() {
  int analogValue = analogRead(A0);
  Serial.println(analogValue);
  delay(1000);
}
