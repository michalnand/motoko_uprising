#include <gpio.h>
#include <terminal.h>
#include <i2c.h>
#include <vl53l0x.h>
#include <sample_timer.h>


int main()
{
    terminal << "\n\nstarting\n";

    TI2C<TGPIOC, 4, 5, 2> i2c;
    VL53L0X laser;
    int init_res = laser.init(&i2c);

    terminal << "init done with " << init_res << "\n";


    terminal << "main loop\n";

    while (1)
    {
        laser.read_single_shot();
        terminal << "laser result " << laser.get() << "\n";
    }

  return 0;
}
