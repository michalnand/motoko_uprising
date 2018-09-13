#include "NetMaxPoolingLayer.h"

template<unsigned int kernel_size>
void network_max_pooling_kernel(nn_layer_t *output,
                                nn_layer_t *input,

                                sLayerGeometry output_geometry)
{
  unsigned int input_width     = output_geometry.w*kernel_size;
  unsigned int input_height    = output_geometry.h*kernel_size;

  for (unsigned int ch = 0; ch < output_geometry.d; ch++)
  for (unsigned int y = 0; y < output_geometry.h; y++)
  for (unsigned int x = 0; x < output_geometry.w; x++)
  {
    nn_t result = 0;

    unsigned int x_ = x*kernel_size;
    unsigned int y_ = y*kernel_size;

    for (unsigned int ky = 0; ky < kernel_size; ky++)
      for (unsigned int kx = 0; kx < kernel_size; kx++)
      {
        unsigned int input_idx = (ch*input_height + y_ + ky)*input_width + x_ + kx;
        nn_t tmp = input[input_idx];

        if (tmp > result)
          result = tmp;
      }

    unsigned int output_idx = (ch*output_geometry.h + y)*output_geometry.w + x;
    output[output_idx]      = result;
  }

}



NetMaxPoolingLayer::NetMaxPoolingLayer(
                                          sLayerGeometry kernel_geometry,
                                          sLayerGeometry input_geometry,
                                          sLayerGeometry output_geometry
                                        )
                    :NetworkLayer()
{
  m_kernel_geometry = kernel_geometry;
  m_input_geometry  = input_geometry;
  m_output_geometry = output_geometry;
}

NetMaxPoolingLayer::~NetMaxPoolingLayer()
{

}

void NetMaxPoolingLayer::forward(nn_layer_t *output, nn_layer_t *input)
{
  unsigned int size = m_kernel_geometry.w;
  switch (size)
  {
    case 2:   network_max_pooling_kernel<2>(output, input, m_output_geometry); break;
    case 3:   network_max_pooling_kernel<3>(output, input, m_output_geometry); break;
    case 4:   network_max_pooling_kernel<4>(output, input, m_output_geometry); break;
    case 5:   network_max_pooling_kernel<5>(output, input, m_output_geometry); break;
  }
}
