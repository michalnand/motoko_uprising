#ifndef _EMBEDDED_NET_CONFIG_H_
#define _EMBEDDED_NET_CONFIG_H_

#include <stdint.h>

struct sEmbeddedNetShape
{
    unsigned int w, h, d;
};



typedef int8_t   nn_weight_t;
typedef uint8_t   nn_layer_t;
typedef int32_t  nn_t;


/*
typedef float    nn_weight_t;
typedef float    nn_layer_t;
typedef float   nn_t;
*/

#define NETWORK_LAYERS_MAX_COUNT    ((unsigned int)32)
//#define NETWORK_LAYER_OUTPUT_RANGE  ((1 << (7*sizeof(nn_layer_t))) - 1)
#define NETWORK_LAYER_OUTPUT_RANGE  (255)


#endif
