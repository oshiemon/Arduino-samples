void setup() {
  Serial.begin(115200);
  Serial.println("\nStart\n");
  
}

void loop() {
  Serial.println(getTemperature());
  delay(1000);
}

