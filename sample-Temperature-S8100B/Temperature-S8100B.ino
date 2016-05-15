//------------------------------------------------------------------------------
// ピンは文字記載面から見て左から
// 3: Vout
// 2: Vss
// 1: Vdd
// 
// 入力電圧が 5V のときの出力電圧
// -20℃: 1.908V
// +80℃: 1.095V
// 
// TOUTは最大1Vまでしか対応していないため、分圧してから取り込む
// 1MΩx2個で直接の電圧x0.4748程度→入力電圧x2.106で変換が必要
//------------------------------------------------------------------------------

const float vMultiplier = 2.106;
const float vRangeMin   = 1.095;
const float vRangeMax   = 1.908;
const int   tempMin     = -20;
const int   tempMax     =  80;

float getTemperature() {
  float input = 0;
  for (int i = 0; i < 100; i++) {
    input += analogRead(A0);
    delay(10);
  }
  input = input / 100;
  
  float v = input / 1024  *vMultiplier;
  float vIn100 = (v - vRangeMin) / (vRangeMax - vRangeMin);
  float vInRelative = vIn100 * (tempMax - tempMin);
  float temp = tempMax - vInRelative;
  return temp;
}

