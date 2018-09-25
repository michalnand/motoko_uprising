#include <drivers.h>


TI2C<TGPIOB, 7, 6, 10>    i2c;
Terminal                  terminal;
Timer                     timer;
IMU                       imu_sensor;
DistanceSensor            distance_sensor;
LineSensor                line_sensor;
Encoder                   encoder_sensor;
MotorControll             motor_controll;
Key                       key;

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
  terminal << "\n\n\n#####\n\n\n";
  terminal << "terminal init done\n";

  unsigned int mem_res = mem_init();
  terminal << "mem init done, heap start at " << mem_res << "\n";

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

  led = 0;

  key.init();
  terminal << "key init done\n";

  terminal << "\n\n";
  terminal << "system init done\n";


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
  terminal << "\ntest_encoder_sensor\n";

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



void Drivers::test_motor_speed_feedback()
{
  terminal << "\ntest_motor_speed_feedback\n";

  unsigned int cnt = 0;
  float required_left = 0;
  float required_right = 0;

  while (1)
  {
    led = 1;

    motor_controll.set_left_speed(required_left);
    motor_controll.set_right_speed(required_right);

    terminal << required_left << " " << motor_controll.get_speed_left() << " ";
    terminal << required_right << " " << motor_controll.get_speed_right() << "\n";

    led = 0;

    timer.delay_ms(200);

    cnt++;

    switch ((cnt/20)%4)
    {
      case 0: required_left = 0.2; required_right = 0.2; break;
      case 1: required_left = 0.3; required_right = 0.3; break;
      case 2: required_left = 0.5; required_right = 0.5; break;
      case 3: required_left = 0.8; required_right = 0.8; break;
    }
  }
}





void Drivers::test_motor_gyro_feedback()
{
  terminal << "\ntest_motor_gyro_feedback\n";

  PID pid(0.00004, 0.0, 0.0001, 1.0);

  while (1)
  {
    if (imu_sensor.ready())
    {
      led = 1;

      float angle = imu_sensor.angle.z;
      float error = 0.0 - angle;

      float turn = pid.process(error, angle);

      motor_controll.set_left_speed(-turn);
      motor_controll.set_right_speed(turn);

      // terminal << "angle " << angle << "\n";

      led = 0;
    }
  }
}


void Drivers::test_line_follower()
{
  terminal << "\ntest_line_follower\n";

  PID pid(0.4, 0.0, 1.8, 10.0);

  key.read();

  float speed      = 0.0;
  float speed_max  = 0.4;
  float speed_rise = 0.002;

  while (1)
  {
    if (line_sensor.ready())
    {
      if (line_sensor.result.on_line)
      {
        float line_position = line_sensor.result.right_line_position*1.0/line_sensor.get_max();
        float error = 0.0 - line_position;

        float turn = pid.process(error, line_position);


        float speed_left  = turn  + speed;
        float speed_right = -turn + speed;

        if (speed < speed_max)
          speed+= speed_rise;

        motor_controll.set_left_speed(speed_left);
        motor_controll.set_right_speed(speed_right);
      }
      else
      {
        motor_controll.set_left_speed(0);
        motor_controll.set_right_speed(0);
        speed = 0.0;
        pid.reset();
      }
    }
  }
}
