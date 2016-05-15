//------------------------------------------------------------------------------
// VCC: 5V
//------------------------------------------------------------------------------

#define PIN_TRIG  4
#define PIN_ECHO  5

void setup() {
  Serial.begin(115200);
  Serial.println("\nStart\n");
  
  initSR04(PIN_TRIG, PIN_ECHO);
}

void loop() {
  Serial.println(getDistance());
  delay(500);
}


