#include <drivers.h>


TI2C<TGPIOB, 7, 6, 10>    i2c;
Terminal                  terminal;
Timer                     timer;
IMU                       imu_sensor;
DistanceSensor            distance_sensor;
LineSensor                line_sensor;
Encoder                   encoder_sensor;
MotorControll             motor_controll;

Drivers::Drivers()
{

}

Drivers::~Drivers()
{

}

int Drivers::init()
{
  SystemInit();

  led = 1;

  terminal.init();
  terminal << "#####\n\n\n";
  terminal << "terminal init done\n";

  timer.init();
  terminal << "timer init done\n";

  terminal << "delay 200 ms ";
  timer.delay_ms(200);
  terminal << "done\n";

  i2c.init();
  terminal << "i2c init done\n";

  imu_sensor.init(&i2c);
  terminal << "imu init done with " << imu_sensor.present() << "\n";

/*
  distance_sensor.init();
  terminal << "distance sensor init done\n";
*/

  line_sensor.init();
  terminal << "line sensor init done\n";

  encoder_sensor.init();
  terminal << "encoder sensor init done\n";

  motor_controll.init();
  terminal << "motor controll init done\n";


  terminal << "\n\n";
  terminal << "system init done\n";

  led = 0;

  return 0;
}

void Drivers::test_imu_sensor(int count)
{
  terminal << "\test_imu_sensor\n";

  bool run = true;
  while (run)
  {
    if (imu_sensor.ready())
    {
        if (count > 0)
          count--;
        if (count == 0)
          run = false;

        led = 1;

        terminal << imu_sensor.angular_rate.x << " ";
        terminal << imu_sensor.angular_rate.y << " ";
        terminal << imu_sensor.angular_rate.z << " ";

        terminal << " : ";

        terminal << imu_sensor.acceleration.x << " ";
        terminal << imu_sensor.acceleration.y << " ";
        terminal << imu_sensor.acceleration.z << " ";

        terminal << " : ";

        terminal << imu_sensor.angle.x << " ";
        terminal << imu_sensor.angle.y << " ";
        terminal << imu_sensor.angle.z << " ";

        terminal << "\n";

        led = 0;

        timer.delay_ms(200);
    }
  }
}

void Drivers::test_distance_sensor(int count)
{
  terminal << "\test_distance_sensor\n";

  bool run = true;
  while (run)
  {
    if (distance_sensor.ready())
    {
        if (count > 0)
          count--;
        if (count == 0)
          run = false;

        led = 1;

        terminal << distance_sensor.result.left << " ";
        terminal << distance_sensor.result.front << " ";
        terminal << distance_sensor.result.right << " ";
        terminal << distance_sensor.result.front_obstacle_warning << " ";
        terminal << distance_sensor.result.front_obstacle << " ";

        terminal << "\n";

        led = 0;

        timer.delay_ms(200);
    }
  }
}


void Drivers::test_line_sensor(int count)
{
  terminal << "\ntest_line_sensor\n";

  bool run = true;

  line_sensor.on();
  while (run)
  {
    if (line_sensor.ready())
    {
        if (count > 0)
          count--;
        if (count == 0)
          run = false;

        led = 1;

        terminal << line_sensor.result.on_line << " ";
        terminal << line_sensor.result.line_type << " ";
        terminal << line_sensor.result.left_line_position << " ";
        terminal << line_sensor.result.right_line_position << " ";

        terminal << "\n";

        led = 0;

        timer.delay_ms(200);
    }
  }
  line_sensor.off();
}


void Drivers::test_encoder_sensor(int count)
{
  terminal << "\test_encoder_sensor\n";

  bool run = true;
  while (run)
  {
        if (count > 0)
          count--;
        if (count == 0)
          run = false;

        led = 1;

        terminal << encoder_sensor.get_left() << " ";
        terminal << encoder_sensor.get_right() << " ";
        terminal << encoder_sensor.get_distance() << " ";

        terminal << "\n";

        led = 0;

        timer.delay_ms(200);
  }
}
