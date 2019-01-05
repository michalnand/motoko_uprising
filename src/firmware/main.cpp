#include <embedded_libs.h>

#include <drivers/drivers.h>

#include <robot.h>

#include <line_following/position_control.h>
#include <line_following/diagnostic.h>

int main()
{
    drivers.init();
    key.read();

    //drivers.test_imu_sensor();
    //drivers.test_line_sensor();
    //drivers.test_distance_sensor();
    //drivers.test_encoder_sensor();
    //drivers.test_motor_speed_feedback();

    diagnostic();

    /*
    Robot robot;
    robot.main();
    */


    /*
    line_search.set_last_line_position(-1.0);
    line_search.main();

    timer.delay_ms(1000);
    */

    while (1)
    {

    }
}
