#ifndef _LAYER_layer_0_H_
#define _LAYER_layer_0_H_


#include <EmbeddedNetConfig.h>


#define layer_0_type "convolution"

const sEmbeddedNetShape layer_0_input_shape = {8, 8, 1};
const sEmbeddedNetShape layer_0_output_shape = {8, 8, 4};
const sEmbeddedNetShape layer_0_shape = {3, 3, 4};

#define layer_0_weights_size ((unsigned int)36) //array size
#define layer_0_weights_range ((nn_t)703) //multiply neuron result with range/1024

const nn_weight_t layer_0_weights[]={
127, 11, -80, 19, -11, -7, -18, 1, 30, -29, 19, 70, 13, 16, -14, 20, 
-6, -21, 16, 62, 33, 19, 5, 22, 12, -3, -40, -111, -42, 118, -5, 0, 
11, 46, 10, -27, };




#define layer_0_bias_size ((unsigned int)4) //array size
#define layer_0_bias_range ((nn_t)217) //multiply neuron result with range/1024

const nn_weight_t layer_0_bias[]={
16, -50, -58, 127, };


#endif
