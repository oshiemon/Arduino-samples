//------------------------------------------------------------------------------
// VCC: 5V
//------------------------------------------------------------------------------

void initSR04(int pin_trig, int pin_echo) {
  pinMode(pin_trig, OUTPUT);
  pinMode(pin_echo, INPUT);
}

double getDistance() {
  // send signal
  digitalWrite(PIN_TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(PIN_TRIG, LOW);
  
  // receive signal
  int duration = pulseIn(PIN_ECHO, HIGH);
  double distance = 0;
  if ( duration > 0 ) {
    distance = duration * 0.017; // 0.017 = (1/2) *340 *100 *(1/1000000)
  }
  
  return distance;
}

