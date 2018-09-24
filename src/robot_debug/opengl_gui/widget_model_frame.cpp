#include "widget_model_frame.h"



WidgetModelFrame::WidgetModelFrame()
            :WidgetFrame()
{

}


WidgetModelFrame::WidgetModelFrame(GLVisualisation &visualisation_, Variables &variables_, Json::Value &params_)
            :WidgetFrame(visualisation_, variables_, params_)
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

float angle = 0.0;

void WidgetModelFrame::render()
{
  angle+= 0.1;
  if (m_visible)
  {
    visualisation->push();
    visualisation->translate(x, y, z);

    render_frame();

    visualisation->push();
      visualisation->translate(sx, sy, sz);
      visualisation->rotate(rx, ry, rz + angle);

      model.render();

    visualisation->pop();

    for (unsigned int i = 0; i < widgets.size(); i++)
      widgets[i]->render();
    visualisation->pop();
  }
}
