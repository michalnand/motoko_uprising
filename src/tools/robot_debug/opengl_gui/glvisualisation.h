#ifndef _GL_VISUALISATION_H_
#define _GL_VISUALISATION_H_

#include <string>
#include <OpenGL/gl.h>

class GLVisualisation
{
  private:
    float m_time;

  public:
    GLVisualisation();
    virtual ~GLVisualisation();

    float time()
    {
      return m_time;
    }

  public:
    void init(std::string window_name = "visualisation", unsigned int window_width = 800, unsigned int window_height = 600);

    void start();
    void finish();
    void push();
    void pop();

  public:
    void translate(float x, float y, float z);
    void rotate(float angle_x, float angle_y, float angle_z);
    void set_color(float r, float g, float b);

    void paint_point();

    void paint_square(float size);
    void paint_rectangle(float width, float height);
    void paint_textured_rectangle(float width, float height, GLuint texture_id);

    void paint_line(float x0, float y0, float z0,
                    float x1, float y1, float z1);

    void paint_quad(
                      float x0, float y0, float z0, float r0, float g0, float b0,
                      float x1, float y1, float z1, float r1, float g1, float b1,
                      float x2, float y2, float z2, float r2, float g2, float b2,
                      float x3, float y3, float z3, float r3, float g3, float b3
                    );

    void paint_cube(float size);
    void paint_cuboid(float width, float height, float depth);

    void paint_circle(float size, unsigned int steps = 12);
    void paint_circle_arc(float size, float arc_length, float offset, unsigned int steps = 12);
    void paint_sphere(float size, unsigned int steps = 12);

    void print(float x, float y, float z, std::string string, bool small_font = false);
    int get_key();


};


#endif
