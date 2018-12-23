#include <embedded_libs.h>

#include <drivers/drivers.h>
#include <robot.h>

#include <line_following/position_control.h>


int main()
{
    drivers.init();


    key.read();

    //drivers.test_imu_sensor();
    //drivers.test_line_sensor();
    //drivers.test_distance_sensor();
    //drivers.test_encoder_sensor();
    //drivers.test_motor_speed_feedback();

    //diagnostic();

    /*
    Robot robot;

    robot.main();
    */


    int turn_distance = 150;

    PositionControll position_control;

    position_control.set_position(turn_distance, 0);
    while (position_control.is_done() != true)
    {
        position_control.process();
        timer.delay_ms(4);
    }

    position_control.stop();

    timer.delay_ms(200);


    position_control.set_position(-turn_distance, 0);
    while (position_control.is_done() != true)
    {
        position_control.process();
        timer.delay_ms(4);
    }

    position_control.stop();

    timer.delay_ms(200);



    position_control.set_position(0, turn_distance);
    while (position_control.is_done() != true)
    {
        position_control.process();
        timer.delay_ms(4);
    }

    position_control.stop();

    timer.delay_ms(200);


    position_control.set_position(0, -turn_distance);
    while (position_control.is_done() != true)
    {
        position_control.process();
        timer.delay_ms(4);
    }

    position_control.stop();

    timer.delay_ms(200);


    position_control.set_position(turn_distance/2, turn_distance/2);
    while (position_control.is_done() != true)
    {
        position_control.process();
        timer.delay_ms(4);
    }

    position_control.stop();

    timer.delay_ms(200);


    while (1)
    {

    }
}
