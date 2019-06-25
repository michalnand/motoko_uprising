#include "widget_chart_frame.h"
#include <iomanip>
#include <sstream>


WidgetChartFrame::WidgetChartFrame()
            :WidgetFrame()
{

}


WidgetChartFrame::WidgetChartFrame(GLVisualisation &visualisation_, Variables &variables_,  LoadTextures &textures_, Json::Value &params_)
            :WidgetFrame(visualisation_, variables_, textures_, params_)
{
  this->br = params["bar color"][0].asFloat();
  this->bg = params["bar color"][1].asFloat();
  this->bb = params["bar color"][2].asFloat();

  this->min = params["min value"].asFloat();
  this->max = params["max value"].asFloat();
  this->min_out = 0.0;
  this->max_out = height*0.9;

  this->show_values = params["show values"].asBool();

  this->k = (max_out-min_out)/(max-min);
  this->q = max_out - k*max;
}




WidgetChartFrame::WidgetChartFrame(WidgetChartFrame& other)
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

WidgetChartFrame::WidgetChartFrame(const WidgetChartFrame& other)
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

WidgetChartFrame::~WidgetChartFrame()
{

}




void WidgetChartFrame::render()
{
  if (m_visible)
  {
    visualisation->push();
    visualisation->translate(x, y, z);

    render_frame();

    Json::Value j_values = variables->v[params["variable"]["name"].asString()];

    for (unsigned int i = 0; i < j_values.size()-1; i++)
    {
        float x0 =  i*width/j_values.size() - width/2.0;
        float x1 =  (i+1)*width/j_values.size() - width/2.0;
        float y0 =  convert(j_values[i].asFloat()) -height/2.0;
        float y1 =  convert(j_values[i+1].asFloat()) -height/2.0;

        visualisation->push();
          visualisation->set_color(br, bg, bb);
          visualisation->paint_line(x0, y0, 0, x1, y1, 0);
        visualisation->pop();
    }

    if (show_values)
    for (unsigned int i = 0; i < j_values.size(); i++)
    {
        float x0 =  i*width/j_values.size() - width/2.0;
        float y0 =  convert(j_values[i].asFloat()) -height/2.0;

        std::string str;
        str = get_rounded(j_values[i].asFloat(), 2);

        visualisation->set_color(br, bg, bb);
        visualisation->print(x0, y0, 0, str, true);
    }


    for (unsigned int i = 0; i < widgets.size(); i++)
      widgets[i]->render();
    visualisation->pop();

  }
}


float WidgetChartFrame::convert(float value)
{
  if (value > max)
    value = max;
  if (value < min)
    value = min;

  return k*value + q;
}

std::string WidgetChartFrame::get_rounded(float value, unsigned int precision)
{
  std::stringstream stream;
  stream << std::fixed << std::setprecision(precision) << value;
  std::string str = stream.str();

  return str;
}
