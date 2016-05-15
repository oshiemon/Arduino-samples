//------------------------------------------------------------------------------
// TOUT(A0)につなぐのは最大 1V まで
// 0V: 0  1V: 1023 が返ってくる
//------------------------------------------------------------------------------

void setup() {
  Serial.begin(115200);
  Serial.println("\nStart\n");

}

void loop() {
  int analogValue = analogRead(A0);
  Serial.println(analogValue);
  delay(1000);
}
