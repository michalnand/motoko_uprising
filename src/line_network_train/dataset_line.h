#ifndef _DATASET_LINE_H_
#define _DATASET_LINE_H_

#include "dataset_interface.h"

#include <json_config.h>

class DatasetLine: public DatasetInterface
{
  private:
    unsigned int classes_count;

    float white_noise_level;
    float brightness_noise_level;
    float salt_and_pepper_noise_level;

  public:
    DatasetLine();
    ~DatasetLine();

  private:
    void create(unsigned int count, bool testing);
    sDatasetItem create_item();

    float rnd(float min = -1.0, float max = 1.0);
    void set_input(std::vector<float> &input, int x, int y, float value);
    float interpolate(float x, float y, float x0, float y0);
    void normalise_input(std::vector<float> &input);

    void add_white_noise(std::vector<float> &input, float value);
    void add_brightness_noise(std::vector<float> &input, float value);
    void add_salt_and_pepper_noise(std::vector<float> &vector, float value);

  private:
    sDatasetItem make_curved_item();
    sDatasetItem make_shifted_item();

};

#endif
