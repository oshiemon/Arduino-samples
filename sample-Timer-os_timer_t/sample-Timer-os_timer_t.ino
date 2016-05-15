extern "C" {
  #include "user_interface.h"
}

os_timer_t timer;
int counter = 0;

void setup() {
  Serial.begin(115200);
  Serial.println("\nStart\n");
  
  os_timer_setfn(&timer, callback, NULL);
  os_timer_arm(&timer, 1000, true);
}

void loop() {
  Serial.println("[Loop] running");
  delay(1000);
}

void callback(void *pArg) {
  Serial.print("[Timer] "); Serial.println(counter);
  counter++;
  
  if (counter > 10) {
    Serial.println("[Timer] counter reached to 10\nExit");
    os_timer_disarm(&timer);
  }
}

