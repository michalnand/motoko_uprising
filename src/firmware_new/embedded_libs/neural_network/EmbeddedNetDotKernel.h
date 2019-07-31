#ifndef _EMBEDDED_NETWORK_DOT_KERNEL_H_
#define _EMBEDDED_NETWORK_DOT_KERNEL_H_

#include <EmbeddedNetConfig.h>

nn_t network_dot_kernel_naive(nn_weight_t *va, nn_layer_t *vb, unsigned int size);
nn_t network_dot_kernel(nn_weight_t *va, nn_layer_t *vb, unsigned int size);

#endif
