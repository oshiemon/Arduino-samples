//------------------------------------------------------------------------------
//  SPS-442 のピン配置
//
//  4   5    1: GND
//           2: OUT
//  1 2 3    3: VCC (5V)
//           4: GND
//           5: GND
//
//------------------------------------------------------------------------------


#include <Easy_IRremote.h>

#define PIN_RECV  4

EasyIRremoteReceiver irRecv;

void setup() {
  Serial.begin(115200);
  irRecv.begin(PIN_RECV);
}

void loop() {
  irRecv.run();

  if (irRecv.isUpdated) {
    Serial.print("      Type:  "); Serial.println(irRecv.type);
    Serial.print("      Code:  "); Serial.println(irRecv.code);
    Serial.print("   Address:  "); Serial.println(irRecv.address);
    Serial.print("Raw Length:  "); Serial.println(irRecv.rawLength);
    Serial.print(" Raw Array:  "); Serial.println(irRecv.rawArrayInStr);
    Serial.print("  Raw Data:\n"); Serial.println(irRecv.rawData);
    Serial.println();
  }
}
