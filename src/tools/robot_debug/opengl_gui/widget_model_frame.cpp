#include "widget_model_frame.h"



WidgetModelFrame::WidgetModelFrame()
            :WidgetFrame()
{

}


WidgetModelFrame::WidgetModelFrame(GLVisualisation &visualisation_, Variables &variables_,  LoadTextures &textures_, Json::Value &params_)
            :WidgetFrame(visualisation_, variables_, textures_, params_)
{
  std::string obj_file_name = params["obj_file_name"].asString();
  std::string mtl_file_name = params["mtl_file_name"].asString();
  float scale = params["scale"].asFloat();

  rx = params["rotate"][0].asFloat();
  ry = params["rotate"][1].asFloat();
  rz = params["rotate"][2].asFloat();

  sx = params["shift"][0].asFloat();
  sy = params["shift"][1].asFloat();
  sz = params["shift"][2].asFloat();

  model.init(visualisation_, obj_file_name, mtl_file_name, scale);
}


WidgetModelFrame::WidgetModelFrame(WidgetModelFrame& other)
            :WidgetFrame(other)
{

}

WidgetModelFrame::WidgetModelFrame(const WidgetModelFrame& other)
            :WidgetFrame(other)
{

}

WidgetModelFrame::~WidgetModelFrame()
{

}


void WidgetModelFrame::render()
{
  if (m_visible)
  {
    visualisation->push();
    visualisation->translate(x, y, z);

    render_frame();

    float drx =  variables->v[params["variable"]["name"].asString()][0].asFloat();
    float dry =  variables->v[params["variable"]["name"].asString()][1].asFloat();
    float drz =  variables->v[params["variable"]["name"].asString()][2].asFloat();


    visualisation->push();
      visualisation->translate(sx, sy, sz);
      visualisation->rotate(ry - dry, rx - drx, rz + drz);

      model.render();

    visualisation->pop();

    for (unsigned int i = 0; i < widgets.size(); i++)
      widgets[i]->render();
    visualisation->pop();
  }
}
