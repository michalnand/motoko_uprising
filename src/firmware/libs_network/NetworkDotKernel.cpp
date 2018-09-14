#include "NetworkDotKernel.h"


nn_t network_dot_kernel(nn_weight_t *va, nn_layer_t *vb, unsigned int size)
{
  nn_t result = 0;

  /*
  unsigned int i = 0;
  while (size >= 4)
  { 
    result+= ((int16_t)va[i+0])*((int16_t)vb[i+0]);
    result+= ((int16_t)va[i+1])*((int16_t)vb[i+1]);
    result+= ((int16_t)va[i+2])*((int16_t)vb[i+2]);
    result+= ((int16_t)va[i+3])*((int16_t)vb[i+3]);

    size-=4;
    i+=4;
  }

  while (size)
  {
    result+= ((nn_t)va[i])*((nn_t)vb[i]);
    size--;
    i++;
  }
  */


  for (unsigned int i = 0; i < size; i++)
    result+= ((nn_t)va[i])*((nn_t)vb[i]);

  return result;
}
