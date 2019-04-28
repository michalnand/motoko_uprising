#include "glvisualisation.h"


#include <stdio.h>
#include <X11/X.h>
#include <X11/Xlib.h>
#include <GL/gl.h>
#include <GL/glx.h>
#include <GL/glu.h>
#include <GL/freeglut.h>
#include <GL/glut.h>
#include <GL/glext.h>

#include <math.h>

bool  g_rl_visualisation_gl_init_done = false;
int   g_rl_visualisation_window_handle = -1;
int   g_rl_visualisation_key = -1;


void GLVisualisation_keyboard_handler(unsigned char Key, int x, int y)
{
  (void)Key;
  (void)x;
  (void)y;
  if (g_rl_visualisation_key == -1)
  {
    g_rl_visualisation_key = Key;
  }
}

GLVisualisation::GLVisualisation()
{
  m_time = 0.0;
}

GLVisualisation::~GLVisualisation()
{

}


void GLVisualisation::init(std::string window_name, unsigned int window_width, unsigned int window_height)
{
  if (g_rl_visualisation_gl_init_done == false)
  {
    int num = 0;

    glutInit(&num, NULL);

    glutInitWindowSize(window_width, window_height);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
    glutKeyboardFunc(GLVisualisation_keyboard_handler);

    g_rl_visualisation_window_handle = glutCreateWindow(window_name.c_str());


    glViewport(0, 0, window_width, window_height);
    glMatrixMode(GL_PROJECTION);
    glEnable(GL_DEPTH_TEST);
    gluPerspective(45, (float) window_width / window_height, 0.1, 2000);
    glMatrixMode(GL_MODELVIEW);

    g_rl_visualisation_gl_init_done = true;
  }
}

void GLVisualisation::start()
{
  if (g_rl_visualisation_gl_init_done == false)
    init("visualisation window");

  glMatrixMode(GL_PROJECTION);
  glShadeModel(GL_SMOOTH);
  glEnable(GL_DEPTH_TEST);
  glMatrixMode(GL_MODELVIEW);

  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
  glLoadIdentity();

  glEnable(GL_DEPTH_TEST);
  glDepthFunc(GL_LEQUAL);

  glMatrixMode(GL_MODELVIEW);

  glClearColor(0.0, 0.0, 0.0, 0.0);
}

void GLVisualisation::finish()
{
  glutSwapBuffers();
  m_time+= 0.001;
}

void GLVisualisation::push()
{
  glPushMatrix();
}

void GLVisualisation::pop()
{
  glPopMatrix();
}



void GLVisualisation::translate(float x, float y, float z)
{
  glTranslatef(x, y, z);
}

void GLVisualisation::rotate(float angle_x, float angle_y, float angle_z)
{
  glRotatef(angle_x, 1.0, 0.0, 0.0);
  glRotatef(angle_y, 0.0, 1.0, 0.0);
  glRotatef(angle_z, 0.0, 0.0, 1.0);
}

void GLVisualisation::set_color(float r, float g, float b)
{
  glColor3f(r, g, b);
}

void GLVisualisation::paint_point()
{
  glBegin(GL_POINTS);

  glVertex3f(0.0, 0.0, 0.0);

  glEnd();
}


void GLVisualisation::paint_square(float size)
{
  glBegin(GL_QUADS);

  glVertex3f( + size/2.0,  + size/2.0, 0.0);
  glVertex3f( - size/2.0,  + size/2.0, 0.0);
  glVertex3f( - size/2.0,  - size/2.0, 0.0);
  glVertex3f( + size/2.0,  - size/2.0, 0.0);

  glEnd();
}

void GLVisualisation::paint_rectangle(float width, float height)
{
  glBegin(GL_QUADS);

  glVertex3f( + width/2.0,  + height/2.0, 0.0);
  glVertex3f( - width/2.0,  + height/2.0, 0.0);
  glVertex3f( - width/2.0,  - height/2.0, 0.0);
  glVertex3f( + width/2.0,  - height/2.0, 0.0);

  glEnd();
}

void GLVisualisation::paint_textured_rectangle(float width, float height, GLuint texture_id)
{
  glActiveTexture(GL_TEXTURE0);
  glEnable(GL_TEXTURE_2D);
  glBindTexture(GL_TEXTURE_2D, texture_id);

  glColor3f(1.0, 1.0, 1.0);

  glBegin(GL_QUADS);
  glNormal3f(0.0, 0.0, 1.0);

  glTexCoord2d(1, 1); glVertex3f(width/2.0, height/2.0, 0.0);
  glTexCoord2d(1, 0); glVertex3f(width/2.0, -height/2.0, 0.0);
  glTexCoord2d(0, 0); glVertex3f(-width/2.0, -height/2.0, 0.0);
  glTexCoord2d(0, 1); glVertex3f(-width/2.0, height/2.0, 0.0);

  glEnd();

  glDisable(GL_TEXTURE_2D);
}

void GLVisualisation::paint_line( float x0, float y0, float z0,
                                  float x1, float y1, float z1)
{
  glBegin(GL_LINES);
  glVertex3f( x0, y0, z0);
  glVertex3f( x1, y1, z1);
  glEnd();
}


void GLVisualisation::paint_quad(
                  float x0, float y0, float z0, float r0, float g0, float b0,
                  float x1, float y1, float z1, float r1, float g1, float b1,
                  float x2, float y2, float z2, float r2, float g2, float b2,
                  float x3, float y3, float z3, float r3, float g3, float b3
                )
{
  glBegin(GL_QUADS);

  glColor3f(r0, g0, b0);  glVertex3f(x0, y0, z0);
  glColor3f(r1, g1, b1);  glVertex3f(x1, y1, z1);
  glColor3f(r2, g2, b2);  glVertex3f(x2, y2, z2);
  glColor3f(r3, g3, b3);  glVertex3f(x3, y3, z3);

  glEnd();
}

void GLVisualisation::paint_cube(float size)
{
  float a = size/2.0;
  glBegin(GL_QUADS);                // Begin drawing the color cube with 6 quads
        // Top face (y = 1.0f)
        // Define vertices in counter-clockwise (CCW) order with normal pointing out
        glVertex3f( a, a, -a);
        glVertex3f(-a, a, -a);
        glVertex3f(-a, a,  a);
        glVertex3f( a, a,  a);

        // Bottom face (y = -a)
        glVertex3f( a, -a,  a);
        glVertex3f(-a, -a,  a);
        glVertex3f(-a, -a, -a);
        glVertex3f( a, -a, -a);

        // Front face  (z = a)
        glVertex3f( a,  a, a);
        glVertex3f(-a,  a, a);
        glVertex3f(-a, -a, a);
        glVertex3f( a, -a, a);

        // Back face (z = -a)
        glVertex3f( a, -a, -a);
        glVertex3f(-a, -a, -a);
        glVertex3f(-a,  a, -a);
        glVertex3f( a,  a, -a);

        // Left face (x = -a)
        glVertex3f(-a,  a,  a);
        glVertex3f(-a,  a, -a);
        glVertex3f(-a, -a, -a);
        glVertex3f(-a, -a,  a);

        // Right face (x = a)

        glVertex3f(a,  a, -a);
        glVertex3f(a,  a,  a);
        glVertex3f(a, -a,  a);
        glVertex3f(a, -a, -a);
     glEnd();
}



void GLVisualisation::paint_cuboid(float width, float height, float depth)
{

  float w = width/2.0;
  float h = height/2.0;
  float d = depth/2.0;

  glBegin(GL_QUADS);                // Begin drawing the color cube with 6 quads
        // Top face (y = 1.0f)
        // Define vertices in counter-clockwise (CCW) order with normal pointing out
        //
        glVertex3f( w, h, -d);
        glVertex3f(-w, h, -d);
        glVertex3f(-w, h,  d);
        glVertex3f( w, h,  d);

        // Bottom face (y = -a)
        glVertex3f( w, -h,  d);
        glVertex3f(-w, -h,  d);
        glVertex3f(-w, -h, -d);
        glVertex3f( w, -h, -d);


        // Front face  (z = a)
        glVertex3f( w,  h, d);
        glVertex3f(-w,  h, d);
        glVertex3f(-w, -h, d);
        glVertex3f( w, -h, d);

        // Back face (z = -a)
        glVertex3f( w, -h, -d);
        glVertex3f(-w, -h, -d);
        glVertex3f(-w,  h, -d);
        glVertex3f( w,  h, -d);


        // Left face (x = -a)
        glVertex3f(-w,  h,  d);
        glVertex3f(-w,  h, -d);
        glVertex3f(-w, -h, -d);
        glVertex3f(-w, -h,  d);

        // Right face (x = a)

        glVertex3f(w,  h, -d);
        glVertex3f(w,  h,  d);
        glVertex3f(w, -h,  d);
        glVertex3f(w, -h, -d);

     glEnd();
}

void GLVisualisation::paint_circle(float size, unsigned int steps)
{
  float pi = 3.141592654;

	glBegin(GL_POLYGON);

	for(float i = 0.0; i < 2.0*pi; i+= pi/steps)
 			glVertex3f(size*cos(i), size*sin(i), 0.0);

	glEnd();
}


void GLVisualisation::paint_circle_arc(float size, float arc_length, float offset, unsigned int steps)
{
  float pi = 3.141592654;

  float begin = -arc_length/2.0 + offset;
  float end = arc_length/2.0 + offset;
  float step = pi/steps;

    glBegin(GL_POLYGON);
        glVertex3f(0.0, 0.0, 0.0);
	for(float i = begin; i < end; i+= step)
 			glVertex3f(size*cos(i), size*sin(i), 0.0);

	glEnd();

}

void GLVisualisation::paint_sphere(float size, unsigned int steps)
{
  (void)steps;
  glutSolidSphere(size, 20.0, 20.0);
}

void GLVisualisation::print(float x, float y, float z, std::string string, bool small_font)
{
  //set the position of the text in the window using the x, y and z coordinates
  glRasterPos3f(x,y,z);
  //get the length of the string to display
  void *font = GLUT_BITMAP_TIMES_ROMAN_24;

  if (small_font)
    font = GLUT_BITMAP_HELVETICA_10;

  //loop to display character by character
  for (unsigned int i = 0; i < string.size(); i++)
  {
    glutBitmapCharacter(font, string[i]);
  }
}


int GLVisualisation::get_key()
{
  int result = g_rl_visualisation_key;
  g_rl_visualisation_key = -1;

  return result;
}
