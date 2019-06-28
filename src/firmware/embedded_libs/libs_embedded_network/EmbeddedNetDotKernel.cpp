#include <EmbeddedNetDotKernel.h>


nn_t network_dot_kernel_naive(nn_weight_t *va, nn_layer_t *vb, unsigned int size)
{
    nn_t result = 0;

    for (unsigned int i = 0; i < size; i++)
        result+= ((nn_t)va[i])*((nn_t)vb[i]);

    return result;
}

nn_t network_dot_kernel(nn_weight_t *va, nn_layer_t *vb, unsigned int size)
{
    nn_t result = 0;

    unsigned int idx = 0;

    while (size >= 4)
    {
        result+= ((nn_t)va[idx + 0])*((nn_t)vb[idx + 0]);
        result+= ((nn_t)va[idx + 1])*((nn_t)vb[idx + 1]);
        result+= ((nn_t)va[idx + 2])*((nn_t)vb[idx + 2]);
        result+= ((nn_t)va[idx + 3])*((nn_t)vb[idx + 3]);

        idx+= 4;
        size-= 4;
    }

    while (size > 0)
    {
        result+= ((nn_t)va[idx])*((nn_t)vb[idx]);
        size--;
        idx++;
    }

    return result;
}
