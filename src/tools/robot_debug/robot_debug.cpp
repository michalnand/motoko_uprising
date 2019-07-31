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

void RobotDebug::update(GLGUI &gui, Json::Value &json)
{
    Json::Value line_sensors;
    for (unsigned int i = 0; i < json["line_sensor"]["adc_result"].size(); i++)
        line_sensors[i] = json["line_sensor"]["adc_result"][i];
    gui.set_variable("line sensors", line_sensors);

    Json::Value angles;
    angles[0] =  json["imu_sensor"]["angle"][0].asFloat()*(+0.1);
    angles[1] =  json["imu_sensor"]["angle"][1].asFloat()*(-0.1);
    angles[2] =  json["imu_sensor"]["angle"][2].asFloat()*(+0.1);

    gui.set_variable("imu angles", angles);


 
    Json::Value distance_sensors;
    distance_sensors[0] =  (rand()%1000)/1000.0;
    distance_sensors[1] =  (rand()%1000)/1000.0;
    distance_sensors[2] =  (rand()%1000)/1000.0;


    distance_sensors[0] =  json["distance_sensor"]["right"].asFloat();
    distance_sensors[1] =  json["distance_sensor"]["front"].asFloat();
    distance_sensors[2] =  json["distance_sensor"]["left"].asFloat();


    gui.set_variable("distance sensors", distance_sensors);


    std::string line_position;

    line_position+= "line_sensor = " + std::to_string(json["line_sensor"]["on_line"].asInt()) + "\n";
    line_position+= "line_type   = " + std::to_string(json["line_sensor"]["line_type"].asInt()) + "\n";
    line_position+= "on_line_count = " + std::to_string(json["line_sensor"]["on_line_count"].asInt()) + "\n";
    line_position+= "center_line_position = " + get_rounded(json["line_sensor"]["center_line_position"].asFloat(), 2) + "\n";
    line_position+= "left_line_position = " + get_rounded(json["line_sensor"]["left_line_position"].asFloat(), 2) + "\n";
    line_position+= "right_line_position = " + get_rounded(json["line_sensor"]["right_line_position"].asFloat(), 2) + "\n";
    line_position+= "average = " + std::to_string(json["line_sensor"]["average"].asInt()) + "\n";


    Json::Value j_line_position = line_position;


    gui.set_variable("line position", j_line_position);


    std::string motors;

    motors+= "left distance  = " + get_rounded(json["motor_controll"]["left_encoder"].asFloat(), 0) + "[mm]\n";
    motors+= "left speed     = " + get_rounded(json["motor_controll"]["left_speed"].asFloat(), 4) + "\n";
    motors+= "right distance = " + get_rounded(json["motor_controll"]["right_encoder"].asFloat(), 0) + "[mm]\n";
    motors+= "right speed     = " + get_rounded(json["motor_controll"]["right_speed"].asFloat(), 4) + "\n";
    Json::Value j_motors = motors;


    gui.set_variable("motors output", j_motors);


    Json::Value nn_values;

    nn_values["input geometry"][0] = 8;
    nn_values["input geometry"][1] = 8;
    nn_values["input geometry"][2] = 1;

    nn_values["input"]  = json["neural_network"]["input"];
    nn_values["output"] = json["neural_network"]["output"];


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
