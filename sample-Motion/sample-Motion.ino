#define PIN_INPUT 5

void setup() {
  Serial.begin(115200); delay(50);
  Serial.println("\nStart\n");

  pinMode(PIN_INPUT, INPUT);
}

void loop() {
  Serial.println(digitalRead(PIN_INPUT));
  delay(1000);
}
