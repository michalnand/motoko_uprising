#ifndef _NETWORK_LAYER_H_
#define _NETWORK_LAYER_H_

#include "NetworkConfig.h"

class NetworkLayer
{
  protected:
    sLayerGeometry m_input_geometry, m_output_geometry, m_kernel_geometry;

  public:
    NetworkLayer();
    virtual ~NetworkLayer();

    sLayerGeometry input_geometry()
    {
      return m_input_geometry;
    }

    sLayerGeometry output_geometry()
    {
      return m_output_geometry;
    }

    sLayerGeometry kernel_geometry()
    {
      return m_kernel_geometry;
    }

    unsigned int get_input_size()
    {
      return m_input_geometry.w*m_input_geometry.h*m_input_geometry.d;
    }

    unsigned int get_output_size()
    {
      return m_output_geometry.w*m_output_geometry.h*m_output_geometry.d;
    }

  public:
    virtual void forward(nn_layer_t *output, nn_layer_t *input);
};

#endif
