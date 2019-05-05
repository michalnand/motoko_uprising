#include "sample_timer.h"
#include <avr/io.h>
#include <avr/interrupt.h>

volatile bool g_sample_timer_flag;

#define MCU_FREQ  ((uint32_t)16000000)

SampleTimer::SampleTimer(unsigned int frequency)
{
  g_sample_timer_flag = false;
  // Set the Timer Mode to CTC
  TCCR0A |= (1 << WGM01);

  // Set the value that you want to count to
  OCR0A = ((uint32_t)MCU_FREQ)/(64*frequency) - 1;
  //249;

  // set prescaler to 64 and start the timer
  TCCR0B = (1 << CS01)|(1 << CS00);

  TIMSK0 |= (1 << OCIE0A);    //Set the ISR COMPA vect

  sei();
}

bool SampleTimer::is_event()
{
  if (g_sample_timer_flag)
    return true;
  return false;
}

void SampleTimer::wait()
{
  while (is_event() != true)
    __asm("nop");
  g_sample_timer_flag = false;
}

ISR(TIMER0_COMPA_vect)
{
  g_sample_timer_flag = true;
}
