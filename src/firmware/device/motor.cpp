#include "motor.h"

#include <device.h>

#define F_CPU           ((unsigned int)75000000)

#define PWM_FREQUENCY   15000
#define PWM_PERIOD      ((F_CPU/PWM_FREQUENCY) - 1)

Motor::Motor()
{

}

Motor::~Motor()
{

}

void Motor::init()
{
  //braking mode
  mode = 0;

  //way controll
  a_way = 0;
  b_way = 0;

  //pwm pins
  a_pwm = 0;
  b_pwm = 0;

  pwm_init();
}


void Motor::run_left(int pwm)
{
  //check way of motor
  if (pwm < 0)
  {
    b_way = 0;
    pwm = -pwm;
  }
  else
    b_way = 1;

  //saturation
  if (pwm > MOTOR_SPEED_MAX)
    pwm = MOTOR_SPEED_MAX;

  TIM1->CCR2 = (pwm*(PWM_PERIOD-1))/MOTOR_SPEED_MAX;
}

void Motor::run_right(int pwm)
{
  //check way of motor
  if (pwm < 0)
  {
    a_way = 1;
    pwm = -pwm;
  }
  else
    a_way = 0;

  //saturation
  if (pwm > MOTOR_SPEED_MAX)
    pwm = MOTOR_SPEED_MAX;

  //right motor
  TIM1->CCR1 = (pwm*(PWM_PERIOD-1))/MOTOR_SPEED_MAX;
}



void Motor::pwm_init()
{
  //alternate function
  a_pwm.set_mode(GPIO_MODE_AF);
  b_pwm.set_mode(GPIO_MODE_AF);

  //connect pins to timer 1
  a_pwm.set_af(0x06);
  b_pwm.set_af(0x06);


  RCC->APB2ENR |= RCC_APB2ENR_TIM1EN;  //timer 1 clock enable

  TIM1->CR1 = 0x00;                    //TIM_CounterMode_Up
  TIM1->ARR = PWM_PERIOD;              //set period
  TIM1->PSC = 0;                       //set the prescaler value

  TIM1->RCR = 0;  //repetition counter
  TIM1->EGR = 1;  //generate update event to reload


  TIM1->CCR1 = 0;
  TIM1->CCR2 = 0;

  TIM1->CR2 = 0x0100;     //  TIM_OCIdleState_Set
  TIM1->CCMR1 = 0x00070 | (0x00070<<8);  //  TIM_OCMode_PWM2

  //TIM_OCPolarity_Low, TIM_OutputState_Enable, TIM_OCNPolarity_High, TIM_OutputNState_Enable
  unsigned int tmp = 0x0002 | 0x0001 | 0x0000 | 0x0004;
  TIM1->CCER = tmp | (tmp <<4);

  //enable timer 1
  TIM1->CR1 |= TIM_CR1_CEN;

  //enable pwm output
  TIM1->BDTR |= TIM_BDTR_MOE;
}
