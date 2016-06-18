//------------------------------------------------------------------------------
// ADコンバータ MCP3425
// 
// 白い点を左下に置いて　VIN- VDD SDA =A4に接続
// 　　　　　　　　　　　VIN+ VSS SCL =A5に接続
// VDD: 2.7V～5.5V
// VIN: ～2
//------------------------------------------------------------------------------

void setup() {
  Serial.begin(115200); delay(100); Serial.println("\nStart\n");

  ADCInit();
}

void loop() {
  int16_t val = getMilliVolt();
  Serial.println(val);
  delay(1000);
}
