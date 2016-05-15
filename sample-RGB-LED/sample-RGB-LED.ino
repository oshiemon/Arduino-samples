//------------------------------------------------------------------------------
// ピンは長いほうから
// Data - out (1個のみ使用なら不要)
// GND
// VDD
// Data - in
//------------------------------------------------------------------------------

#include <Adafruit_NeoPixel.h>

#define PIN_LED_C    14
#define PIN_LED_V    12

// 0~255
int brightness = 255;
int r = 255;
int g = 0;
int b = 0;

Adafruit_NeoPixel RGBLED = Adafruit_NeoPixel(1, PIN_LED_C, NEO_RGB + NEO_KHZ800);

void setup() {
  Serial.begin(115200);
  
  pinMode(PIN_LED_V, OUTPUT);
  digitalWrite(PIN_LED_V, HIGH);
  RGBLED.begin();
  RGBLED.setBrightness(brightness);
  RGBLED.setPixelColor(0, r, g, b);
  RGBLED.show();
}

void loop() {
}

