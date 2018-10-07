#include <iostream>


#include <opengl_gui/gl_gui.h>
#include <libs/serial_port.h>
#include <libs/numbers_parser.h>
#include <robot_debug.h>

int main()
{
  GLGUI gui("gui.json");

  SerialPort sp("/dev/ttyUSB0");
  NumbersParser parser;

  RobotDebug debug;

  gui.main();

  while (1)
  {
    if (sp.is_char())
    {
      parser.add(sp.get_char());

      if (parser.updated())
      {
        auto result = parser.get();

        debug.update(gui, result);
      }
    }
  }

  std::cout << "program done\n";

  return 0;
}
