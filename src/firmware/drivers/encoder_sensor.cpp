#include "encoder_sensor.h"

#include <stm32f30x_func.h>



volatile long int g_left_encoder, g_right_encoder;


EncoderSensor::EncoderSensor()
{

}

EncoderSensor::~EncoderSensor()
{

}


void EncoderSensor::init()
{
    g_left_encoder    = 0;
    g_right_encoder   = 0;

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






  /*
  //syscfg clock enable
  RCC->APB2ENR |= RCC_APB2ENR_SYSCFGEN;

  // Connect EXTI Line6 to PC6 pin
  exti_line_config(0x02, 6);

  // Connect EXTI Line12 to PC12 pin
  exti_line_config(0x02, 12);

  // Configure EXTI Line6
  configure_exti(6, EXTI_Trigger_Rising);

  // Configure EXTI Line12
  configure_exti(12, EXTI_Trigger_Rising);


  // Enable and set EXTI Line9-5 Interrupt to the lowest priority
  //nvic_init(EXTI9_5_IRQn,0x0F, 0x0F);
  nvic_init(EXTI9_5_IRQn,0x00, 0x00);

  // Enable and set EXTI Line15-10 Interrupt to the lowest priority
  //nvic_init(EXTI15_10_IRQn,0x0F, 0x0F);
  nvic_init(EXTI15_10_IRQn,0x00, 0x00);


  exti_clear_pending_bit(6);
  exti_clear_pending_bit(12);
  */


int EncoderSensor::get_left()
{
  __disable_irq();
  int tmp = g_left_encoder;
  __enable_irq();

  int res = (tmp*WHEEL_CIRCUMFERENCE)/PULSES_PER_ROTATION;
  return res;
}

int EncoderSensor::get_right()
{
  __disable_irq();
  int tmp = g_right_encoder;
  __enable_irq();

  int res = (tmp*WHEEL_CIRCUMFERENCE)/PULSES_PER_ROTATION;
  return res;
}

int EncoderSensor::get_distance()
{
  return (get_left() + get_right())/2;
}

int EncoderSensor::get_left_no_atomic()
{
  int tmp = g_left_encoder;
  int res = (tmp*WHEEL_CIRCUMFERENCE)/PULSES_PER_ROTATION;
  return res;
}

int EncoderSensor::get_right_no_atomic()
{
  int tmp = g_right_encoder;
  int res = (tmp*WHEEL_CIRCUMFERENCE)/PULSES_PER_ROTATION;
  return res;
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


	g_left_encoder+= way;


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


      g_right_encoder+= way;


    exti_clear_pending_bit(12);
}

#ifdef __cplusplus
}
#endif
