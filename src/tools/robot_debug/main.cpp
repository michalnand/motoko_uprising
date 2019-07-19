#include <iostream>


#include <opengl_gui/gl_gui.h>
#include <libs/serial_port.h>
#include <libs/json_parser.h>
#include <robot_debug.h>

#include <chrono>
#include <thread>

int main()
{
    SerialPort sp("/dev/ttyUSB0");

    //JsonConfig json("result.json");

    GLGUI gui("gui.json");


    JsonParser parser;

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


    //    debug.update(gui, json.result);

    //    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    std::cout << "program done\n";
    return 0;
}
