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

        for (unsigned int i = 0; i < line_position.pixels.size(); i+=4)
            terminal << (int)line_position.pixels[i] << " ";

        terminal << "\n\n\n";
  }

  return 0;
}
