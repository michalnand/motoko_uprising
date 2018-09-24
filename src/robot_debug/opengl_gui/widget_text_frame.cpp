#include "widget_text_frame.h"



WidgetTextFrame::WidgetTextFrame()
            :WidgetFrame()
{

}


WidgetTextFrame::WidgetTextFrame(GLVisualisation &visualisation_, Variables &variables_, Json::Value &params_)
            :WidgetFrame(visualisation_, variables_, params_)
{
  this->cr = params["console color"][0].asFloat();
  this->cg = params["console color"][1].asFloat();
  this->cb = params["console color"][2].asFloat();
}
 

WidgetTextFrame::WidgetTextFrame(WidgetTextFrame& other)
            :WidgetFrame(other)
{
    this->cr = other.cr;
    this->cg = other.cg;
    this->cb = other.cb;
}

WidgetTextFrame::WidgetTextFrame(const WidgetTextFrame& other)
            :WidgetFrame(other)
{
  this->cr = other.cr;
  this->cg = other.cg;
  this->cb = other.cb;
}

WidgetTextFrame::~WidgetTextFrame()
{

}


void WidgetTextFrame::render()
{
  if (m_visible)
  {
    visualisation->push();
    visualisation->translate(x, y, z);

    render_frame();

    visualisation->push();

    visualisation->set_color(cr, cg, cb);

    std::string value = variables->v[params["variable"]["name"].asString()].asString();
    visualisation->print(-width/2.0 + 0.03, +height/2.0 - 0.08, 0, value);

    visualisation->pop();


    for (unsigned int i = 0; i < widgets.size(); i++)
      widgets[i]->render();
    visualisation->pop();

  }
}
