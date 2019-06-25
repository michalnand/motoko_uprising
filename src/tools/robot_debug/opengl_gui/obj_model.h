#ifndef _OBJ_MODEL_H_
#define _OBJ_MODEL_H_

#include "glvisualisation.h"

#include <vector>

struct sPoint
{
  float x, y, z;
  float r, g, b, a;
};

struct sPoint2D
{
  float x, y;
};


struct sColor
{
  float r, g, b;
};

struct sPolygone
{
  std::vector<struct sPoint> points;
  float r, g, b;
};

class ObjModel
{
  protected:
    std::vector<struct sPolygone> body_polygons;
    std::vector< struct sPoint > vertices;

    GLVisualisation *visualisation;

    float scale;

  public:
    ObjModel();
    ObjModel(GLVisualisation &visualisation, std::string obj_file_name, std::string mtl_file_name, float scale = 1.0);
    void init(GLVisualisation &visualisation, std::string obj_file_name, std::string mtl_file_name, float scale = 1.0);

    virtual ~ObjModel();

    void render();
};


#endif
