//------------------------------------------------------------------------------
// ピンは格子状の面から見て左から
// 1: VCC (3.5V~5.5V)
// 2: I/O
// 3: N/C
// 4: GND
//------------------------------------------------------------------------------

#include "DHT.h"

#define PIN_DHT  4

DHT dht(PIN_DHT, DHT11);

void setup() {
  Serial.begin(115200);
  Serial.println("\nStart\n");

  dht.begin();
}

void loop() {
  float h = dht.readHumidity();
  float t = dht.readTemperature();

  if (isnan(h) || isnan(t)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  float hic = dht.computeHeatIndex(t, h, false);

  Serial.print("Temperature: "); Serial.print(t);   Serial.println("*C");
  Serial.print("   Humidity: "); Serial.print(h);   Serial.println("%");
  Serial.print(" Heat index: "); Serial.print(hic); Serial.println("*C");
  Serial.println();

  delay(2000); // DHT11は反応が遅いためこのくらいで充分
}
