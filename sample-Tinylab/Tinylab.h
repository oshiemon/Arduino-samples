#ifndef Tinylab_h
#define Tinylab_h

#include "Tiny/TinyLED.h"
#include "Tiny/TinyLCD.h"
#include "Tiny/Tiny7segment.h"
#include "Tiny/TinyBuzzer.h"
#include "Tiny/TinyButton.h"

#define PIN_BTN_1   9
#define PIN_BTN_2   8
#define PIN_BTN_3   5 // Low when pushed
#define PIN_BTN_4   5 // Hi  when pushed
#define PIN_BTN_RE  5 // Rotery Encoder Button

#define PIN_POTN  0
#define PIN_PHOT  2
#define PIN_TEMP  3
#define PIN_ENC_1 7
#define PIN_ENC_2 6
#define PIN_DCM   5
#define PIN_SD    4

class Tinylab
{
  public:
    TinyLED led1{13};
    TinyLED led2{12};
    TinyLED led3{11};
    TinyLED led4{10};

    TinyButton btn1{1, PIN_BTN_1};
    TinyButton btn2{2, PIN_BTN_2};
    TinyButton btn3{3, PIN_BTN_3};
    TinyButton btn4{4, PIN_BTN_4};
    
    TinyLCD lcd;
    Tiny7segment segLed;
    TinyBuzzer buzzer;
    
    Tinylab();
    void begin();
    
    float getTemperature();
    float getIlluminance(int max = 1000);
    int getVolume(int max = 1000);
    
  protected:
    float readMilliVolt(int pin);
};

#endif
