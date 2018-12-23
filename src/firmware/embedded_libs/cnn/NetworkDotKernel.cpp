#include "NetworkDotKernel.h"


nn_t network_dot_kernel(nn_weight_t *va, nn_layer_t *vb, unsigned int size)
{
  nn_t result = 0;

  for (unsigned int i = 0; i < size; i++)
    result+= ((nn_t)va[i])*((nn_t)vb[i]);

  return result;
}
