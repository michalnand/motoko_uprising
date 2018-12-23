#include <motor_controll.h>
#include <drivers.h>


MotorControll::MotorControll()
{

}

MotorControll::~MotorControll()
{

}

int MotorControll::init()
{
  motor.init();

  pid_left.init(MOTOR_CONTROLL_PID_LEFT_KP,
                MOTOR_CONTROLL_PID_LEFT_KI,
                MOTOR_CONTROLL_PID_LEFT_KD,
                1.0);

  pid_right.init(MOTOR_CONTROLL_PID_RIGHT_KP,
                 MOTOR_CONTROLL_PID_RIGHT_KI,
                 MOTOR_CONTROLL_PID_RIGHT_KD,
                 1.0);


  ml_encoder_prev = 0;
  mr_encoder_prev = 0;
  ml_encoder_now  = 0;
  mr_encoder_now  = 0;

  ml_speed        = 0;
  mr_speed        = 0;

  left_speed      = 0;
  right_speed     = 0;

  timer.add_task(this, MOTOR_CONTROLL_DT, false);

  return 0;
}

void MotorControll::set_left_speed(float left_speed)
{
  this->left_speed = left_speed;
}

void MotorControll::set_right_speed(float right_speed)
{
  this->right_speed = right_speed;
}


float MotorControll::get_speed_left()
{
  return ml_speed;
}

float MotorControll::get_speed_right()
{
  return mr_speed;
}

void MotorControll::main()
{
  float kf = 0.1;

  ml_encoder_prev = ml_encoder_now;
  mr_encoder_prev = mr_encoder_now;

  ml_encoder_now = encoder_sensor.get_left_no_atomic();
  mr_encoder_now = encoder_sensor.get_right_no_atomic();

  ml_speed = (1.0 - kf)*ml_speed + kf*(ml_encoder_now - ml_encoder_prev)/(MOTOR_CONTROLL_DT*MOTOR_CONTROLL_SPEED_MAX/1000.0);
  mr_speed = (1.0 - kf)*mr_speed + kf*(mr_encoder_now - mr_encoder_prev)/(MOTOR_CONTROLL_DT*MOTOR_CONTROLL_SPEED_MAX/1000.0);

  int ml_u = MOTOR_SPEED_MAX*pid_left.process (left_speed  - ml_speed, ml_speed);
  int mr_u = MOTOR_SPEED_MAX*pid_right.process(right_speed - mr_speed, mr_speed);

  motor.run_left(ml_u);
  motor.run_right(mr_u);
}

unsigned int MotorControll::get_dt()
{
  return MOTOR_CONTROLL_DT;
}
