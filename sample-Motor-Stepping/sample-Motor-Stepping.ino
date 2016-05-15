//------------------------------------------------------------------------------
// ＜使用環境＞
// 　　モータードライバ：DRV8835
// ステッピングモーター：2相4線バイポーラ
// 
// ＜モーター側配線＞　　　＜ドライバ配線＞
// 　　A2　A1　　　　　　5V----VM　VCC----5V
// 　　◯　◯　　　　　　　 AOUT1　MODE---5V
// 　B2　B1　　　　　　　　 AOUT2　AIN1---OUTPUT(Arduino)
// 　◯　◯　　　　　　　　 BOUT1　AIN2---OUTPUT(Arduino)
// 　　　　　　　　　　　　 BOUT2　BIN1---OUTPUT(Arduino)
// 　　　　　　　　　　　　   GND　BIN2---OUTPUT(Arduino)
//------------------------------------------------------------------------------

#include <Stepper.h>

#define PIN_A1  4
#define PIN_A2  5
#define PIN_B1 13
#define PIN_B2 12

const int stepsPerRevolution = 20;  // 20 = (360 / 18)
Stepper myStepper(stepsPerRevolution, PIN_A1, PIN_B1);

void setup() {
  setupMotor(PIN_A2, PIN_B2);
}

void loop() {
  myStepper.setSpeed(300);
  myStepper.step(20);
  myStepper.setSpeed(100);
  myStepper.step(-20);
}
