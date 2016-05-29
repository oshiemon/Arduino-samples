#define M1_1  4
#define M1_2  5
#define M2_1 12
#define M2_2 14

void setSpeedR(int speed) {
  if (speed > 0) {
    analogWrite(M1_1, speed);
    analogWrite(M1_2, 0);
  }
  else {
    analogWrite(M1_1, 0);
    analogWrite(M1_2, abs(speed));
  }
}

void setSpeedL(int speed) {
  if (speed > 0) {
    analogWrite(M2_1, speed);
    analogWrite(M2_2, 0);
  }
  else {
    analogWrite(M2_1, 0);
    analogWrite(M2_2, abs(speed));
  }
}

