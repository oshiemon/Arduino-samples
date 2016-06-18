int muxChannel[16][4] = {
  {0, 0, 0, 0}, //channel 0
  {1, 0, 0, 0}, //channel 1
  {0, 1, 0, 0}, //channel 2
  {1, 1, 0, 0}, //channel 3
  {0, 0, 1, 0}, //channel 4
  {1, 0, 1, 0}, //channel 5
  {0, 1, 1, 0}, //channel 6
  {1, 1, 1, 0}, //channel 7
  {0, 0, 0, 1}, //channel 8
  {1, 0, 0, 1}, //channel 9
  {0, 1, 0, 1}, //channel 10
  {1, 1, 0, 1}, //channel 11
  {0, 0, 1, 1}, //channel 12
  {1, 0, 1, 1}, //channel 13
  {0, 1, 1, 1}, //channel 14
  {1, 1, 1, 1}  //channel 15
};

int initMux() {
  pinMode(PIN_S_0, OUTPUT);
  pinMode(PIN_S_1, OUTPUT);
  pinMode(PIN_S_2, OUTPUT);
  pinMode(PIN_S_3, OUTPUT);
  digitalWrite(PIN_S_0, LOW);
  digitalWrite(PIN_S_1, LOW);
  digitalWrite(PIN_S_2, LOW);
  digitalWrite(PIN_S_3, LOW);
}

int readMux(int channel) {
  int controlPin[] = {PIN_S_0, PIN_S_1, PIN_S_2, PIN_S_3};
  for (int i = 0; i < 4; i ++) {
    digitalWrite(controlPin[i], muxChannel[channel][i]);
  }
  int val = analogRead(PIN_SIG);
  return val;
}

