#include <embedded_libs.h>
#include <drivers/drivers.h>
#include <robot.h>

#include <diagnostic.h>

#include <movement.h>

int main()
{
    drivers.init();
    auto res = key.read();

    //brick_avoid_test();
    //drivers.test_imu_sensor();
    //drivers.test_line_sensor();
    //drivers.test_distance_sensor();
    //drivers.test_encoder_sensor();
    //drivers.test_motor_speed_feedback();

    //diagnostic();
    //brick_avoid_test();

    /*
    Movement movement;

    movement.init(nullptr, 0, 220, 0.8, 0.8, 0.005, 0.005,  0, 0);
    movement.process();

    movement.init(nullptr, 0, -220, 0.8, 0.8, -0.002, -0.002,  0, 0);
    movement.process();


    movement.init(nullptr, 220, 0, 0.8, 0.8, 0.005, 0.005,  0, 0);
    movement.process();

    movement.init(nullptr, -220, 0, 0.8, 0.8, -0.002, -0.002,  0, 0);
    movement.process();

    while (1)
    {
        __asm("nop");
    }
    */

    Robot robot;

    if (res == 1)
        robot.mapping_enable();
    else
        robot.fast_run_enable();

    robot.main();
}
