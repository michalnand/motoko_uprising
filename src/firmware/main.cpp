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
    BrickAvoid brick_avoid;
    brick_avoid.avoid(BRICK_AVOID_SIDE_LEFT);
    */
    Robot robot;
    robot.main();
}
