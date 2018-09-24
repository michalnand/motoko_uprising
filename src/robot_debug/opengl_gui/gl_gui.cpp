#include "gl_gui.h"



GLGUI::GLGUI(std::string config_file_name)
{
  JsonConfig json_config(config_file_name);

  init(json_config.result);
}

GLGUI::~GLGUI()
{

}


void GLGUI::init(Json::Value &json)
{
  this->json = json;

  result_log << "\n\n\ngl gui init\n";

  width   = json["width"].asInt();
  height  = json["height"].asInt();
  background_texture = json["background_texture"].asInt();

  visualisation.init(json["window_label"].asString(), width, height);
  textures.load(json);

  widgets.init(visualisation, variables, json["widgets"]);

  time = 0.0;

  result_log << "gl gui init done\n";
}

void GLGUI::main()
{
  time+= 0.001;

  visualisation.start();
  visualisation.translate(0.0, 0.0, -3.0);

  visualisation.push();
    float k = 4.5/width;
    visualisation.translate(0.0, 0.0, -0.001);
    visualisation.paint_textured_rectangle(width*k, height*k, textures.get(background_texture));
  visualisation.pop();

  visualisation.push();
  widgets.render();
  visualisation.pop();

  visualisation.push();
    visualisation.translate(0.0, 0.0, 1.0);
    visualisation.rotate(-60.0, 0.0, time*100);

    model.render();
  visualisation.pop();

  visualisation.finish();
}

void GLGUI::set_variable(std::string name, Json::Value value)
{
  variables.v[name] = value;
}
