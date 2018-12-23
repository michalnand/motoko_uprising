#include "NetworkConvolutionKernel.h"
#include "NetworkConfig.h"

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
              dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++; input_idx++;
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

            if (kernel_size == 5)
            {
              dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++; input_idx++;
              dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++; input_idx++;
              dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++; input_idx++;
              dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++; input_idx++;
              dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++; input_idx++;
              input_idx+=  in_width - kernel_size;

              dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++; input_idx++;
              dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++; input_idx++;
              dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++; input_idx++;
              dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++; input_idx++;
              dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++; input_idx++;
              input_idx+=  in_width - kernel_size;

              dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++; input_idx++;
              dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++; input_idx++;
              dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++; input_idx++;
              dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++; input_idx++;
              dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++; input_idx++;
              input_idx+=  in_width - kernel_size;

              dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++; input_idx++;
              dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++; input_idx++;
              dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++; input_idx++;
              dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++; input_idx++;
              dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++; input_idx++;
              input_idx+=  in_width - kernel_size;

              dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++; input_idx++;
              dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++; input_idx++;
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
              t_network_convolution_kernel<1>(  output,
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
              t_network_convolution_kernel<3>(  output,
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
             t_network_convolution_kernel<5>(  output,
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
