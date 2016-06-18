//------------------------------------------------------------------------------
// 16チャンネル・アナログマルチプレクサ（CD74HC4067）
// ※ユーザーサイト：http://bildr.org/2011/02/cd74hc4067-arduino/
// 
// S0～S3を4桁の2進数としてC0～C15のどれとSIGを接続するかコントロールする
//------------------------------------------------------------------------------

#define PIN_SIG  0 //analog
#define PIN_S_0  2
#define PIN_S_1  3
#define PIN_S_2  4
#define PIN_S_3  5

void setup() {
  Serial.begin(115200); delay(100); Serial.println("\nStart\n");

  initMux();
}

void loop() {
  int val = readMux(0);
  Serial.println(val);
  delay(2000);
}

