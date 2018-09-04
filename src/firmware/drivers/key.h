#ifndef _KEY_H_
#define _KEY_H_

#include <tgpio.h>
#include <thread.h>

//output for LED
#define LED_GPIO                    TGPIOB
#define LED_PIN                     15

//key input
#define KEY_GPIO                    TGPIOB
#define KEY_PIN                     12

class Key: public Thread
{
  private:
    TGpio<KEY_GPIO, KEY_PIN, GPIO_MODE_IN_PULLUP> key;  //user button
    TGpio<LED_GPIO, LED_PIN, GPIO_MODE_OUT> led;        //user led

    unsigned char led_state;
    int timer_id;

    int result;

  public:
    Key();
    ~Key();

    int read();

    void main();

    int get_result();
};


#endif
