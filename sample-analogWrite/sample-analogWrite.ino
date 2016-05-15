#define PIN_OUT  13

void setup() {
  Serial.begin(115200);
  Serial.println("\nStart\n");
  
  pinMode(PIN_OUT, OUTPUT);
  analogWrite(PIN_OUT, 500); // 0~1023
}

void loop() {
}

