#include <iostream>

#include <opengl_gui/gl_gui.h>

int main()
{
  GLGUI gui("gui.json");

  gui.main();

  while (1)
  {
    gui.main();

    gui.set_variable("testing label B", "asdasdasdasd");
  }
 
  JsonConfig json("gui.json");
  GLVisualisation visualisation;

  visualisation.init("robot debug", 16*80, 9*80);


  float width = 1.0;
  float height = 1.0;


  LoadTextures textures(json.result);

  float theta = 0.0;

  while (1)
  {
    visualisation.start();

    visualisation.translate(0.0, 0.0, -3.0);


        visualisation.push();
          float k = 0.28;
          visualisation.translate(0.0, 0.0, 0.0);
          visualisation.paint_textured_rectangle(16.0*k, 9.0*k, textures.get(100));
        visualisation.pop();


        visualisation.push();
          visualisation.translate(-0.4, -0.4, 0.0);
          visualisation.paint_textured_rectangle(width, height, textures.get(753));
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
