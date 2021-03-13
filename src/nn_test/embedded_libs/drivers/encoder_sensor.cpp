#include "encoder_sensor.h"

#include <drivers.h>
#include <interrupts.h>


volatile int32_t EncoderSensor::left_encoder;
volatile int32_t EncoderSensor::right_encoder;


EncoderSensor::EncoderSensor()
{

}

EncoderSensor::~EncoderSensor()
{

}


void EncoderSensor::init()
{
    left_encoder    = 0;
    right_encoder   = 0;

    //syscfg clock enable
     RCC->APB2ENR |= RCC_APB2ENR_SYSCFGEN;

     // Connect EXTI Line6 to PC6 pin
     exti_line_config(0x02, 6);

     // Connect EXTI Line12 to PC12 pin
     exti_line_config(0x02, 12);

     // Configure EXTI Line6
     configure_exti(6, EXTI_Trigger_Rising_Falling);

     // Configure EXTI Line12
     configure_exti(12, EXTI_Trigger_Rising_Falling);


     // Enable and set EXTI Line9-5 Interrupt to the lowest priority
     //nvic_init(EXTI9_5_IRQn,0x0F, 0x0F);
     nvic_init(EXTI9_5_IRQn,0x00, 0x00);

     // Enable and set EXTI Line15-10 Interrupt to the lowest priority
     //nvic_init(EXTI15_10_IRQn,0x0F, 0x0F);
     nvic_init(EXTI15_10_IRQn,0x00, 0x00);


     exti_clear_pending_bit(6);
     exti_clear_pending_bit(12);
}



int32_t EncoderSensor::get_left()
{
    disable_interrupts();
    int32_t tmp = left_encoder;
    enable_interrupts();

    int32_t res = (tmp*ENCODER_SENSOR_WHEEL_CIRCUMFERENCE)/ENCODER_SENSOR_PULSES_PER_ROTATION;
    return res;
}

int32_t EncoderSensor::get_right()
{
    disable_interrupts();
    int32_t tmp = right_encoder;
    enable_interrupts();

    int32_t res = (tmp*ENCODER_SENSOR_WHEEL_CIRCUMFERENCE)/ENCODER_SENSOR_PULSES_PER_ROTATION;
    return res;
}

int32_t EncoderSensor::get_distance()
{
    return (get_left() + get_right())/2;
}

int32_t EncoderSensor::get_left_no_atomic()
{
    int32_t tmp = left_encoder;
    int32_t res = (tmp*ENCODER_SENSOR_WHEEL_CIRCUMFERENCE)/ENCODER_SENSOR_PULSES_PER_ROTATION;
    return res;
}

int32_t EncoderSensor::get_right_no_atomic()
{
    int32_t tmp = right_encoder;
    int32_t res = (tmp*ENCODER_SENSOR_WHEEL_CIRCUMFERENCE)/ENCODER_SENSOR_PULSES_PER_ROTATION;
    return res;
}


void EncoderSensor::print()
{
    terminal << "encoder_sensor " << "\n";
    terminal << "left       = " << get_left() << "\n";
    terminal << "right      = " << get_right() << "\n";
    terminal << "distance   = " << get_distance() << "\n";

    terminal << "\n";
}


#ifdef __cplusplus
extern "C" {
#endif


void EXTI9_5_IRQHandler(void)
{
    unsigned int tmp = GPIOC->IDR;

    int way;
      if ( (((tmp&(1<<6)) == 0) && ((tmp&(1<<7)) == 0)) ||
            (((tmp&(1<<6)) != 0) && ((tmp&(1<<7)) != 0)) )
       {
           way = 1;
       }
       else
       {
           way = -1;
       }


	EncoderSensor::left_encoder+= way;


    exti_clear_pending_bit(6);
}

void EXTI15_10_IRQHandler()
{
    unsigned int tmp = GPIOC->IDR;

    int way;
    if ( (((tmp&(1<<12)) == 0) && ((tmp&(1<<11)) == 0)) ||
         (((tmp&(1<<12)) != 0) && ((tmp&(1<<11)) != 0)) )
    {
           way = -1;
    }
    else
    {
            way = 1;
    }


    EncoderSensor::right_encoder+= way;


    exti_clear_pending_bit(12);
}

#ifdef __cplusplus
}
#endif
