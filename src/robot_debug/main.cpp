#include <iostream>

#include <glvisualisation.h>
#include <load_texture.h>

int main()
{
  GLVisualisation visualisation;

  visualisation.init("robot debug", 16*80, 9*80);


  float width = 1.0;
  float height = 1.0;

  std::vector<std::string> textures_file_names;

  textures_file_names.push_back("background.png");
  textures_file_names.push_back("background_b.png");

  LoadTexture textures(textures_file_names);

  float theta = 0.0;

  while (1)
  {
    visualisation.start();

    visualisation.translate(0.0, 0.0, -3.0);


        visualisation.push();
          float k = 0.28;
          visualisation.translate(0.0, 0.0, 0.0);
          visualisation.paint_textured_rectangle(16.0*k, 9.0*k, textures.get()[0]);
        visualisation.pop();


        visualisation.push();
          visualisation.translate(-0.4, -0.4, 0.0);
          visualisation.paint_textured_rectangle(width, height, textures.get()[1]);
        visualisation.pop();

        visualisation.push();
          visualisation.translate(0.3, 0.3, 0.4);
          visualisation.rotate(theta, theta, 0.0);
          visualisation.set_color(1.0, 0.0, 0.0);
          visualisation.paint_cube(0.2);
        visualisation.pop();

        visualisation.print(0, 0, 0, "AAAAAA");

    visualisation.finish();

      theta+= 0.01;
  }

  std::cout << "program done\n";

  return 0;
}
