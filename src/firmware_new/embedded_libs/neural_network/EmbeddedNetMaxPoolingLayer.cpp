#include <EmbeddedNetMaxPoolingLayer.h>

void network_max_pooling_kernel(nn_layer_t *output,
                                nn_layer_t *input,

                                sEmbeddedNetShape output_shape)
{
    unsigned int input_width     = output_shape.w*2;
    unsigned int input_height    = output_shape.h*2;

    for (unsigned int ch = 0; ch < output_shape.d; ch++)
    for (unsigned int y = 0; y < output_shape.h; y++)
    for (unsigned int x = 0; x < output_shape.w; x++)
    {
        nn_t result = 0;
        nn_t tmp;

        unsigned int x_ = x*2;
        unsigned int y_ = y*2;

        tmp = input[(ch*input_height + y_ + 0)*input_width + x_ + 0];
        if (tmp > result)
            result = tmp;

        tmp = input[(ch*input_height + y_ + 0)*input_width + x_ + 1];
        if (tmp > result)
            result = tmp;

        tmp = input[(ch*input_height + y_ + 1)*input_width + x_ + 0];
        if (tmp > result)
            result = tmp;

        tmp = input[(ch*input_height + y_ + 1)*input_width + x_ + 1];
        if (tmp > result)
            result = tmp;

        unsigned int output_idx = (ch*output_shape.h + y)*output_shape.w + x;
        output[output_idx]      = result;
    }
}




void network_max_pooling_kernel_1d( nn_layer_t *output,
                                    nn_layer_t *input,

                                    sEmbeddedNetShape output_shape)
{
    for (unsigned int ch = 0; ch < output_shape.d; ch++)
    {
        unsigned int input_idx  = ch*2*output_shape.w;
        unsigned int output_idx = ch*output_shape.w;

        for (unsigned int x = 0; x < output_shape.w; x++)
        {
            nn_t va = input[input_idx + 0];
            nn_t vb = input[input_idx + 1];

            if (va > vb)
                output[output_idx] = va;
            else
                output[output_idx] = vb;

            input_idx+= 2;
            output_idx++;
        }
    }
}



EmbeddedNetMaxPoolingLayer::EmbeddedNetMaxPoolingLayer(
                                          sEmbeddedNetShape kernel_shape,
                                          sEmbeddedNetShape input_shape,
                                          sEmbeddedNetShape output_shape
                                        )
                    :EmbeddedNetLayer()
{
    m_kernel_shape = kernel_shape;
    m_input_shape  = input_shape;
    m_output_shape = output_shape;
}

EmbeddedNetMaxPoolingLayer::~EmbeddedNetMaxPoolingLayer()
{

}

void EmbeddedNetMaxPoolingLayer::forward(nn_layer_t *output, nn_layer_t *input)
{
    if ((m_kernel_shape.w == 2)&&(m_kernel_shape.h == 2))
        network_max_pooling_kernel(output, input, m_output_shape);
    else if ((m_kernel_shape.w == 2)&&(m_kernel_shape.h == 1))
        network_max_pooling_kernel_1d(output, input, m_output_shape);
}
