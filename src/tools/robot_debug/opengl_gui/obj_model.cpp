#include "obj_model.h"

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>

struct sColorMtl
{
  unsigned int id;
  float r, g, b, a;
};

ObjModel::ObjModel()
{

}

ObjModel::ObjModel(GLVisualisation &visualisation, std::string obj_file_name, std::string mtl_file_name, float scale)
{
  init(visualisation, obj_file_name, mtl_file_name, scale);
}

void ObjModel::init(GLVisualisation &visualisation, std::string obj_file_name, std::string mtl_file_name, float scale)
{
  this->visualisation = &visualisation;
  this->scale = scale;

  std::vector<unsigned int> vertexIndices, uvIndices, normalIndices, colorIndicies;
  std::vector<sPoint> temp_vertices;
  std::vector<sPoint2D> temp_uvs;
  std::vector<sPoint> temp_normals;


  FILE * file = fopen(obj_file_name.c_str(), "r");
  if( file == NULL )
  {
      std::cout << "impossible to open obj file " <<  obj_file_name.c_str() << "\n";
      return;
  }

  int res_dummy;

  unsigned int color_indicie = 0;
  while( 1 )
  {
      char lineHeader[128];
      // read the first word of the line
      int res = fscanf(file, "%s", lineHeader);
      if (res == EOF)
          break; // EOF = End Of File. Quit the loop.

      // else : parse lineHeader

      if ( strcmp( lineHeader, "v" ) == 0 )
      {
          sPoint vertex;
          res_dummy = fscanf(file, "%f %f %f\n", &vertex.x, &vertex.y, &vertex.z );

          vertex.x*= scale;
          vertex.y*= scale;
          vertex.z*= scale;
          temp_vertices.push_back(vertex);
      }
      else if ( strcmp( lineHeader, "vt" ) == 0 )
      {
            sPoint2D uv;
            res_dummy = fscanf(file, "%f %f\n", &uv.x, &uv.y );
            temp_uvs.push_back(uv);
      }
      else if ( strcmp( lineHeader, "vn" ) == 0 )
      {
            sPoint normal;
            res_dummy = fscanf(file, "%f %f %f\n", &normal.x, &normal.y, &normal.z );
            temp_normals.push_back(normal);
      }
      else if ( strcmp( lineHeader, "usemtl" ) == 0 )
      {
        res = fscanf(file, "%s", lineHeader);
        sscanf(lineHeader+6,"%u", &color_indicie);
      }
      else if ( strcmp( lineHeader, "f" ) == 0 )
      {
              std::string vertex1, vertex2, vertex3;

              unsigned int vertexIndex[3], uvIndex[3], normalIndex[3];

              uvIndex[0] = 0;
              uvIndex[1] = 0;
              uvIndex[2] = 0;


              int matches = fscanf( file, "%u %u %u\n",

                                    &vertexIndex[0],
                                    &vertexIndex[1],
                                    &vertexIndex[2] );
              if (matches != 3)
              {

                  printf("File can't be read by our simple parser : Try exporting with other options\n");
                  return;
              }



              vertexIndices.push_back(vertexIndex[0]);
              vertexIndices.push_back(vertexIndex[1]);
              vertexIndices.push_back(vertexIndex[2]);
              uvIndices    .push_back(uvIndex[0]);
              uvIndices    .push_back(uvIndex[1]);
              uvIndices    .push_back(uvIndex[2]);
              normalIndices.push_back(normalIndex[0]);
              normalIndices.push_back(normalIndex[1]);
              normalIndices.push_back(normalIndex[2]);

              colorIndicies.push_back(color_indicie);
              colorIndicies.push_back(color_indicie);
              colorIndicies.push_back(color_indicie);
      }

  }

  fclose(file);


  file = fopen(mtl_file_name.c_str(), "r");
  if( file == NULL )
  {
      std::cout << "impossible to open mtl file " <<  mtl_file_name << "\n";
      return;
  }

  std::vector<sColorMtl> colors;

  //TODO parse mtl file for colors

  sColorMtl color;
  color.id = 0;
  color.r = 0.0;
  color.g = 0.0;
  color.b = 0.0;
  color.a = 0.0;

  while( 1 )
  {
      char lineHeader[128];
      // read the first word of the line
      int res = fscanf(file, "%s", lineHeader);
      if (res == EOF)
          break; // EOF = End Of File. Quit the loop.


      if (strstr("newmtl", lineHeader) != NULL)
      {
        res = fscanf(file, "%s", lineHeader);

        //printf("***%s*** \n", lineHeader + 6);

        sscanf(lineHeader+6,"%u", &color.id);
      }

      if ( strcmp( lineHeader, "Kd" ) == 0 )
      {
        res = fscanf(file, "%f %f %f\n", &color.r, &color.g, &color.b);
        colors.push_back(color);
      }

  }


  sColorMtl tmp_color;
  tmp_color.id = 0;
  tmp_color.r = 1.0;
  tmp_color.g = 0.0;
  tmp_color.b = 0.0;
  tmp_color.a = 0.0;

  // For each vertex of each triangle
  for (unsigned int i=0; i<vertexIndices.size(); i++ )
  {
      unsigned int vertexIndex = vertexIndices[i];
      sPoint vertex = temp_vertices[ vertexIndex-1 ];

      for (unsigned int j = 0; j < colors.size(); j++)
        if (colors[j].id == colorIndicies[i])
        {
          tmp_color.r = colors[j].r;
          tmp_color.g = colors[j].g;
          tmp_color.b = colors[j].b;
          tmp_color.a = colors[j].a;
          break;
        }


      //TODO color
      vertex.r = tmp_color.r;
      vertex.g = tmp_color.g;
      vertex.b = tmp_color.b;
      vertex.a = tmp_color.a;


      vertices.push_back(vertex);
  }

  (void)res_dummy;

  for (unsigned int j = 0; j < vertices.size(); j++)
  {
    float color_min = 0.2;
    if (vertices[j].r < color_min)
      vertices[j].r = 0.0;

    if (vertices[j].g < color_min)
      vertices[j].g = 0.0;

    if (vertices[j].b < color_min)
      vertices[j].b = 0.0;
  }

}

ObjModel::~ObjModel()
{

}


void ObjModel::render()
{
  glPushMatrix();

    glBegin(GL_TRIANGLES);

    for (unsigned int j = 0; j < vertices.size(); j++)
    {
      glColor3f(vertices[j].r, vertices[j].g, vertices[j].b);
      glVertex3f(vertices[j].x, vertices[j].y, vertices[j].z);
    }

    glEnd();

  glPopMatrix();
}
