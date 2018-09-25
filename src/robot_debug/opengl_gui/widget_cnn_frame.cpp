#include "widget_cnn_frame.h"



WidgetCNNFrame::WidgetCNNFrame()
            :WidgetFrame()
{

}


WidgetCNNFrame::WidgetCNNFrame(GLVisualisation &visualisation_, Variables &variables_,  LoadTextures &textures_, Json::Value &params_)
            :WidgetFrame(visualisation_, variables_, textures_, params_)
{
  this->cr = params["console color"][0].asFloat();
  this->cg = params["console color"][1].asFloat();
  this->cb = params["console color"][2].asFloat();

  this->texture_id = params["texture id"].asInt();
}


WidgetCNNFrame::WidgetCNNFrame(WidgetCNNFrame& other)
            :WidgetFrame(other)
{
    this->cr = other.cr;
    this->cg = other.cg;
    this->cb = other.cb;
}

WidgetCNNFrame::WidgetCNNFrame(const WidgetCNNFrame& other)
            :WidgetFrame(other)
{
  this->cr = other.cr;
  this->cg = other.cg;
  this->cb = other.cb;
}

WidgetCNNFrame::~WidgetCNNFrame()
{

}


void WidgetCNNFrame::render()
{
  if (m_visible)
  {
    visualisation->push();
    visualisation->translate(x, y, z);

    render_frame();


    auto value = variables->v[params["variable"]["name"].asString()];

    unsigned int w = value["input geometry"][0].asInt();
    unsigned int h = value["input geometry"][1].asInt();
    unsigned int d = value["input geometry"][2].asInt();



    std::vector<float> input(w*h*d);
    for (unsigned int i = 0; i < input.size(); i++)
      input[i] = value["input"][i].asFloat();

    unsigned int output = value["output"].asInt();

    float min = 100000000.0;
    float max = -min;

    for (unsigned int i = 0; i < input.size(); i++)
    {
      if (input[i] > max)
        max = input[i];
      if (input[i] < min)
        min = input[i];
    }

    float k = 0;
    float q = 0;

    if (max > min)
    {
      k = 1.0/(max - min);
      q = 1.0 -k*max;
    }

    for (unsigned int i = 0; i < input.size(); i++)
      input[i] = k*input[i] + q;

    visualisation->push();

    float h_size = height*0.9;
    float w_size = h_size;

    unsigned int ptr = 0;
    for (unsigned int j = 0; j < h; j++)
    {
      for (unsigned int i = 0; i < w; i++)
      {
        float cl = input[ptr];
        float x_ = i*w_size/w - w_size/2.0 + w_size/(2.0*w) - width/2.0 + 1.2*w_size/2.0;
        float y_ = j*h_size/h - h_size/2.0 + h_size/(2.0*h);
        ptr++;

        visualisation->push();
        visualisation->translate(x_, y_, 0.0);
        visualisation->set_color(cl, 0, 1.0 - cl);
        visualisation->paint_rectangle(w_size/w, h_size/h);
        visualisation->pop();
      }
    }
      visualisation->push();
        visualisation->translate(0.0, 0.0, 0.0);
        visualisation->rotate(180.0, 0.0, 0.0);

        visualisation->paint_textured_rectangle(width*0.9/3.0, height*0.9, textures->get(texture_id));
      visualisation->pop();

      visualisation->push();

      visualisation->set_color(cr, cg, cb);
      std::string str = "output   " + std::to_string(output);
      visualisation->print(width/2.0 - 0.5, 0, 0, str);

      visualisation->pop();




    for (unsigned int i = 0; i < widgets.size(); i++)
      widgets[i]->render();
    visualisation->pop();

  }
}



void WidgetCNNFrame::split(std::vector<std::string>& tokens, std::string &str, std::string &splitBy)
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
