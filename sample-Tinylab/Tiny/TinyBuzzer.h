#ifndef TinyBuzzer_h
#define TinyBuzzer_h

class TinyBuzzer
{
  public:
    TinyBuzzer(int pin = 1);
    void beep(int ms = 100);
    
  protected:
    int _pin;
    void _on();
    void _off();
};

#endif
