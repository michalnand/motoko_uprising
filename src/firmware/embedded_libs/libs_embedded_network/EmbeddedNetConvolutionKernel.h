#ifndef _EMBEDDED_NET_CONVOLUTION_KERNEL_H_
#define _EMBEDDED_NET_CONVOLUTION_KERNEL_H_

#include <EmbeddedNetConfig.h>

void network_convolution_kernel(    nn_layer_t *output,
                                    nn_layer_t *input,
                                    nn_weight_t *w,
                                    nn_weight_t *bias,
                                    int w_range,
                                    int bias_range,

                                    sEmbeddedNetShape input_shape,
                                    sEmbeddedNetShape kernel_shape);

#endif
