#include "NetMaxPoolingLayer.h"

void network_max_pooling_kernel(nn_layer_t *output,
                                nn_layer_t *input,

                                sLayerGeometry output_geometry)
{
    unsigned int input_width     = output_geometry.w*2;
    unsigned int input_height    = output_geometry.h*2;

    for (unsigned int ch = 0; ch < output_geometry.d; ch++)
    for (unsigned int y = 0; y < output_geometry.h; y++)
    for (unsigned int x = 0; x < output_geometry.w; x++)
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

        unsigned int output_idx = (ch*output_geometry.h + y)*output_geometry.w + x;
        output[output_idx]      = result;
    }
}




void network_max_pooling_kernel_1d( nn_layer_t *output,
                                    nn_layer_t *input,

                                    sLayerGeometry output_geometry)
{
    unsigned int input_width     = output_geometry.w*2;

    for (unsigned int ch = 0; ch < output_geometry.d; ch++)
    for (unsigned int x = 0; x < output_geometry.w; x++)
    {
        unsigned int idx = ch*input_width + x*2;

        nn_t va = input[idx + 0];
        nn_t vb = input[idx + 1];
        nn_t result = 0;

        if (va > vb)
            result = va;
        else
            result = vb;

        unsigned int output_idx = ch*output_geometry.w + x;
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
    if ((m_kernel_geometry.w == 2)&&(m_kernel_geometry.h == 2))
        network_max_pooling_kernel(output, input, m_output_geometry);
    else if ((m_kernel_geometry.w == 2)&&(m_kernel_geometry.h == 1))
        network_max_pooling_kernel_1d(output, input, m_output_geometry);
}
