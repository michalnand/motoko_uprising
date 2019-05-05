#include "widget_text_frame.h"



WidgetTextFrame::WidgetTextFrame()
            :WidgetFrame()
{

}


WidgetTextFrame::WidgetTextFrame(GLVisualisation &visualisation_, Variables &variables_,  LoadTextures &textures_, Json::Value &params_)
            :WidgetFrame(visualisation_, variables_, textures_, params_)
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
    std::string splitter = "\n";
    std::vector<std::string> lines;

    split(lines, value, splitter);

    for (unsigned int line = 0; line < lines.size(); line++)
    {
      float y_pos = height/2.0 - 0.08 - line*0.1;
      if (y_pos < -height/2.0)
        break;
      visualisation->print(-width/2.0 + 0.03, y_pos, 0, lines[line]);
    }

    visualisation->pop();


    for (unsigned int i = 0; i < widgets.size(); i++)
      widgets[i]->render();
    visualisation->pop();

  }
}



void WidgetTextFrame::split(std::vector<std::string>& tokens, std::string &str, std::string &splitBy)
{
    tokens.push_back(str);

    size_t splitAt;
    size_t splitLen = splitBy.size();
    std::string frag;
    while(true)
    {
        frag = tokens.back();
        splitAt = frag.find(splitBy);
        if(splitAt == std::string::npos)
        {
            break;
        }
        tokens.back() = frag.substr(0, splitAt);
        tokens.push_back(frag.substr(splitAt+splitLen, frag.size()-(splitAt+splitLen)));
    }
}
