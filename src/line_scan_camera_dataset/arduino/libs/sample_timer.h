#ifndef _SAMPLE_TIMER_H_
#define _SAMPLE_TIMER_H_

class SampleTimer
{
  public:
    SampleTimer(unsigned int frequency);

    bool is_event();
    void wait();
};

#endif
