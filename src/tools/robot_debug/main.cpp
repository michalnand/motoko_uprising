#include <iostream>


#include <opengl_gui/gl_gui.h>
#include <libs/serial_port.h>
#include <libs/json_parser.h>
#include <line_camera_dataset.h>

#include <chrono>
#include <thread>

int main()
{
    SerialPort sp_robot("/dev/ttyUSB1", B115200);
    SerialPort sp_camera("/dev/ttyUSB0", B57600);

    std::cout << "serial port ready";
    //JsonConfig json("result.json");

    GLGUI gui("gui.json");



    JsonParser parser_robot;
    JsonParser parser_camera;

    LineCameraDataset line_camera_dataset;

    gui.main();

    unsigned int file_idx = 0;
    while (1)
    {

        if (sp_robot.is_char())
        {
            parser_robot.add(sp_robot.get_char());
        }

        if (sp_camera.is_char())
        {
            parser_camera.add(sp_camera.get_char());
        }

        if (parser_robot.updated())
        {
            auto result = parser_robot.get();
            line_camera_dataset.update_sensors(gui, result);
        }

        if (parser_camera.updated())
        {
            auto result = parser_camera.get();
            line_camera_dataset.update_camera(gui, result);

            std::string file_name = "/home/michal/dataset/line_scan_camera/bad_light/" + std::to_string(file_idx) + ".json";
            file_idx++;
            line_camera_dataset.save_result(file_name);
        }
    }


    std::cout << "program done\n";
    return 0;
}
