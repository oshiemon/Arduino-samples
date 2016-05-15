//------------------------------------------------------------------------------
// 電源ON
//   ESP.getResetReason(): Power on
// 
// リセットピンのショート
//   ESP.getResetReason(): External System
// 
// ESP.reset(), ESP.restart()
//   ESP.getResetReason(): Software/System restart
// 
// Deep-sleep時間復帰
//   ESP.getResetReason(): Deep-Sleep Wake
// 
//------------------------------------------------------------------------------

void setup() {
  Serial.begin(115200);
  Serial.println("\nStart\n");

  Serial.print("Boot mode: "); Serial.println(ESP.getBootMode());
  Serial.println();

  Serial.print("Reset reason: "); Serial.println(ESP.getResetReason());
  Serial.println();

  Serial.print("Reset Info: "); Serial.println(ESP.getResetInfo());
  Serial.println();

  delay(10 *1000);

  ESP.restart();
  
  ESP.reset();
  
  ESP.deepSleep(5 *1000 * 1000);
  delay(1000);
}

void loop() {
}
