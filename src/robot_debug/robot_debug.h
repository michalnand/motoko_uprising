#ifndef _ROBOT_DEBUG_H_
#define _ROBOT_DEBUG_H_

#include <vector>
#include <string>
#include <opengl_gui/gl_gui.h>


class RobotDebug
{
  private:
    std::vector<std::string> lines;

  public:
    RobotDebug();
    ~RobotDebug();

    void update(GLGUI &gui, std::vector<float> &values);
    std::string get_rounded(float value, unsigned int precision);


};

#endif
