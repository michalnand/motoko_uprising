#include "NetConvolutionLayer.h"
#include <NetworkConvolutionKernel.h>

NetConvolutionLayer::NetConvolutionLayer(
                                          sLayerGeometry kernel_geometry,
                                          sLayerGeometry input_geometry,
                                          sLayerGeometry output_geometry,

                                          const nn_weight_t *weights,
                                          const nn_weight_t *bias,
                                          int weights_range,
                                          int bias_range
                                        )
{
    m_kernel_geometry = kernel_geometry;
    m_input_geometry  = input_geometry;
    m_output_geometry = output_geometry;

    m_weights = weights;
    m_bias    = bias;

    m_weights_range = weights_range;
    m_bias_range    = bias_range;
}

NetConvolutionLayer::~NetConvolutionLayer()
{

}

void NetConvolutionLayer::forward(nn_layer_t *output, nn_layer_t *input)
{
    network_convolution_kernel( output,
                                input,
                                (nn_weight_t*)m_weights,
                                (nn_weight_t*)m_bias,
                                m_weights_range,
                                m_bias_range,
                                m_input_geometry,
                                m_kernel_geometry);
}
