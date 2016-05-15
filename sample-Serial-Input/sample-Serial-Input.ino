void setup() {
  Serial.begin(115200);
  
}

void loop() {
  int input = Serial.read(); // ASCIIコード、入力がなければ-1
  char c = input;
  if (input != -1) {
    Serial.print(c);
  }
}

