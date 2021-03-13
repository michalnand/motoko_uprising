#ifndef _ENCODER_SENSOR_H_
#define _ENCODER_SENSOR_H_

#include <gpio.h>
#include <sensors_config.h>

#include <stdint.h>

class EncoderSensor
{
    private:
        Gpio<TGPIOC, 6, GPIO_MODE_IN_PULLUP> pin_left_encoder;
        Gpio<TGPIOC, 7, GPIO_MODE_IN_PULLUP> pin_left_encoder_b;

        Gpio<TGPIOC, 12, GPIO_MODE_IN_PULLUP> pin_right_encoder;
        Gpio<TGPIOC, 11, GPIO_MODE_IN_PULLUP> pin_right_encoder_b;

    public:
        EncoderSensor();
        virtual ~EncoderSensor();

        void init();

        int32_t get_left();
        int32_t get_right();
        int32_t get_distance();

        int32_t get_left_no_atomic();
        int32_t get_right_no_atomic();

        void print();

    public:
        static volatile int32_t left_encoder, right_encoder;
};


#endif
