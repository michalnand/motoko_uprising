#ifndef _RIGID_BODY_H_
#define _RIGID_BODY_H_

#include <opengl_gui/glvisualisation.h>

struct sRigidBody
{
  float mass, dt;
  float w, h, d;

  float fx, fy, fz;
  float ax, ay, az;
  float vx, vy, vz;
  float x, y, z;

  float Ix, Iy, Iz;

  float dox, doy, doz;
  float ox, oy, oz;
  float angle_x, angle_y, angle_z;
};

class RigidBody
{
  protected:
    sRigidBody params;

  public:
    RigidBody();

    RigidBody(RigidBody& other);
    RigidBody(const RigidBody& other);

    virtual ~RigidBody();

    RigidBody& operator= (RigidBody& other);
    RigidBody& operator= (const RigidBody& other);

  protected:
    void copy(RigidBody& other);
    void copy(const RigidBody& other);

    void init();

  public:
    void process_rotation();
    void render(GLVisualisation &visualisation);

  protected:
    float sqr(float v);
};


#endif
