#include "NetworkConvolutionKernel.h"
#include "NetworkConfig.h"


//optimized kernel
template<const unsigned int kernel_size>
void t_network_convolution_kernel(  nn_layer_t *output,
                                    nn_layer_t *input,
                                    nn_weight_t *w,
                                    nn_weight_t *bias,
                                    int w_range,
                                    int bias_range,

                                    unsigned int in_width,
                                    unsigned int in_height,
                                    unsigned int in_channels,
                                    unsigned int out_channels )
{
    unsigned int k_half = (kernel_size - 1)/2;

    unsigned int input_size_y = in_height - 2*k_half;
    unsigned int input_size_x = in_width - 2*k_half;

    for (unsigned int filter = 0; filter < out_channels; filter++)
        for (unsigned int y = 0; y <= input_size_y; y++)
            for (unsigned int x = 0; x <= input_size_x; x++)
            {
                unsigned int filter_idx = kernel_size*kernel_size*in_channels*filter;

                nn_t dot_result = 0;
                nn_t bias_result;

                for (unsigned int ch = 0; ch < in_channels; ch++)
                {
                    unsigned int input_idx = (ch*in_height + y)*in_width + x;

                    if (kernel_size == 1)
                    {
                        dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++;
                    }

                    if (kernel_size == 3)
                    {
                        dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++; input_idx++;
                        dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++; input_idx++;
                        dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++; input_idx++;
                        input_idx+=  in_width - kernel_size;

                        dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++; input_idx++;
                        dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++; input_idx++;
                        dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++; input_idx++;
                        input_idx+=  in_width - kernel_size;

                        dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++; input_idx++;
                        dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++; input_idx++;
                        dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++; input_idx++;
                        input_idx+=  in_width - kernel_size;
                    }
            }

            dot_result  = (dot_result*w_range)/128;
            bias_result = (bias[filter]*bias_range);

            nn_t result = (dot_result + bias_result)/1024;

            if (result > NETWORK_LAYER_OUTPUT_RANGE)
                result = NETWORK_LAYER_OUTPUT_RANGE;

            if (result < -NETWORK_LAYER_OUTPUT_RANGE)
                result = -NETWORK_LAYER_OUTPUT_RANGE;

            unsigned int output_idx = (filter*in_height + y + k_half)*in_width + x + k_half;
            output[output_idx] = result;
        }
}



//optimized kernel, 1D convolution
template<const unsigned int kernel_size>
void t_network_convolution_kernel_1d(   nn_layer_t *output,
                                        nn_layer_t *input,
                                        nn_weight_t *w,
                                        nn_weight_t *bias,
                                        int w_range,
                                        int bias_range,

                                        unsigned int in_width,
                                        unsigned int in_channels,
                                        unsigned int out_channels )
{
    unsigned int k_half = (kernel_size - 1)/2;

    unsigned int input_size_x = in_width - 2*k_half;

    for (unsigned int filter = 0; filter < out_channels; filter++)
            for (unsigned int x = 0; x <= input_size_x; x++)
            {
                unsigned int filter_idx = kernel_size*kernel_size*in_channels*filter;

                nn_t dot_result = 0;
                nn_t bias_result;

                for (unsigned int ch = 0; ch < in_channels; ch++)
                {
                    unsigned int input_idx = ch*in_width + x;

                    if (kernel_size == 1)
                    {
                        dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++;
                    }

                    if (kernel_size == 3)
                    {
                        dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++; input_idx++;
                        dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++; input_idx++;
                        dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++;
                        input_idx+=  in_width - kernel_size;
                    }
                }

                dot_result  = (dot_result*w_range)/128;
                bias_result = (bias[filter]*bias_range);

                nn_t result = (dot_result + bias_result)/1024;

                if (result > NETWORK_LAYER_OUTPUT_RANGE)
                    result = NETWORK_LAYER_OUTPUT_RANGE;

                if (result < -NETWORK_LAYER_OUTPUT_RANGE)
                    result = -NETWORK_LAYER_OUTPUT_RANGE;

                unsigned int output_idx = (filter + k_half)*in_width + x + k_half;
                output[output_idx] = result;
        }
}


/*
//template, but no untrooled kernel
template<const unsigned int kernel_size>
void t_network_convolution_kernel(  nn_layer_t *output,
                                    nn_layer_t *input,
                                    nn_weight_t *w,
                                    nn_weight_t *bias,
                                    int w_range,
                                    int bias_range,

                                    unsigned int in_width,
                                    unsigned int in_height,
                                    unsigned int in_channels,
                                    unsigned int out_channels )
{
    unsigned int k_half = (kernel_size - 1)/2;

    unsigned int input_size_y = in_height - 2*k_half;
    unsigned int input_size_x = in_width - 2*k_half;

    for (unsigned int filter = 0; filter < out_channels; filter++)
        for (unsigned int y = 0; y <= input_size_y; y++)
            for (unsigned int x = 0; x <= input_size_x; x++)
            {
                unsigned int filter_idx = kernel_size*kernel_size*in_channels*filter;

                nn_t dot_result = 0;
                nn_t bias_result;

                for (unsigned int ch = 0; ch < in_channels; ch++)
                {
                    unsigned int input_idx = (ch*in_height + y)*in_width + x;

                    for (unsigned int ky = 0; ky < kernel_size; ky++)
                    {
                        for (unsigned int kx = 0; kx < kernel_size; kx++)
                        {
                            dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++; input_idx++;
                        }
                        input_idx+=  in_width - kernel_size;
                    }

                }

            dot_result  = (dot_result*w_range)/128;
            bias_result = (bias[filter]*bias_range);

            nn_t result = (dot_result + bias_result)/1024;

            if (result > NETWORK_LAYER_OUTPUT_RANGE)
                result = NETWORK_LAYER_OUTPUT_RANGE;

            if (result < -NETWORK_LAYER_OUTPUT_RANGE)
                result = -NETWORK_LAYER_OUTPUT_RANGE;

            unsigned int output_idx = (filter*in_height + y + k_half)*in_width + x + k_half;
            output[output_idx] = result;
        }
}


void network_convolution_kernel(  nn_layer_t *output,
                                  nn_layer_t *input,
                                  nn_weight_t *w,
                                  nn_weight_t *bias,
                                  int w_range,
                                  int bias_range,

                                  sLayerGeometry input_geometry,
                                  sLayerGeometry kernel_geometry)
{
    unsigned int kernel_size = kernel_geometry.w;


    switch (kernel_size)
    {
        case 1:
                t_network_convolution_kernel<1>(    output,
                                                    input,
                                                    w,
                                                    bias,
                                                    w_range,
                                                    bias_range,
                                                    input_geometry.w,
                                                    input_geometry.h,
                                                    input_geometry.d,
                                                    kernel_geometry.d);

                                                    break;

        case 3:
                t_network_convolution_kernel<3>(    output,
                                                    input,
                                                    w,
                                                    bias,
                                                    w_range,
                                                    bias_range,
                                                    input_geometry.w,
                                                    input_geometry.h,
                                                    input_geometry.d,
                                                    kernel_geometry.d);

                                                    break;

        case 5:
                t_network_convolution_kernel<5>(    output,
                                                    input,
                                                    w,
                                                    bias,
                                                    w_range,
                                                    bias_range,
                                                    input_geometry.w,
                                                    input_geometry.h,
                                                    input_geometry.d,
                                                    kernel_geometry.d);

                                                    break;
    }
}
*/



/*
//template, but no unrolled kernel
template<const unsigned int kernel_size>
void t_network_convolution_kernel(  nn_layer_t *output,
                                    nn_layer_t *input,
                                    nn_weight_t *w,
                                    nn_weight_t *bias,
                                    int w_range,
                                    int bias_range,

                                    unsigned int in_width,
                                    unsigned int in_height,
                                    unsigned int in_channels,
                                    unsigned int out_channels )
{
    unsigned int k_half = (kernel_size - 1)/2;

    unsigned int input_size_y = in_height - 2*k_half;
    unsigned int input_size_x = in_width - 2*k_half;

    for (unsigned int filter = 0; filter < out_channels; filter++)
        for (unsigned int y = 0; y <= input_size_y; y++)
            for (unsigned int x = 0; x <= input_size_x; x++)
            {
                unsigned int filter_idx = kernel_size*kernel_size*in_channels*filter;

                nn_t dot_result = 0;
                nn_t bias_result;

                for (unsigned int ch = 0; ch < in_channels; ch++)
                {
                    unsigned int input_idx = (ch*in_height + y)*in_width + x;

                    for (unsigned int ky = 0; ky < kernel_size; ky++)
                    {
                        for (unsigned int kx = 0; kx < kernel_size; kx++)
                        {
                            dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++; input_idx++;
                        }
                        input_idx+=  in_width - kernel_size;
                    }

                }

            dot_result  = (dot_result*w_range)/128;
            bias_result = (bias[filter]*bias_range);

            nn_t result = (dot_result + bias_result)/1024;

            if (result > NETWORK_LAYER_OUTPUT_RANGE)
                result = NETWORK_LAYER_OUTPUT_RANGE;

            if (result < -NETWORK_LAYER_OUTPUT_RANGE)
                result = -NETWORK_LAYER_OUTPUT_RANGE;

            unsigned int output_idx = (filter*in_height + y + k_half)*in_width + x + k_half;
            output[output_idx] = result;
        }
}
*/

/*
//naive kernel
void t_network_convolution_kernel(  nn_layer_t *output,
                                    nn_layer_t *input,
                                    nn_weight_t *w,
                                    nn_weight_t *bias,
                                    int w_range,
                                    int bias_range,

                                    unsigned int in_width,
                                    unsigned int in_height,
                                    unsigned int in_channels,
                                    unsigned int out_channels,

                                    unsigned int kernel_size)
{
    unsigned int k_half = (kernel_size - 1)/2;

    unsigned int input_size_y = in_height - 2*k_half;
    unsigned int input_size_x = in_width - 2*k_half;

    for (unsigned int filter = 0; filter < out_channels; filter++)
        for (unsigned int y = 0; y <= input_size_y; y++)
            for (unsigned int x = 0; x <= input_size_x; x++)
            {
                unsigned int filter_idx = kernel_size*kernel_size*in_channels*filter;

                nn_t dot_result = 0;
                nn_t bias_result;

                for (unsigned int ch = 0; ch < in_channels; ch++)
                {
                    unsigned int input_idx = (ch*in_height + y)*in_width + x;

                    for (unsigned int ky = 0; ky < kernel_size; ky++)
                    {
                        for (unsigned int kx = 0; kx < kernel_size; kx++)
                        {
                            dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++; input_idx++;
                        }
                        input_idx+=  in_width - kernel_size;
                    }

                }

            dot_result  = (dot_result*w_range)/128;
            bias_result = (bias[filter]*bias_range);

            nn_t result = (dot_result + bias_result)/1024;

            if (result > NETWORK_LAYER_OUTPUT_RANGE)
                result = NETWORK_LAYER_OUTPUT_RANGE;

            if (result < -NETWORK_LAYER_OUTPUT_RANGE)
                result = -NETWORK_LAYER_OUTPUT_RANGE;

            unsigned int output_idx = (filter*in_height + y + k_half)*in_width + x + k_half;
            output[output_idx] = result;
        }
}
*/

void network_convolution_kernel(  nn_layer_t *output,
                                  nn_layer_t *input,
                                  nn_weight_t *w,
                                  nn_weight_t *bias,
                                  int w_range,
                                  int bias_range,

                                  sLayerGeometry input_geometry,
                                  sLayerGeometry kernel_geometry)
{
    if ((kernel_geometry.w == 1)&&(kernel_geometry.h == 1))
    {
            t_network_convolution_kernel<1>(    output,
                                                input,
                                                w,
                                                bias,
                                                w_range,
                                                bias_range,
                                                input_geometry.w,
                                                input_geometry.h,
                                                input_geometry.d,
                                                kernel_geometry.d);
    }
    else if ((kernel_geometry.w == 3)&&(kernel_geometry.h == 3))
    {
            t_network_convolution_kernel<3>(    output,
                                                input,
                                                w,
                                                bias,
                                                w_range,
                                                bias_range,
                                                input_geometry.w,
                                                input_geometry.h,
                                                input_geometry.d,
                                                kernel_geometry.d);
    }
    else if ((kernel_geometry.w == 3)&&(kernel_geometry.h == 1))
    { 
            t_network_convolution_kernel_1d<3>( output,
                                                input,
                                                w,
                                                bias,
                                                w_range,
                                                bias_range,
                                                input_geometry.w,
                                                input_geometry.d,
                                                kernel_geometry.d);
    }


}
