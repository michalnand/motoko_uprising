#include <EmbeddedNetDenseConvolutionLayer.h>
#include <EmbeddedNetConvolutionKernel.h>

EmbeddedNetDenseConvolutionLayer::EmbeddedNetDenseConvolutionLayer(
                                          sEmbeddedNetShape kernel_shape,
                                          sEmbeddedNetShape input_shape,
                                          sEmbeddedNetShape output_shape,

                                          const nn_weight_t *weights,
                                          const nn_weight_t *bias,
                                          int weights_range,
                                          int bias_range
                                        )
                                        :EmbeddedNetLayer()
{
    m_kernel_shape = kernel_shape;
    m_input_shape  = input_shape;
    m_output_shape = output_shape;

    m_weights = weights;
    m_bias    = bias;

    m_weights_range = weights_range;
    m_bias_range    = bias_range;
}

EmbeddedNetDenseConvolutionLayer::~EmbeddedNetDenseConvolutionLayer()
{

}

void EmbeddedNetDenseConvolutionLayer::forward(nn_layer_t *output, nn_layer_t *input)
{
    network_convolution_kernel( output,
                                input,
                                (nn_weight_t*)m_weights,
                                (nn_weight_t*)m_bias,
                                m_weights_range,
                                m_bias_range,

                                m_input_shape,
                                m_kernel_shape);

    unsigned int output_convolution_size = m_input_shape.w*m_input_shape.h*m_kernel_shape.d;

    for (unsigned int i = 0; i < get_input_size(); i++)
    {
        output[i + output_convolution_size] = input[i];
    }
}
