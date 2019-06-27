#ifndef _LAYER_layer_1_H_
#define _LAYER_layer_1_H_


#include <EmbeddedNetConfig.h>


#define layer_1_type "output"

const sEmbeddedNetShape layer_1_input_shape = {1, 1, 32};
const sEmbeddedNetShape layer_1_output_shape = {1, 1, 5};
const sEmbeddedNetShape layer_1_shape = {1, 1, 32};

#define layer_1_weights_size ((unsigned int)160) //array size
#define layer_1_weights_range ((nn_t)988) //multiply neuron result with range/1024

const nn_weight_t layer_1_weights[]={
99, 31, -8, 38, -30, -2, 23, 13, 26, -5, -6, -51, -10, 13, -1, 4, 
33, 3, -8, -23, -26, 13, -17, -38, -25, 1, -5, 27, -33, -50, -24, -6, 
-56, -21, -3, -89, 11, -1, -18, 83, 43, -8, -22, 60, -7, -6, -73, -36, 
11, 22, 5, -25, -22, 27, 9, 112, -14, -18, -16, 1, 8, 65, -3, -4, 
-18, 18, -22, 45, 25, 9, -19, -119, -34, -24, -17, 44, -13, -5, 78, 127, 
-24, 23, 0, 18, -15, 20, -60, -48, 88, -8, -2, -13, -16, -18, 11, 46, 
-17, -12, -11, 1, -7, -26, 17, 24, -20, 54, 5, -27, 6, 0, -2, -81, 
-13, -30, -3, 37, 17, 0, 114, -7, -34, -64, 100, -27, -14, -13, -18, -33, 
-9, -16, 44, 3, -7, 22, -32, 0, -17, -18, 41, -25, 9, 20, 1, -12, 
-7, 23, 0, -9, 45, -14, -42, -17, -16, 93, -78, -14, -15, 16, -34, 0, 
};




#define layer_1_bias_size ((unsigned int)5) //array size
#define layer_1_bias_range ((nn_t)234) //multiply neuron result with range/1024

const nn_weight_t layer_1_bias[]={
120, 107, 109, 127, 95, };


#endif
