//------------------------------------------------------------------------------
// 16チャンネル・I/O Expander（MCP23017） *I2C
// http://akizukidenshi.com/download/ds/microchip/mcp23017_mcp23s17.pdf
// 
// MCP23017  Arduino
// --------  -------
//       12    5 SCL
//       13    4 SDA
//        9       5V (1.8V～5.5V)
//       10      GND
// 15,16,17      GND (address selection)
//       18      10K (reset pin, active low)
// ------------------------------------------
// I/O #　  7  6  5  4  3  2  1  0
//      ○  8  9 10 11 12 13 14 15
//------------------------------------------------------------------------------
#include <Wire.h>
#include "Adafruit_MCP23017.h"

Adafruit_MCP23017 mcp;

void setup() {
  Serial.begin(115200); delay(100); Serial.println("\nStart\n");

  mcpInitPullUp();
  pinMode(5, OUTPUT);   // use the p13 LED as debugging
}

void loop() {
  digitalWrite(5, mcp.digitalRead(8));
  delay(10);
}

