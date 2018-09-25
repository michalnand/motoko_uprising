#include <iostream>

#include <opengl_gui/gl_gui.h>
#include <libs/serial_port.h>
#include <libs/numbers_parser.h>

std::string get_rounded(float value, unsigned int precision)
{
  std::stringstream stream;
  stream << std::fixed << std::setprecision(precision) << value;
  std::string str = stream.str();

  return str;
}

void update(GLGUI &gui, std::vector<float> &values)
{
  if (values.size() != 17)
    return;

  for (unsigned int i = 0; i < values.size(); i++)
    printf("%6.3f ", values[i]);
  printf("\n" );


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

  motors+= "left distance  = " + std::to_string(values[13]) + "[mm]\n";
  motors+= "left speed     = " + std::to_string(values[15]) + "\n";
  motors+= "right distance = " + std::to_string(values[14]) + "[mm]\n";
  motors+= "left speed     = " + std::to_string(values[16]) + "\n";
  Json::Value j_motors = motors;

  gui.set_variable("motors output", j_motors);
  gui.main();
}

int main()
{
  GLGUI gui("gui.json");

  SerialPort sp("/dev/ttyUSB0");
  NumbersParser parser;

  while (1)
  {
    if (sp.is_char())
    {
      parser.add(sp.get_char());

      if (parser.updated())
      {
        auto result = parser.get();

        update(gui, result);
      }
    }
  }

  std::cout << "program done\n";

  return 0;
}
