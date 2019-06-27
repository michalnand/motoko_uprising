#ifndef _LAYER_layer_4_H_
#define _LAYER_layer_4_H_


#include <EmbeddedNetConfig.h>


#define layer_4_type "output"

const sEmbeddedNetShape layer_4_input_shape = {2, 2, 8};
const sEmbeddedNetShape layer_4_output_shape = {1, 1, 5};
const sEmbeddedNetShape layer_4_shape = {2, 2, 8};

#define layer_4_weights_size ((unsigned int)160) //array size
#define layer_4_weights_range ((nn_t)1151) //multiply neuron result with range/1024

const nn_weight_t layer_4_weights[]={
-11, -15, -5, -4, 72, 26, 25, -9, -11, -14, -9, -4, -4, -10, -3, 0, 
34, 31, -7, -7, -48, -14, 6, -8, 112, 5, 21, -7, 13, 28, -25, -15, 
-16, -21, -9, -11, -22, 25, -18, 17, 15, -21, 7, -7, -17, -20, -5, -9, 
-80, 13, 5, -7, 113, -56, -1, -1, -53, 14, 2, 20, -21, 27, -12, -16, 
-4, -34, -5, -6, -22, -19, -6, -4, 49, -62, 12, 5, -13, -26, 9, 1, 
13, 11, 0, -21, -48, 90, 2, 16, -32, 3, -5, -4, 17, -25, 2, 4, 
29, -44, 22, -5, -9, -47, -8, -10, -45, 127, -5, 2, 30, -53, 0, 1, 
23, -56, 3, 31, -7, -12, -1, -3, -17, -3, -10, -3, 16, 26, 6, 10, 
11, 112, -1, 27, -15, 12, 1, -1, -12, -37, -3, 4, 0, 108, -4, 4, 
7, 5, -1, 4, -15, -6, -3, -4, -12, -12, -4, -1, 2, 21, -11, 5, 
};




#define layer_4_bias_size ((unsigned int)5) //array size
#define layer_4_bias_range ((nn_t)282) //multiply neuron result with range/1024

const nn_weight_t layer_4_bias[]={
59, 127, 122, 115, 46, };


#endif
