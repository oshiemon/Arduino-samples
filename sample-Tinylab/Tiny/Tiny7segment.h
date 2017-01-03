#ifndef Tiny7segment_h
#define Tiny7segment_h

#include "LedControl.h"

class Tiny7segment : public LedControl
{
  public:
    Tiny7segment(int PIN_DIN = 10, int PIN_CLK = 12, int PIN_LOAD = 11);
    void begin();
    void print(long n);
    void print(String str);
    
  protected:
    
};

#endif
