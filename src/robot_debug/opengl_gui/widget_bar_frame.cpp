#include "widget_bar_frame.h"
#include <iomanip>
#include <sstream>


WidgetBarFrame::WidgetBarFrame()
            :WidgetFrame()
{

}


WidgetBarFrame::WidgetBarFrame(GLVisualisation &visualisation_, Variables &variables_,  LoadTextures &textures_, Json::Value &params_)
            :WidgetFrame(visualisation_, variables_, textures_, params_)
{
  this->br = params["bar color"][0].asFloat();
  this->bg = params["bar color"][1].asFloat();
  this->bb = params["bar color"][2].asFloat();

  this->min = params["min value"].asFloat();
  this->max = params["max value"].asFloat();
  this->min_out = 0.0;
  this->max_out = height*0.9;

  this->k = (max_out-min_out)/(max-min);
  this->q = max_out - k*max;
}




WidgetBarFrame::WidgetBarFrame(WidgetBarFrame& other)
            :WidgetFrame(other)
{
    this->br = other.br;
    this->bg = other.bg;
    this->bb = other.bb;

    this->min = other.min;
    this->max = other.max;
    this->min_out = other.min_out;
    this->max_out = other.max_out;

    this->k = other.k;
    this->q = other.q;
}

WidgetBarFrame::WidgetBarFrame(const WidgetBarFrame& other)
            :WidgetFrame(other)
{
  this->br = other.br;
  this->bg = other.bg;
  this->bb = other.bb;

  this->min = other.min;
  this->max = other.max;
  this->min_out = other.min_out;
  this->max_out = other.max_out;

  this->k = other.k;
  this->q = other.q;
}

WidgetBarFrame::~WidgetBarFrame()
{

}




void WidgetBarFrame::render()
{
  if (m_visible)
  {
    visualisation->push();
    visualisation->translate(x, y, z);

    render_frame();

    Json::Value j_values = variables->v[params["variable"]["name"].asString()];
    unsigned int count = j_values.size();
    for (unsigned int i = 0; i < j_values.size(); i++)
    {
      float v_raw = j_values[i].asFloat();
      float value = convert(v_raw);

      float w  = width*0.9;
      float rw = w/count;
      float rh = value;


      float x_ = -width/2.0 + rw*0.9 + i*rw*1.05;
      float y_ = -rh/2.0 + height/2.0;


      visualisation->push();
        visualisation->set_color(br, bg, bb);
        visualisation->translate(x_, -y_, 0);
        visualisation->paint_rectangle(rw, rh);
      visualisation->pop();

      visualisation->push();
      std::string str;
      str = get_rounded(v_raw, 2);



      visualisation->set_color(br, bg, bb);
      visualisation->print(x_ - rw/4.0, -y_ + rh/2.0 + 0.01, 0, str, true);

      visualisation->pop();

    }



    for (unsigned int i = 0; i < widgets.size(); i++)
      widgets[i]->render();
    visualisation->pop();

  }
}


float WidgetBarFrame::convert(float value)
{
  if (value > max)
    value = max;
  if (value < min)
    value = min;

  return k*value + q;
}

std::string WidgetBarFrame::get_rounded(float value, unsigned int precision)
{
  std::stringstream stream;
  stream << std::fixed << std::setprecision(precision) << value;
  std::string str = stream.str();

  return str;
}
