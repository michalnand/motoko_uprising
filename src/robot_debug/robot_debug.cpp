#include "robot_debug.h"
#include <iostream>
#include <iomanip>
#include <sstream>

RobotDebug::RobotDebug()
{

}

RobotDebug::~RobotDebug()
{

}

void RobotDebug::update(GLGUI &gui, std::vector<float> &values)
{
  if (values.size() != (17 + 64 + 1))
    return;


  std::string str;
  for (unsigned int i = 0; i < values.size(); i++)
  {
    if ((i+1)%16 == 0)
      str+="\n";
    str+= get_rounded(values[i], 0) + " ";
  }

  gui.set_variable("console output", str);


  Json::Value line_sensors;
  for (unsigned int i = 0; i < 8; i++)
    line_sensors[i] = values[2 + 7-i];
  gui.set_variable("line sensors", line_sensors);

  Json::Value angles;
  angles[0] = values[11]*90.0/35000.0;
  angles[1] = -values[10]*90.0/35000.0;
  angles[2] = values[12]*90.0/35000.0;

  gui.set_variable("imu angles", angles);


  std::string motors;

  motors+= "left distance  = " + get_rounded(values[13], 0) + "[mm]\n";
  motors+= "left speed     = " + get_rounded(values[15], 4) + "\n";
  motors+= "right distance = " + get_rounded(values[14], 0) + "[mm]\n";
  motors+= "left speed     = " + get_rounded(values[16], 4) + "\n";
  Json::Value j_motors = motors;

  gui.set_variable("motors output", j_motors);

  Json::Value nn_values;

  nn_values["input geometry"][0] = 8;
  nn_values["input geometry"][1] = 8;
  nn_values["input geometry"][2] = 1;

  for (unsigned int i = 0; i < 64; i++)
  {
    nn_values["input"][i] = values[17 + i];
  }

  nn_values["output"] = values[17 + 64 + 1 - 1];


  gui.set_variable("network io", nn_values);


  gui.main();
}

std::string RobotDebug::get_rounded(float value, unsigned int precision)
{
  std::stringstream stream;
  stream << std::fixed << std::setprecision(precision) << value;
  std::string str = stream.str();

  return str;
}
