
void setup()
{
    Serial.begin(9600);
    
    sendKeyCodesBySerial(0x2D); sendKeyCodesBySerial(0x28);
    /*
    sendKeyCodesBySerial(0x10); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x11); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x12); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x13); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x14); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x15); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x16); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x17); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x18); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x19); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x1A); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x1B); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x1C); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x1D); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x1E); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x1F); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x20); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x21); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x22); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x23); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x24); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x25); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x26); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x27); sendKeyCodesBySerial(0x28);
//    sendKeyCodesBySerial(0x28); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x29); sendKeyCodesBySerial(0x28);
//    sendKeyCodesBySerial(0x2A); sendKeyCodesBySerial(0x28);
//    sendKeyCodesBySerial(0x2B); sendKeyCodesBySerial(0x28);
//    sendKeyCodesBySerial(0x2C); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x2D); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x2E); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x2F); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x30); sendKeyCodesBySerial(0x28);
//    sendKeyCodesBySerial(0x31); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x32); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x33); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x34); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x35); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x36); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x37); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x38); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x39); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x3A); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x3B); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x3C); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x3D); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x3E); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x3F); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x40); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x41); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x42); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x43); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x44); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x45); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x46); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x47); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x48); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x49); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x4A); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x4B); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x4C); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x4D); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x4E); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x4F); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x50); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x51); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x52); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x53); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x54); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x55); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x56); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x57); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x58); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x59); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x5A); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x5B); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x5C); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x5D); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x5E); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x5F); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x60); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x61); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x62); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x63); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x64); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x65); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x66); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x67); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x68); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x69); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x6A); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x6B); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x6C); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x6D); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x6E); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x6F); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x70); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x71); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x72); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x73); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x74); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x75); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x76); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x77); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x78); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x79); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x7A); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x7B); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x7C); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x7D); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x7E); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x7F); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x80); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x81); sendKeyCodesBySerial(0x28);
    */
    sendKeyCodesBySerial(0x82); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x83); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x84); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x85); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x86); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x87); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x88); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x89); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x8A); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x8B); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x8C); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x8D); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x8E); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x8F); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x90); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x91); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x92); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x93); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x94); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x95); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x96); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x97); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x98); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x99); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x9A); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x9B); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x9C); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x9D); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x9E); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0x9F); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0xA0); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0xA1); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0xA2); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0xA3); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0xA4); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0xA5); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0xA6); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0xA7); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0xA8); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0xA9); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0xAA); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0xAB); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0xAC); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0xAD); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0xAE); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0xAF); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0xB0); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0xB1); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0xB2); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0xB3); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0xB4); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0xB5); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0xB6); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0xB7); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0xB8); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0xB9); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0xBA); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0xBB); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0xBC); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0xBD); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0xBE); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0xBF); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0xC0); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0xC1); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0xC2); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0xC3); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0xC4); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0xC5); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0xC6); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0xC7); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0xC8); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0xC9); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0xCA); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0xCB); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0xCC); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0xCD); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0xCE); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0xCF); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0xD0); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0xD1); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0xD2); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0xD3); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0xD4); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0xD5); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0xD6); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0xD7); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0xD8); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0xD9); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0xDA); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0xDB); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0xDC); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0xDD); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0xDE); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0xDF); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0xE0); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0xE1); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0xE2); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0xE3); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0xE4); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0xE5); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0xE6); sendKeyCodesBySerial(0x28);
    sendKeyCodesBySerial(0xE7); sendKeyCodesBySerial(0x28);
    
    sendKeyCodesBySerial(0x2D); sendKeyCodesBySerial(0x28);
}

void loop()
{
  sendKeyCodesBySerial(0x00);
}

void sendKeyCodesBySerial(uint8_t keycode0)
{
    Serial.write(0xFD); // Raw Report Mode
    Serial.write(0x09); // Length
    Serial.write(0x01); // Descriptor 0x01=Keyboard
    Serial.write((byte)0x00); // modifier keys
    Serial.write((byte)0x00);      // reserved
    Serial.write(keycode0);  // keycode0
    Serial.write((byte)0x00);  // keycode1
    Serial.write((byte)0x00);  // keycode2
    Serial.write((byte)0x00);  // keycode3
    Serial.write((byte)0x00);  // keycode4
    Serial.write((byte)0x00);  // keycode5
    delay(100);
}

