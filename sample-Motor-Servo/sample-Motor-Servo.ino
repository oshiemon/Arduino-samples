//------------------------------------------------------------------------------
// 配線：茶色 GND
// 　オレンジ VCC（4.8V）
// 　　　黄色 信号
// 
// ※SG90,SG92使用：制御角 0～180度、速度0.1秒=60度
//------------------------------------------------------------------------------

#include <Servo.h>

Servo servo;

void setup() {
  Serial.begin(115200);
  delay(100);
  Serial.println("\nStart\n");

  servo.attach(3);
  servo.write(90);
  delay(1000);
}

void loop() {
  if (Serial.available()) {
    String str = Serial.readString();
    servo.write(str.toInt());
  }
}
