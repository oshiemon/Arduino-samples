#define I2CPICO 0x2E

void atp_ready() {
  while(1) {
    Wire.requestFrom(I2CPICO, 1);
    if (Wire.available() > 0) {
      if (Wire.read() == '>') {
        break;
      }
    }
    delay(50);
  }
}

void atp_talk(char *msg) {
  atp_ready();
  while(*msg != 0) {
    Wire.beginTransmission(I2CPICO);
    for (int i = 0; i < 32; i++) {
      Wire.write(*msg++);
      if (*msg == 0) {
        Wire.write('\r');
        break;
      }
    }
    Wire.endTransmission();
  }
}

