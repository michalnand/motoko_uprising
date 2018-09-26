#include "rigid_body.h"



RigidBody::RigidBody()
{
  init();
}

RigidBody::RigidBody(RigidBody& other)
{
  copy(other);
}

RigidBody::RigidBody(const RigidBody& other)
{
  copy(other);
}

RigidBody::~RigidBody()
{

}

RigidBody& RigidBody::operator= (RigidBody& other)
{
  copy(other);

  return *this;
}

RigidBody& RigidBody::operator= (const RigidBody& other)
{
  copy(other);

  return *this;
}

void RigidBody::copy(RigidBody& other)
{
  params = other.params;
}

void RigidBody::copy(const RigidBody& other)
{
  params = other.params;
}


void RigidBody::init()
{
  params.mass = 1.0;
  params.dt   = 0.001;

  params.w    = 8.0;
  params.h    = 4.0;
  params.d    = 1.0;

  params.fx   = 0.0;
  params.fy   = 0.0;
  params.fz   = 0.0;

  params.ax   = 0.0;
  params.ay   = 0.0;
  params.az   = 0.0;

  params.vx   = 0.0;
  params.vy   = 0.0;
  params.vz   = 0.0;

  params.x    = 0.0;
  params.y    = 0.0;
  params.z    = 0.0;


  params.Ix   = (1.0/12.0)*params.mass*(sqr(params.h) + sqr(params.d));
  params.Iy   = (1.0/12.0)*params.mass*(sqr(params.w) + sqr(params.d));
  params.Iz   = (1.0/12.0)*params.mass*(sqr(params.w) + sqr(params.h));

  params.dox   = 0.0;
  params.doy   = 0.0;
  params.doz   = 0.0;

  params.ox   = 0.0;
  params.oy   = 0.0;
  params.oz   = 0.0;

  params.angle_x = 0.0;
  params.angle_y = 0.0;
  params.angle_z = 0.0;
}


unsigned int iteration = 0;

void RigidBody::process_rotation()
{
  float mx = 0;
  float my = 0;
  float mz = 0;

  iteration++;

  if (iteration < 1000)
  {
    mx = 0.0017;
    my = 0.001;
    mz = 0.0;
  }

  params.dox = (mx - (params.Ix - params.Iy)*params.oy*params.oz)/params.Ix;
  params.doy = (my - (params.Ix - params.Iz)*params.oz*params.ox)/params.Iy;
  params.doz = (mz - (params.Iy - params.Ix)*params.ox*params.oy)/params.Iz;

  params.ox+= params.dox;
  params.oy+= params.doy;
  params.oz+= params.doz;

  params.angle_x+= params.ox;
  params.angle_y+= params.oy;
  params.angle_z+= params.oz;
}


void RigidBody::render(GLVisualisation &visualisation)
{
  float PI = 3.141592654;
  visualisation.start();

  visualisation.translate(params.x, params.y, params.z - 3.0);
  visualisation.rotate(params.angle_x*PI/180.0, params.angle_y*PI/180.0, params.angle_z*PI/180.0);

  float k = 0.1;
  visualisation.set_color(1.0, 1.0, 1.0);
  visualisation.paint_cuboid(k*params.w, k*params.h, k*params.d);

  visualisation.finish();
}

float RigidBody::sqr(float v)
{
  return v*v;
}
