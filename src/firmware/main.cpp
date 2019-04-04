#include <embedded_libs.h>

#include <drivers/drivers.h>

#include <robot.h>

#include <line_following/position_control.h>
#include <line_following/diagnostic.h>

#include <line_following/LineNetwork/LineNetwork.h>

#include <network_speed_test.h>

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
    BrickAvoid brick_avoid;
    brick_avoid.avoid(BRICK_AVOID_SIDE_LEFT);
    */

    /*
    while (1)
    {
        if (line_sensor.ready())
        {
            if (line_sensor.result.on_line)
            {
                terminal << line_sensor.result.line_type << " " << line_sensor.result.left_line_position << " " << line_sensor.result.spot_line_position << "\n";
            }
        }

        timer.delay_ms(100);
    }
    */

    Robot robot;
    robot.main();
}
