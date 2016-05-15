#include <Adafruit_HMC5883_U.h>

// 位置ごとの補正値(ラジアン)をセット（http://www.magnetic-declination.com/）
const float magneticDeclination = -0.1309;

Adafruit_HMC5883_Unified mag = Adafruit_HMC5883_Unified(1);

void setup() {
  Serial.begin(115200);
  Serial.println("\nStart\n");
  
  mag.begin();
  magShowSensorDetails();
  delay(500);
}

void loop() {
  Serial.print("X: "); Serial.print(getMagneticX()); Serial.print("  ");
  Serial.print("Y: "); Serial.print(getMagneticY()); Serial.print("  ");
  Serial.print("Z: "); Serial.print(getMagneticZ()); Serial.print("  ");
  Serial.println("uT");
  
  Serial.print("Heading (degrees): "); Serial.println(getHeadingDegrees());
  
  delay(1000);
}

