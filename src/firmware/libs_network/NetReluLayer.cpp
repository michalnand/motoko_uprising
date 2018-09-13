#include "NetReluLayer.h"


NetReluLayer::NetReluLayer(sLayerGeometry kernel_geometry, sLayerGeometry input_geometry, sLayerGeometry output_geometry)
             :NetworkLayer()
{
  m_kernel_geometry = kernel_geometry;
  m_input_geometry  = input_geometry;
  m_output_geometry = output_geometry;

  size = m_input_geometry.w*m_input_geometry.h*m_input_geometry.d;
}

NetReluLayer::~NetReluLayer()
{

}

void NetReluLayer::forward(nn_layer_t *output, nn_layer_t *input)
{
  for (unsigned int i = 0; i < size; i++)
  {
    if (input[i] < 0)
      output[i] = 0;
    else
      output[i] = input[i];
  }
}
