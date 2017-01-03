#ifndef TinyLCD_h
#define TinyLCD_h

#include <LiquidTWI2.h>

class TinyLCD : public LiquidTWI2
{
  public:
    TinyLCD();
    void begin();
    void print1(float f);
    void print2(float f);
    void print1(String str);
    void print2(String str);

  protected:
    int LCD_COL_MAX = 16;
    int LCD_ROW_MAX =  2;
};

#endif
