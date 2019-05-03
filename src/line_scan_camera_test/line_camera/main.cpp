#include <gpio.h>
#include <terminal.h>
#include <line_camera.h>
#include <line_position.h>
#include <sample_timer.h>
#include <pid.h>

LinePostion line_position;

int main()
{
    terminal << "\n\ninit done\n";
    SampleTimer timer(50);

    while (1)
    {
        timer.wait();
        line_position.read();

        terminal << "#JSON\n";

        terminal << "{\n";
        terminal << "\"line_camera\": {\n";

        terminal << "\"pixels\": [\n";
        for (unsigned int i = 0; i < line_position.pixels.size(); i++)
        {
            terminal << (int)line_position.pixels[i];
            if (i < line_position.pixels.size()-1)
                terminal << ", ";
            else
                terminal << " ";
        }

        terminal << "]\n";
        terminal << "}\n";
        terminal << "}\n";

        terminal << "#END\n";


        terminal << "\n\n";
  }

  return 0;
}
