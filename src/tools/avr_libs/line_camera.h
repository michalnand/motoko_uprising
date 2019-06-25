#ifndef _LINE_CAMERA_H_
#define _LINE_CAMERA_H_

#include "array.h"
#include "gpio.h"

#define CAMERA_N_PIXELS ((unsigned int)128)

class LineCamera
{
  public:
    Array<uint8_t, CAMERA_N_PIXELS> pixels;

  private:
    Gpio<TGPIOC, 0, GPIO_MODE_IN_FLOATING> camera_out;   //PC0 -> ADC0
    Gpio<TGPIOC, 1, GPIO_MODE_OUT> clk;                  //PC1
    Gpio<TGPIOC, 2, GPIO_MODE_OUT> si;                   //PC2

  public:
    LineCamera();
    virtual ~LineCamera();

    void read();

  private:
    void adc_init(unsigned char ch);
    int adc_read();
    void delay_micro();
};

#endif
