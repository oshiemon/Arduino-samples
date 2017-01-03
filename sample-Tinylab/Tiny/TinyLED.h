#ifndef TinyLED_h
#define TinyLED_h

class TinyLED
{
  public:
    TinyLED(int pin);
    void on();
    void off();
    
  protected:
    int _pin;
};

#endif
