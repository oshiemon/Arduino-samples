//------------------------------------------------------------------------------
// 
// 
// 
//------------------------------------------------------------------------------
#include <Encoder.h>

Encoder myEnc(6, 7);
long oldPosition = -999;

void setup() {
  Serial.begin(115200); delay(100); Serial.println("\nStart\n");
  
}

void loop() {
  long newPosition = myEnc.read();
  if (newPosition != oldPosition) {
    oldPosition = newPosition;
    Serial.println(newPosition);
  }
}
