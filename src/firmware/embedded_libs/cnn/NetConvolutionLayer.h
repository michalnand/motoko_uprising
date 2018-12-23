#ifndef _NetConvolution_Layer_H_
#define _NetConvolution_Layer_H_

#include "NetworkLayer.h"

class NetConvolutionLayer: public NetworkLayer
{
  private:
    const nn_weight_t  *m_weights, *m_bias;
    int   m_weights_range, m_bias_range;

  public:
    NetConvolutionLayer(
                sLayerGeometry kernel_geometry,
                sLayerGeometry input_geometry,
                sLayerGeometry output_geometry,

                const nn_weight_t *weights,
                const nn_weight_t *bias,
                int weights_range,
                int bias_range
              );

    virtual ~NetConvolutionLayer();

    void forward(nn_layer_t *output, nn_layer_t *input);
};

#endif
