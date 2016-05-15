void setupMotor(int enablePinA, int enablePinB) {
  pinMode(enablePinA, OUTPUT);
  pinMode(enablePinB, OUTPUT);
  digitalWrite(enablePinA, HIGH);
  digitalWrite(enablePinB, HIGH);
}

