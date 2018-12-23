#ifndef _NETWORK_CONVOLUTION_KERNEL_H_
#define _NETWORK_CONVOLUTION_KERNEL_H_

#include "NetworkConfig.h"

void network_convolution_kernel(  nn_layer_t *output,
                                  nn_layer_t *input,
                                  nn_weight_t *w,
                                  nn_weight_t *bias,
                                  int w_range,
                                  int bias_range,

                                  sLayerGeometry input_geometry,
                                  sLayerGeometry kernel_geometry);

#endif
