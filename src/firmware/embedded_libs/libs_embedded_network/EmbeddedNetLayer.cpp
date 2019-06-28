#include <EmbeddedNetLayer.h>



EmbeddedNetLayer::EmbeddedNetLayer()
{
    m_input_shape.w = 0;
    m_input_shape.h = 0;
    m_input_shape.d = 0;

    m_output_shape.w = 0;
    m_output_shape.h = 0;
    m_output_shape.d = 0;

    m_kernel_shape.w = 0;
    m_kernel_shape.h = 0;
    m_kernel_shape.d = 0;
}

EmbeddedNetLayer::~EmbeddedNetLayer()
{

}

void EmbeddedNetLayer::forward(nn_layer_t *output, nn_layer_t *input)
{
    (void)output;
    (void)input;
}
