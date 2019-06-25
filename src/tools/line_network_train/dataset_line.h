#ifndef _DATASET_LINE_H_
#define _DATASET_LINE_H_

#include "dataset_interface.h"

#include <json_config.h>

#include <vector>
#include <string>

class DatasetLine: public DatasetInterface
{
  private:
    unsigned int classes_count;

    unsigned int scale;
    unsigned int area_width, area_length, line_width;

  private:

      float luma_noise_level  ;
      float white_noise_level ;
      float straight_rotation_noise_level;

  private:
    std::vector<std::vector<float>> area;
    std::vector<std::vector<float>> area_downsampled;

  public:
    DatasetLine();
    ~DatasetLine();

  private:
    sDatasetItem create_item();

    unsigned int area_shifted_line(unsigned int line_position, float rotation);
    unsigned int convert_raw_line_position(unsigned int line_position);

    void downsample(std::vector<std::vector<float>> &area_output, std::vector<std::vector<float>> &area_input);

    void add_noise(std::vector<std::vector<float>> &area);

    void save_image(std::string file_name);
    void save_image_downsampled(std::string file_name);

    float rnd(float min, float max);
    void export_dataset_image(unsigned int size, std::string file_name);

};

#endif
