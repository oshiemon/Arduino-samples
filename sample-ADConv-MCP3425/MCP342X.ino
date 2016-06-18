#include  <Wire.h>
#include  <MCP342X.h>

MCP342X myADC;

void ADCInit() {
  Wire.begin();  // join I2C bus
  TWBR = 12;  // 400 kHz (maximum)
  
  while (!Serial) {}  // wait for Serial comms to become ready
  Serial.println("Starting up");
  Serial.println("Testing device connection...");
  Serial.println(myADC.testConnection() ? "MCP342X connection successful" : "MCP342X connection failed");
    
  myADC.configure( MCP342X_MODE_CONTINUOUS |
                   MCP342X_CHANNEL_1 |
                   MCP342X_SIZE_16BIT |
                   MCP342X_GAIN_1X
                 );

  Serial.println(myADC.getConfigRegShdw(), HEX);
}

int getValue() {
  static int16_t result;
  myADC.startConversion();
  myADC.getResult(&result);
  return result;
}

int getMilliVolt() {
  return getValue() * 0.062185642;
}

