#include <embedded_libs.h>
#include <drivers/drivers.h>
#include <robot.h>

#include <diagnostic.h>

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

    Robot robot;

    if (res == 1)
        robot.mapping_enable();
    else
        robot.fast_run_enable();

    robot.main();
}
