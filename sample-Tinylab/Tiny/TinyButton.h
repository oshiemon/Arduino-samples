#ifndef TinyButton_h
#define TinyButton_h

class TinyButton
{
  public:
    TinyButton(int btn, int pin);
    bool state();
    
  protected:
    int _pin;
    int _btn;
};

#endif
