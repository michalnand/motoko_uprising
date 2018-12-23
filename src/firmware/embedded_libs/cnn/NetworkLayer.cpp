#include "NetworkLayer.h"



NetworkLayer::NetworkLayer()
{
  m_input_geometry.w = 0;
  m_input_geometry.h = 0;
  m_input_geometry.d = 0;

  m_output_geometry.w = 0;
  m_output_geometry.h = 0;
  m_output_geometry.d = 0;

  m_kernel_geometry.w = 0;
  m_kernel_geometry.h = 0;
  m_kernel_geometry.d = 0;
}

NetworkLayer::~NetworkLayer()
{

}

void NetworkLayer::forward(nn_layer_t *output, nn_layer_t *input)
{
  (void)output;
  (void)input;
}
