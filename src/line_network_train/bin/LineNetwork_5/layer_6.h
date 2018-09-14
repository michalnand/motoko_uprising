#ifndef _LAYER_layer_6_H_
#define _LAYER_layer_6_H_


#include <NetworkConfig.h>


#define layer_6_type "output"

const sLayerGeometry layer_6_input_geometry = {8, 8, 13};
const sLayerGeometry layer_6_output_geometry = {1, 1, 8};
const sLayerGeometry layer_6_kernel_geometry = {8, 8, 13};

#define layer_6_weights_size ((unsigned int)6656) //array size
#define layer_6_weights_range ((nn_t)1027) //multiply neuron result with range/1024

const nn_weight_t layer_6_weights[]={
1, -1, 1, -1, 1, 1, 1, -1, -1, -1, -1, -1, -1, -1, -1, 1, 
-1, 1, 1, 1, 1, -1, 1, -1, 1, 1, 1, -1, 1, -1, 1, 1, 
-1, 1, 1, 1, -1, -1, 1, -1, 1, 1, -1, 1, -1, -1, 1, 1, 
1, -1, 1, -1, 1, 1, -1, -1, -1, -1, 1, 1, 1, -1, -1, 1, 
-1, 1, 1, -1, -1, -1, -1, 1, -1, 1, 1, 1, 1, -1, -1, -1, 
1, -1, -1, 1, 1, -1, 1, -1, 1, 1, 1, -1, -1, 1, 1, -1, 
1, 1, -1, -1, 1, 1, -1, -1, 1, -1, -1, -1, 1, -1, -1, 1, 
-1, -1, 1, 1, 1, -1, -1, 1, 1, -1, -1, 1, 1, -1, 1, 1, 
1, -1, 1, 1, 1, 1, 1, -1, -1, 1, -1, 1, -1, -1, 1, 1, 
1, -1, 1, 1, -1, 1, -1, -1, 1, -1, 1, -1, -1, -1, -1, 1, 
-1, 1, 1, -1, -1, 1, 1, 1, 1, 1, -1, -1, 1, -1, -1, 1, 
1, 1, 1, 1, -1, 1, 1, 1, -1, -1, 1, 1, 1, -1, 1, 1, 
1, 1, -1, 1, 1, -1, 1, -1, 1, -1, -1, -1, -1, 1, -1, -1, 
1, -1, -1, -1, -1, -1, -1, -1, 1, -1, -1, 1, 1, 1, 1, 1, 
1, -1, -1, -1, -1, 1, -1, 1, 1, 1, 1, -1, 1, -1, -1, 1, 
-1, 1, -1, 1, 1, -1, -1, 1, 1, -1, -1, -1, -1, -1, -1, 1, 
-2, -1, -1, -1, 0, 0, -2, 0, 0, 0, -2, 2, 1, 1, -2, -1, 
1, 0, 0, 0, 1, 1, 1, -4, 1, 2, 0, 10, 4, 5, 19, 5, 
1, 1, 0, 6, 3, -1, 5, 4, 1, 24, 21, 14, -11, -13, -15, -9, 
-1, 85, 59, 44, 1, -1, -19, -16, 0, 60, 38, 15, 7, -4, -2, -4, 
0, 1, 0, 2, 0, 0, 0, 1, -1, 0, 0, 0, 0, -1, 0, -1, 
0, -1, 1, 1, 0, 0, 0, -4, 0, -1, 2, 1, 0, 0, 1, -2, 
0, -1, 0, -1, -1, -3, 0, 10, 0, -11, -1, -2, -2, -3, -1, 2, 
-1, -25, -21, -6, -4, 0, -3, -9, 0, 84, 53, 24, 3, -4, -8, -6, 
-2, 0, 0, 2, -1, 0, 0, 1, 1, -6, -2, -1, 0, 2, 1, 1, 
2, -1, -3, -1, -1, 1, -2, -2, -1, -2, -1, 0, -3, -2, -2, -8, 
-1, -7, 5, -15, -7, 1, -2, -5, 0, -7, 2, -7, 0, 7, 3, 3, 
0, 7, -6, -15, -4, -1, -1, -6, 0, -8, -23, -10, -7, -1, 0, -11, 
2, 0, 1, 0, -1, 0, 0, 0, 1, 12, -4, -2, -2, 0, 0, -2, 
0, 4, -3, 0, -1, -1, 0, 1, -1, 8, -3, 0, 0, -1, 1, 4, 
-1, 3, -4, 0, 0, 0, 2, 1, 0, 20, -6, 2, 0, -1, 2, 6, 
1, 27, -33, 5, -3, -4, 0, 3, 1, 14, -2, 0, -3, -3, 0, 1, 
-1, 1, 0, 1, 0, 0, 1, -1, 0, 0, 0, 1, 1, 3, 0, 2, 
2, 0, 3, -1, 3, 2, -2, -1, 1, -3, 4, -3, -1, 4, 2, 4, 
0, 3, 3, -1, -2, 1, 0, 2, 0, 4, 2, -3, -3, -2, -4, -2, 
0, 1, 9, 3, 2, 1, 2, -7, 0, -9, -4, -5, 3, 4, 5, -10, 
-1, -2, 1, 0, -2, 0, 0, -1, 0, 0, 1, 1, 1, 1, 1, -2, 
0, -1, 1, 1, 1, 2, 1, -2, 0, 1, 1, 1, 0, 0, 0, 0, 
0, -4, 4, 4, 0, -2, -2, 0, 1, -2, 0, 3, 0, 2, 8, -6, 
-1, 0, 9, 11, 13, 0, 8, 3, 1, 0, 1, 0, 0, 0, 0, 0, 
1, 1, 2, -1, 1, 0, 0, 1, -1, 3, 0, 0, 0, -1, 0, -1, 
-1, 3, -1, 0, 0, 0, 0, 0, -2, 2, 0, 0, 1, 1, 0, -1, 
0, 8, -4, 0, 0, 0, 0, 0, -2, 18, 1, -2, -1, -2, 0, 0, 
1, 20, -1, 2, 0, 2, -1, -1, 0, 67, -6, 0, 0, 0, -5, -3, 
0, -1, 1, 0, 0, 0, 0, 0, -1, 0, 2, 0, 0, 0, 0, 0, 
-1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 
-1, 0, 2, -1, 0, 0, 0, -1, 1, 6, 1, -2, 0, 0, -2, 0, 
0, 27, 11, 0, -1, 0, 0, 0, -1, 14, 7, -8, -4, 5, 0, 1, 
-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 
-2, 0, 0, 0, 0, 0, 0, 1, 5, 0, 0, 0, 0, 0, 0, 0, 
6, 3, 0, 0, -1, -1, -1, -2, 2, 6, 2, 0, 0, 0, -2, -1, 
1, 0, -1, 0, 0, 0, -2, 0, -1, -4, 7, -2, 7, 2, 5, 4, 
0, -7, 6, 0, 1, 5, 3, 2, 1, 0, 1, -5, 2, 1, 5, 0, 
0, 2, 7, -8, 0, -1, 0, -5, 1, 1, 10, -7, 2, 0, -3, -2, 
1, -8, 11, -4, 0, 0, 0, -1, -1, -6, 15, 0, 0, 2, -3, -1, 
0, -1, -1, 0, -1, 0, 0, -1, 1, 4, 0, 6, 0, 2, 2, 2, 
1, 3, 0, 3, 2, 2, -1, 3, 1, 4, -5, 2, -4, 0, -4, 4, 
0, 4, -2, 4, 0, 1, 1, 6, -2, 2, -6, 7, -1, 0, 1, -3, 
0, 7, -6, -2, 7, 0, 0, -3, 1, 8, -3, -4, 0, 3, 0, 4, 
1, 0, 2, -1, -2, -1, -1, 0, -1, 0, -2, 3, -1, 0, -1, 1, 
0, 1, -2, 3, 0, 4, 3, 3, -1, 2, 0, 1, -2, 2, 5, 4, 
0, 5, 9, 5, -5, -2, 1, 2, 0, 0, 2, 6, 0, -2, 0, 0, 
1, -3, 1, 9, 0, 2, 7, 3, -1, -2, -1, 7, 3, 2, 2, -2, 
0, 0, 0, 1, 0, -1, 1, 0, -1, 9, 0, 1, 0, -1, 4, 0, 
0, -9, -7, 3, -2, -4, 0, 1, 0, -19, -16, 2, -1, -5, 0, 0, 
1, -43, -16, 7, -2, -4, -3, 1, -1, 81, -38, 9, -3, 0, -1, -1, 
0, 115, 57, 12, -6, 5, 6, -11, -1, -13, 33, 22, 8, -1, -2, 0, 
0, 0, 0, -1, 0, 0, 0, 0, 1, 6, 0, 0, 2, 1, 11, 5, 
1, 2, -2, 3, 0, 1, 1, 4, 0, -1, -1, -8, -3, -7, -13, -6, 
-1, 3, -4, -6, -2, -1, -6, -9, 0, 0, -2, -14, -10, 1, -4, -5, 
-1, -30, -6, -21, -4, -6, 2, -1, 0, -11, 9, 0, -8, -2, -3, 0, 
1, 0, 0, -1, 1, -1, 0, 0, 1, 2, -1, 0, 0, 0, 0, 4, 
0, 5, -3, -2, -2, -1, 0, 9, 1, 0, -4, -3, -4, -3, -4, 3, 
0, -2, -7, 0, -1, -1, -2, -12, 0, 20, -1, -3, 1, 1, -1, -5, 
1, 53, 8, 4, -1, 0, 0, -7, 0, -21, 2, -4, 32, 1, 0, -5, 
0, 0, 0, -1, 0, 0, 0, 1, -1, 2, -1, -4, -2, -3, -3, -2, 
0, -10, 1, 9, 8, 7, 0, -2, -2, -9, -3, 9, 12, 7, 0, -2, 
0, -20, 2, 18, 6, 8, -2, -2, 2, -17, -20, 16, 18, -3, -2, -9, 
0, 0, 20, 8, 0, 1, -7, -25, 2, 5, 9, -11, -3, 0, 0, 0, 
0, 0, 0, 1, 0, 1, -1, 1, 1, -8, 17, -2, 0, 0, 0, 9, 
-1, -9, 2, -2, 0, 0, 0, 2, 0, -13, -1, -4, 0, 0, 0, 2, 
0, -4, -3, -11, -4, -1, 0, 5, 2, -9, -1, -18, -7, -2, 0, 1, 
1, -8, 43, -49, -13, -4, 0, 3, 1, 35, 0, -9, -8, -3, 0, 5, 
0, 1, 0, 1, 1, 1, -1, 0, 0, 0, 2, 5, 2, 3, 5, 1, 
0, 3, -3, 7, 1, 0, 1, 7, -1, 0, 0, 5, -3, 0, -2, 2, 
0, 4, 1, 3, -5, 0, 0, 1, -1, 0, 0, 4, -1, -2, 0, -1, 
-1, -1, -7, 4, 1, 0, 4, 2, 2, 1, -1, 3, 2, 6, 2, 5, 
-1, -1, -1, 1, 1, -1, 1, 1, -1, 0, 0, 0, 0, -2, -2, 2, 
1, 0, 0, 1, 0, -2, -2, 0, 0, -6, -1, 2, 4, 1, 3, -6, 
-1, -1, -8, 0, 5, 8, 10, -3, -2, -3, -5, -1, 9, 3, 4, 7, 
-1, 0, -8, 5, 4, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, -2, -1, 1, 2, -1, 0, -1, 2, 3, 0, 1, 0, 0, -1, 
1, 3, 5, -1, 0, 0, 0, 0, 0, 3, 6, -3, -3, -3, -2, 0, 
0, -3, 10, -2, -1, -2, -1, -3, 0, -7, 12, 0, 0, 0, -2, -4, 
0, -6, 17, -4, -1, 1, -1, -3, 1, -26, 54, 3, -16, -3, -2, -6, 
-2, 1, 0, 1, 0, -1, 0, 0, -1, -4, 0, 3, 0, 0, 0, 0, 
0, -5, -1, 1, 0, -1, 0, -1, 1, 4, -1, 0, -1, 0, -1, 0, 
0, 12, 0, 1, -4, -1, 0, 1, 0, 7, 7, 4, 0, -1, 0, 0, 
2, -11, 2, 5, 2, 2, -1, -2, 0, -2, 4, 19, 4, 3, 1, -4, 
0, 0, 1, 0, 0, 0, 0, 0, -1, 0, 0, 0, 1, 1, 1, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 
4, 0, 0, -1, -1, -1, 0, -2, 0, 2, 1, 0, 0, -1, -1, -1, 
0, 2, 3, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 
1, 0, 1, 0, 0, 0, -2, -1, -1, 5, -5, 2, -6, 2, 1, -3, 
2, 2, -6, 0, -11, 1, -4, -4, 0, 2, -1, 4, -8, 2, -4, 0, 
-1, 0, 0, 7, -7, -2, -3, -1, 0, -2, -2, 10, -5, -1, 0, 0, 
1, -5, -11, 11, -3, 5, 1, 0, -1, -4, -10, 13, -5, -3, 3, 1, 
0, 0, 0, 0, -1, 1, -1, -1, -1, -4, 4, -4, 0, 2, -5, 5, 
-1, -2, 1, -2, 0, 1, 0, 2, 0, 0, 1, -1, 3, 0, 1, 0, 
-1, 3, -1, -6, 0, 3, 0, -3, 2, 3, 3, -10, 5, 3, 0, 0, 
1, 2, 6, -2, -5, 3, 6, 0, 1, 3, 5, -3, -4, 2, 2, 0, 
1, -2, 2, 1, 0, 0, -1, -1, -1, 3, 3, -3, 3, 0, 0, 3, 
0, 0, 5, 3, 2, -4, -2, 0, -1, -3, 0, 2, 6, -6, -3, -5, 
1, -5, -3, 3, 6, -1, 0, -2, 0, -7, -2, 0, 4, -1, -1, -4, 
-2, -1, -3, -1, 8, -1, 5, 0, 0, 0, -4, -4, 5, -2, 3, -2, 
1, 0, 0, -2, -1, 0, -1, 2, 0, -12, 0, -4, 1, 0, 0, 9, 
1, 29, -13, -19, 7, 0, -1, 0, 0, 42, -10, -12, 14, 0, -1, -1, 
0, 62, -6, -20, 7, -2, 0, 0, -1, -21, 9, -30, 23, -1, 0, 0, 
0, -39, -43, -66, 29, 1, 3, -7, 1, 20, -19, -22, -7, 2, 0, -8, 
-1, 1, 1, -1, 0, 1, -1, 0, 0, -6, 5, -4, -3, 0, -5, -5, 
1, -4, 2, -3, -2, -2, 0, -2, 0, -4, 0, -2, 0, 0, 0, 0, 
-1, -3, 7, -4, 3, 1, 0, 0, 0, 4, 5, 8, 5, -2, -2, -1, 
0, -4, 5, 8, -5, -4, -8, 5, 1, -38, -59, -59, -19, 0, -4, 4, 
1, -1, 1, 0, 1, 0, 1, 0, -1, -2, 1, -2, -1, -2, -2, -6, 
0, -1, 4, -2, 1, -1, -1, -4, -2, 6, 6, -4, 1, 2, 0, -1, 
0, 10, 15, 0, -1, 1, 0, 0, -1, 0, 18, 1, 0, 3, 1, -1, 
0, -8, 32, 1, 13, 3, 2, -1, -1, -8, -6, -6, -19, -7, -7, -8, 
-1, 0, -2, 2, -1, 1, -1, -2, 0, 6, 8, 9, 9, 2, -2, -3, 
-1, 62, 15, -1, -4, -6, -5, -6, 0, 38, 33, 3, 0, -3, -4, -5, 
0, 39, 34, 18, 12, -1, -1, -3, 1, 22, 54, 58, 2, 4, -4, -5, 
-1, 6, -2, 85, 1, -1, -4, 0, 0, 0, -28, -19, 4, -2, -2, -2, 
-1, 1, 1, 1, 0, -2, -1, -2, 1, -1, -17, -1, -9, -2, 0, 0, 
-1, 8, 4, -4, -8, -1, 0, 3, -1, 6, 7, 0, -10, -2, 0, 2, 
0, 4, 9, 8, -7, -3, 1, 1, -1, -3, 13, 18, -4, -4, 0, 2, 
-1, -6, -22, 53, -5, 10, 1, -2, 1, -17, 65, 9, -29, 12, 2, -9, 
-1, 0, 1, -1, 1, -2, 0, 0, 1, 2, 0, -4, 3, 0, -2, 4, 
0, 3, 5, 1, 3, 0, 0, 0, 0, 4, 2, 3, 3, -2, -3, -3, 
-1, 0, 0, 4, 7, 1, -2, -2, -1, 8, 0, -2, 4, 0, 2, 0, 
1, 8, 0, -6, 5, 2, 2, 1, 0, 9, 2, -3, 8, -2, 4, 1, 
-2, 0, 0, -2, 0, -1, -1, 1, -1, -1, -2, 2, 5, 5, 4, -3, 
0, -4, -2, 0, 7, 6, 7, 0, 0, -2, 0, 0, 0, 4, 5, 4, 
2, -2, 0, -3, -3, 1, 2, 4, 0, -1, -1, -7, 2, 3, 3, 3, 
-2, 0, 1, -10, 4, 1, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, -2, 0, 1, 1, -1, -1, 2, -2, -2, -3, 0, -3, 0, -1, 0, 
-2, -6, -2, 2, -3, -1, -1, -1, -1, -3, -4, 1, -2, 0, 0, 0, 
0, 0, -4, 2, -1, 0, 0, -1, -1, -4, -7, 7, -1, 1, 0, -1, 
0, -4, -11, 18, 0, 0, -1, -1, 1, -14, -31, 62, 5, 0, -1, -1, 
-1, 2, -1, 1, 1, -1, -2, -1, -1, 9, 2, -2, 0, -1, 0, 1, 
-1, 9, 1, 0, 1, -1, 0, 0, -1, 1, 2, 3, 3, -3, 0, 0, 
0, -4, 1, 3, 7, 0, 0, -1, 1, -1, -2, 4, 6, 2, 0, -1, 
2, -6, -6, 4, 3, 1, 1, 0, 1, -8, -12, 4, 4, 1, 0, -2, 
4, 0, 0, -1, -1, 0, 0, 0, 2, -1, 0, 0, -2, -1, -1, 0, 
1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, -2, 0, 0, 1, 0, 0, 0, 0, 
-1, -1, 1, 0, 0, 0, 0, 0, -1, -2, 1, 1, 0, 0, 0, 0, 
1, -1, -1, -1, 0, 0, 0, -1, 0, 0, 4, 1, 8, -3, 7, -1, 
1, 2, 5, -1, 9, -2, 8, -2, 0, 0, 3, 0, 10, -3, 3, 0, 
0, 5, 1, 1, 8, -3, 5, 0, -1, 3, 3, -1, 3, -2, 3, 0, 
0, 4, -2, -8, 4, -3, 6, 0, -1, 1, 1, -12, 8, 1, 7, 2, 
0, 0, -1, -2, 0, 1, 1, 1, 1, 4, 0, 1, -1, 2, 3, -2, 
0, 3, 5, 4, 0, 3, 1, 3, -1, 0, 4, 2, -5, 2, 2, 1, 
-2, -5, 1, 1, 0, 5, 7, -2, 2, -2, 2, 6, 0, 0, 2, 0, 
-1, -2, 1, 0, -3, 3, 1, 1, 0, -3, -3, 3, 2, 0, -1, -3, 
-1, -1, 1, 1, 0, 0, -2, 1, 1, 0, -4, 0, 0, 6, -2, -3, 
0, 0, -2, 1, 3, 4, 0, 0, 2, -1, 0, -1, 0, 7, 0, 0, 
1, -6, 0, 0, 3, 4, 1, 2, 1, -1, 0, 0, 0, 5, 1, -1, 
0, 3, 0, -1, 1, 4, 0, 0, 1, 0, 0, -1, -2, 8, 0, -4, 
1, -1, 0, 0, 1, -1, -1, 0, 0, 8, 2, 20, -4, -5, 3, -11, 
0, -7, 21, 29, 26, -17, -3, -2, -1, -4, 20, 19, 2, -6, -1, -2, 
0, 1, 10, 21, 9, 4, 0, -2, 0, -5, 4, 33, -1, 0, -1, 1, 
1, -3, -18, 72, -24, 9, -2, 0, 1, -18, 7, -29, -36, -20, 0, -3, 
-2, 0, 1, -1, 1, -1, 0, 0, 1, -7, -6, 6, -4, -2, 5, 0, 
0, -4, -1, 1, -2, 0, 0, -1, 0, 0, -1, 0, -2, -1, 0, 0, 
0, 0, 2, 4, -8, -1, -2, 0, -1, 0, -2, 0, -2, -3, -3, 0, 
-1, -3, -14, -5, -10, -3, 0, -1, 0, 7, 44, 57, 23, 12, 14, -6, 
0, 1, 1, -1, -2, 0, 1, 1, 0, 2, 2, 9, -1, 4, 0, -2, 
1, -1, 1, 11, -1, 2, 0, -2, -1, -1, 0, 13, -2, 2, 0, -1, 
-1, -2, 0, 11, 0, 0, 0, 0, 2, -3, -4, 9, 0, 1, 2, -1, 
1, -4, -6, 6, -5, 3, 5, -3, 0, -5, 0, 24, 29, 84, -6, 0, 
-1, 1, 0, 0, 1, 0, -1, -2, 1, -17, -4, -2, -11, -15, -14, -3, 
1, -42, -7, -12, -9, -18, -9, -9, 0, -25, -19, -14, -18, -13, -6, -5, 
0, -16, -28, -20, -15, -17, -8, -7, -1, -2, -29, -66, -1, -15, -4, -8, 
0, -2, -4, -57, 17, -1, -4, -10, -2, 8, 33, 44, 34, 63, 2, -5, 
1, -2, -2, 1, 0, 1, 0, 0, 2, 0, 7, 12, 20, -20, -7, -12, 
0, 0, 0, 9, 13, 0, 2, 3, 0, 0, -2, 6, 14, 1, 2, 1, 
2, 0, -4, 2, 13, 4, 1, 1, -1, -1, -5, -3, 12, 5, 0, 1, 
-1, -4, 0, -11, 22, 0, 0, 3, 0, -23, -52, 79, 21, -14, 7, -4, 
0, 0, -1, 0, 0, -1, -1, 1, -1, 1, 3, 3, -1, 1, -6, -3, 
1, 2, 1, 1, -3, 4, -1, 0, 0, 0, 0, -1, 0, 6, 0, -1, 
1, -3, 5, -1, -3, 1, 2, 0, 0, -2, 3, 2, -2, 5, 1, 3, 
-1, 4, 4, -1, -6, 2, 2, 3, -1, -2, 2, 2, 0, 9, 0, 3, 
-1, -1, 1, 0, -2, -1, 1, 0, 0, -1, -7, 0, 0, 2, 4, 6, 
0, 3, -7, -2, -1, 2, 4, 5, -1, 2, -6, -3, -1, 0, 3, 5, 
1, 6, -3, -4, 0, 1, 1, 6, -1, 3, -1, -4, -7, 2, 3, 4, 
0, 3, 2, 0, -21, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 1, -1, 1, 1, 0, 1, 1, -1, -1, 2, 1, 4, -4, 0, -1, 
-2, 0, 0, 0, 3, -4, -1, 0, 0, -1, 0, 0, 3, -3, -1, -1, 
0, -1, 0, 0, 3, -3, -1, -1, 1, 0, 0, -2, 4, -3, -1, -2, 
1, -2, -5, -9, 2, -3, -1, -1, 1, -12, -23, -53, 9, 4, -5, 0, 
1, 0, 0, 1, -1, 1, 0, -1, 0, 0, 0, 1, 3, 5, -4, -1, 
-1, 0, 1, 1, 3, 8, -2, 0, 0, 0, 1, 0, 1, 6, 0, 0, 
-2, 0, 0, 0, 0, 2, 0, -1, 0, 0, 1, 0, 0, 0, 0, -1, 
1, 3, 2, -2, 0, -2, 0, 0, 0, 5, 2, -9, 1, -6, 0, -1, 
-3, 0, 0, 1, 2, 0, 0, -1, -1, 0, 0, 1, 1, 0, -1, -1, 
0, 0, 0, 0, 1, 0, 0, 0, 0, -1, 0, 0, 1, 0, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 0, -1, 0, 0, -1, 0, 0, 0, 0, -2, 0, 0, 0, 0, 0, 
0, 1, 1, 0, -1, 1, -2, 1, 2, 0, 0, -2, -5, 3, -3, 3, 
2, 1, 0, 2, -2, 4, -6, -3, -2, 4, 2, 4, -2, 7, -3, 2, 
0, 4, 3, 5, 2, 9, -8, -1, -1, 2, 1, 4, 0, 3, -9, 0, 
1, 8, 1, 5, 1, 8, -8, 4, 0, 10, 3, 9, -2, 4, -17, 0, 
2, 1, 0, 0, 1, 0, 1, 1, 0, 2, -3, 3, 4, 2, 1, -3, 
0, 3, -2, 2, 7, 0, 2, -1, 0, 2, -1, 3, 11, 0, -1, -2, 
0, 3, 9, 6, 7, -3, 2, 0, 1, 5, 1, 2, 5, -3, 2, -1, 
0, 3, 4, 5, 3, -7, 2, 0, 0, 1, 0, 2, 5, -9, 4, 0, 
0, 0, -1, 0, 0, 1, 0, -1, -1, -6, -5, -1, -4, -10, 5, -3, 
0, -6, -3, -3, -6, -1, 3, -2, -1, -4, -2, 0, -4, -3, 4, -4, 
-1, -2, 0, 0, -6, -4, 5, -2, 0, -5, -2, -2, -3, 0, 3, -3, 
0, 0, 1, -2, 0, 1, 5, -2, -2, -1, 0, 0, 0, 4, 4, -1, 
-1, -2, 0, 2, 0, -1, 1, 0, -1, 0, 0, -10, 11, -1, 11, 21, 
-1, -1, -1, -9, -25, 28, 32, 12, -1, 0, 0, -1, -7, 12, 35, 14, 
0, 1, 1, -1, -11, 9, 47, 8, 0, -7, 3, 4, -11, 13, 60, 0, 
-1, -8, -4, -4, 20, 26, 127, 4, 0, -1, -1, 30, 41, 41, 30, 9, 
0, -1, 0, 1, 0, -2, -1, -1, 0, 4, 0, -9, 2, -3, -9, 1, 
2, 1, -3, -5, -1, -1, 0, 1, 0, 1, -3, -2, -3, -1, -1, 1, 
-1, 0, -2, -3, 0, -2, -6, 0, -1, -4, -5, -6, 2, -5, -7, 0, 
0, -3, -6, -7, -2, 1, -1, -1, 2, 2, -11, -5, -23, -19, -14, -20, 
0, -1, -1, 0, 0, 1, -1, 0, 0, -2, -2, -6, 6, -3, 0, -5, 
0, -1, -2, -5, 6, -1, -1, -4, 0, 0, -2, -4, 8, -3, -1, -4, 
1, 0, -3, -3, 8, -3, -2, -6, 0, 0, -3, 0, 5, -6, -4, -6, 
-1, -1, -2, 0, 13, -38, -13, -11, 1, -4, 0, -9, -12, -52, -24, -7, 
0, 2, 0, 1, 1, 0, -1, -1, 0, -26, -2, 0, 4, 11, 23, 1, 
1, -14, -5, 7, 3, 13, 19, -11, -1, -5, -6, 5, 1, 11, -1, -17, 
-2, -4, -6, 1, -6, 12, -10, -5, -2, -5, -2, -15, -3, -4, -7, -7, 
0, -2, -1, -7, 1, -2, 3, -2, -1, -5, -1, -9, -32, -69, -22, 3, 
0, -1, -1, 0, 0, 0, 0, 0, -1, 0, 1, -1, -1, 35, 3, 14, 
0, 0, 0, -1, 1, 8, -5, -4, -2, 0, 1, 0, 2, 5, -8, -4, 
1, 1, 1, 1, 2, 6, -8, -2, 1, 0, 1, 3, 1, 9, -17, -6, 
0, 0, 1, 2, 0, 10, -24, -1, -1, -1, 5, -58, 30, 15, 26, 22, 
-2, 0, -1, -1, 0, 1, -1, 0, 0, -3, -6, -1, 3, -1, 5, -1, 
0, -3, -2, 0, 8, -4, 4, -1, -1, -2, 2, 1, 6, 0, 5, 1, 
2, -2, -2, 3, 5, 2, 2, -2, -1, 0, 3, 2, 1, 0, 2, 0, 
1, 1, 0, 4, 0, 0, 4, -6, 0, 2, 0, 2, 3, -4, 3, -4, 
0, 1, 0, -1, 0, 1, -1, 0, 0, 7, 8, -4, -2, -2, 0, 2, 
2, 4, 6, -4, -4, -3, -1, 0, -1, 4, 3, -4, -3, -2, 0, 0, 
1, -1, 0, -2, -2, -2, 0, -1, -2, -1, -2, -3, 0, -2, -4, -1, 
1, -3, 0, -6, 1, -2, -2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, -1, -1, 1, 0, 1, 0, -1, 0, 0, -1, 1, 1, 9, 0, 0, 
0, 0, 0, 0, 2, 8, 0, 0, 2, 0, 0, 1, 2, 9, 0, -2, 
2, 0, 0, 1, 2, 7, 0, -1, 0, 0, 0, 1, 2, 5, 0, 0, 
1, 0, 1, 0, 1, 3, -2, -1, 0, 2, 6, 1, 0, 11, -9, -1, 
1, 1, -2, 0, 1, 1, 1, 1, -1, -2, -2, -1, -1, 1, 9, 0, 
0, -1, 0, -1, -3, -2, 6, 0, -1, -1, -1, 0, -2, 0, 6, 0, 
0, -1, -1, 0, -1, 3, 6, 0, -1, -1, -1, 0, 0, 3, 6, 0, 
-1, -1, 0, 0, 1, 3, 3, -2, 1, 0, 0, 1, 1, 1, 0, -4, 
-1, -1, -1, -1, 0, 1, 0, 0, -1, -1, -1, -2, -1, 0, 0, 0, 
-1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 
0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 
-1, 0, 1, 0, 1, 1, -1, 1, 0, 3, 1, -2, -2, 0, -4, -1, 
0, -1, 1, -2, 0, -1, 3, 5, 0, -2, -2, -5, 0, -4, 4, 0, 
-1, 1, -3, -1, 1, -4, 6, -4, 0, 1, 2, 1, 2, -8, 14, -9, 
-1, 0, 1, 5, 0, -7, 14, -17, -2, 5, 5, -5, 5, -6, 12, -17, 
2, -2, 0, -1, 1, 1, 1, -1, 1, 4, 0, 0, 0, 0, 0, 3, 
-1, 0, 1, -3, 0, 0, 1, 5, 0, -1, 2, -5, -4, 4, 2, 3, 
0, 0, -3, -4, 0, 4, -5, -3, 1, 0, 0, -3, -2, 4, -12, 5, 
1, 3, 4, 1, 0, 7, -9, 6, 1, 2, 1, 0, 0, 2, -6, 0, 
-1, -1, 0, 2, -1, 1, 0, 0, 2, 3, 2, 1, 3, 5, -1, 0, 
-1, 0, 0, 2, 1, -4, -3, 4, 0, -6, 0, -1, 0, 0, -3, 8, 
1, -4, -2, 0, 2, 0, -4, 9, -2, -3, -1, 0, -3, -3, -2, 8, 
0, 0, 0, 2, 0, -1, 0, 7, 1, 4, 2, 2, 0, 0, 0, 5, 
0, 1, 1, -1, 0, -1, 1, -1, 0, 0, 0, 0, -3, 14, -25, -18, 
0, 2, 0, -1, 0, 2, -18, 3, 0, 0, 0, -3, -1, 3, -32, 8, 
0, -1, 1, -2, -1, -6, -45, 30, -1, -5, 3, -2, 0, -6, -60, 48, 
1, -6, -2, 6, 0, -21, -122, -10, 0, -1, -3, 0, 1, -25, -45, 2, 
1, -1, 1, 0, 0, 1, 0, -2, 0, -1, 1, -1, -7, 1, -6, -4, 
1, -5, -2, -8, -12, -5, 0, 0, 0, -3, -1, -10, -8, -9, 8, 1, 
0, 0, -1, -4, -12, 8, 34, -4, 1, -4, 0, 1, -2, 2, 30, -2, 
1, -11, -9, -12, -8, 3, 21, -16, 0, -9, -11, -4, 10, 0, 17, -2, 
2, 1, 0, 2, 1, 0, -2, 0, 0, -1, 0, 0, -3, 2, 2, 1, 
2, -3, -2, -3, -5, 4, 8, 0, -1, -2, 0, -2, -4, 9, 0, -1, 
0, -1, 0, -2, 0, 7, -1, -5, -1, -1, 0, 0, -1, 11, -5, -9, 
0, -2, 0, 3, 0, 57, -19, -5, -1, -12, -10, -9, -16, -8, 17, -8, 
0, 1, -1, 2, -1, 0, 0, 0, 0, 51, 2, -1, -1, 3, -6, 11, 
1, 7, -2, -3, 1, -1, -1, 37, 0, -8, -5, -3, 4, 0, 17, 53, 
-2, -11, -11, 0, 8, 0, 40, 56, 0, -10, -8, -3, 7, 22, 24, 76, 
-2, -6, -4, -2, -2, 9, 9, -24, -1, 0, 2, 0, 8, 12, 8, -6, 
0, 0, 0, 0, 0, 0, 1, 1, -1, -2, -2, -3, -4, -3, 8, -27, 
2, 0, 0, 0, -2, -2, 9, -4, 0, 0, 0, 0, -2, 0, 13, -15, 
0, 0, 1, 0, -2, -2, 12, -14, -1, 0, 0, 0, 0, -3, 19, -12, 
0, 0, 1, 1, 1, -6, 33, -6, 0, -1, -5, -8, -9, 4, -34, -16, 
0, 0, -1, 0, 0, 0, 0, -1, -1, -1, 4, 0, 2, 1, 3, 3, 
-1, -1, 1, -2, -2, 3, 0, 4, 0, 0, 0, -1, -2, 1, 0, 5, 
0, -1, 2, 0, 3, 0, -1, 8, 0, -2, 4, 0, 4, 1, 2, 5, 
-1, 2, -1, 0, 1, 3, -2, 9, 1, 3, 3, 6, 5, 6, -3, 6, 
0, -1, 0, 0, -2, 0, 1, -1, 0, 0, 0, 2, -4, 1, -4, -1, 
0, 1, 0, 3, -2, -1, -5, -1, -1, 2, 2, 2, -4, -5, -3, 0, 
0, 1, 0, -2, -6, -4, -1, 3, 1, -3, -4, 1, -6, 0, 0, 1, 
2, -1, 1, 3, -6, 0, -4, 1, 1, 0, 0, 0, 0, 0, 0, 0, 
1, -1, -1, 1, -1, 0, 2, 0, 0, -1, -2, -1, -1, 0, 3, 2, 
0, -3, -2, -2, -2, -1, 3, 5, 0, -1, -2, -3, -1, 0, 4, 6, 
-1, 0, -1, -1, 0, 2, 9, 0, 0, 0, 0, -1, 0, 3, 9, -4, 
-2, -1, 0, 0, 1, 1, 11, -6, -1, -2, -1, 2, -7, 4, 38, -10, 
0, 1, 0, -2, 0, 0, -1, -1, 1, -1, -1, 0, -1, -1, -1, 4, 
0, -2, -1, -1, -2, -1, 0, 6, 1, -3, -1, -1, -1, -2, 0, 4, 
0, -1, -1, -1, 0, -1, 0, 1, 0, 0, -1, -1, -1, 0, 1, 0, 
0, -1, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 2, 0, -6, 3, 
1, 0, 1, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
-1, 0, 0, 0, 0, 0, 0, 1, -2, -1, 0, 0, -1, 0, 0, 1, 
0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 
0, 0, 0, 0, -1, 0, 0, -3, 0, 0, 0, -2, 0, 0, 0, -1, 
0, -1, -1, 1, 0, 0, 1, 1, 1, 4, 5, 5, 2, 6, 1, 4, 
-1, 9, 7, 3, 0, 5, -6, 1, 0, 3, 6, 1, 2, 6, -4, 5, 
-1, 5, 4, 0, 0, 6, -7, 13, 1, 2, 0, 5, 0, 5, -11, 8, 
-1, 3, 5, 0, 5, 1, -11, 5, 0, 2, 4, 8, 4, 8, -5, 0, 
1, -1, 0, 1, -1, 0, 2, 0, -2, -2, -1, 0, 1, 3, 1, 0, 
1, -1, 2, 3, -1, 1, 0, 0, 0, 3, -1, -2, 0, -3, 1, -3, 
0, -2, -1, -2, -5, 0, 4, 2, -2, -4, -1, -4, -3, 0, 3, -4, 
1, 0, 0, 0, -7, 6, -1, 0, 0, -2, 0, 3, -3, 4, 0, -3, 
-1, 1, 0, 1, 0, 0, -1, 1, 0, 0, 0, 0, 1, 0, 0, -1, 
0, 3, 0, 0, 3, 3, 2, -1, 0, 4, 0, 0, 0, 3, 2, 0, 
0, 1, 3, 2, 4, 2, 1, -1, 0, 1, -2, 4, 4, 0, 0, -3, 
-1, -1, 0, -1, 2, 3, 0, 0, -1, 7, 1, 3, 0, -1, 2, 5, 
-1, -1, 0, -1, -1, 1, 0, -1, 0, -1, 0, -2, -3, -7, 44, -8, 
1, -2, -2, -1, 0, -6, -8, -10, 0, 0, -2, 0, 0, 0, 3, -23, 
0, 5, 1, -1, 3, 0, 1, -46, 0, -13, -3, -4, 2, -5, 0, -44, 
0, -6, 2, 9, 4, -19, -11, 41, 2, -1, -2, 2, -3, 1, -5, -34, 
0, 0, 0, 0, 1, 0, 0, 1, -1, 9, 4, 10, 5, 3, 10, 2, 
0, 13, 9, 13, 12, 9, -2, -4, 1, 6, 7, 13, 11, 8, -11, -7, 
-1, -7, -11, -11, -12, -10, -6, 8, 0, -5, -11, -2, -4, 10, 46, -11, 
0, -8, -12, -2, 1, -9, 0, 7, 1, -9, 4, 9, 19, 29, -32, 78, 
0, 0, 1, -1, 0, 0, 1, 1, 2, 2, 1, 0, 0, 0, 3, -17, 
1, 3, 2, 2, 1, -2, 1, -13, 0, -1, 0, 0, 0, -5, 13, -12, 
1, -4, -4, -5, -2, -1, 22, -15, 0, -1, -2, -3, -4, -15, 21, -39, 
1, -3, -1, -2, -11, -14, 73, -55, 1, -19, -16, -11, -12, -43, -22, -30, 
-2, -1, -2, 0, 0, 0, 0, 0, 0, -7, 0, 1, 1, 6, 0, -4, 
-1, -1, 2, 1, 4, 4, -1, -4, 1, 9, 0, 3, 1, -3, 1, -14, 
1, 22, 8, 0, 8, 0, -3, -27, 1, 15, -3, 13, -8, -1, -7, -26, 
0, -16, -8, -10, -9, 11, 24, 29, -1, -2, 3, 4, -1, -4, 20, 20, 
1, 0, -1, -1, -2, 1, 0, 0, 0, -5, -5, -1, -1, -9, -7, 59, 
0, -5, -1, 0, 0, -3, 0, 10, 0, -4, -1, 0, 0, -3, -4, 27, 
1, -5, -2, 0, -1, -1, 2, 25, -1, -7, -1, -1, -1, -5, 5, 38, 
1, -9, 0, 0, -3, -8, 5, -9, 0, -9, -9, -16, -12, -11, 13, -64, 
1, -1, 1, -1, 0, -1, 1, 1, 0, 6, 0, 1, 3, 1, 1, 2, 
0, 4, 0, 0, 0, 2, -1, 0, 0, 2, -2, 2, 3, 2, 0, -4, 
0, 0, -6, -3, -2, 8, 2, -8, 1, 0, -5, 1, 0, 8, -3, -3, 
-1, 1, -1, -1, 6, -5, -12, -9, 1, 7, 4, 2, -5, 5, 0, -2, 
1, -1, -1, -2, 0, 0, 0, -1, 0, 6, 6, 7, 8, -6, -3, -3, 
1, 5, 6, 5, 9, -5, -2, -1, -1, 9, 7, 9, 14, -1, -4, -6, 
0, 15, 15, 19, 18, -5, -7, -12, 0, 6, 7, 23, 16, -13, -10, -2, 
0, 0, 7, 11, 17, -10, -5, 1, 0, 0, 0, 0, 0, 0, 0, 0, 
1, 0, 0, 0, 1, 0, -2, 2, -1, 0, 1, 0, -1, 0, -3, -2, 
0, 2, 3, 3, 0, 0, 0, -3, 0, -1, 2, 2, 0, 1, -2, -1, 
-1, -4, -2, -3, -3, -2, -8, 11, 0, -3, -4, -2, -3, -3, -4, 6, 
1, -4, -2, -2, 1, 2, 3, -1, 0, -12, -8, -5, 23, 4, 0, -21, 
2, 0, 0, 0, 2, 0, 2, 1, 0, 2, 0, 0, 0, 0, 0, 0, 
0, 1, 1, 1, 2, 2, -1, -4, 0, 1, 0, 0, 0, 1, -3, -2, 
-1, -3, -1, -1, -2, 0, -3, 5, 0, -5, -1, -1, -3, -1, -4, 5, 
-1, -6, -3, -3, -2, -4, -5, 0, -1, -7, -2, -5, -3, 2, 4, -15, 
0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, 1, 
1, 0, 0, 0, 0, 0, 1, 0, 2, 0, 1, 1, 1, 0, 0, 0, 
0, 0, 0, 0, 0, 0, -2, 2, -3, -3, -1, -1, -1, 0, 3, 5, 
-2, -1, -2, -1, 2, 3, 1, 0, 0, -1, -1, 1, 0, -2, 0, -1, 
0, 1, 0, 0, 1, 1, 1, -1, 1, -3, 0, 0, -2, -2, 2, 0, 
0, -7, -4, -4, -1, -6, 0, -1, -1, -3, 2, 3, -1, -2, 3, -7, 
-1, -8, 1, 0, -1, -3, 2, -5, 0, -8, -3, -5, 0, 1, 0, 2, 
0, -5, 0, 0, 0, -7, -5, 5, 1, -6, -4, -5, -13, -16, 1, 7, 
-1, -1, 1, 0, 0, 0, 2, -1, -1, 1, 1, 0, 1, 1, 6, 3, 
-1, 5, 0, -1, 0, 0, 7, -2, 2, 0, 0, 4, -1, 5, 4, 2, 
2, 4, 1, 0, 0, 2, 7, 0, 2, 1, 0, -1, -3, 0, 9, -8, 
1, -3, -1, -5, 3, -1, 11, -9, 1, -2, 6, -1, 4, 4, 15, -1, 
-2, 0, 0, 0, 0, 0, 0, 1, 0, 3, -3, 1, 0, 1, 0, -3, 
1, 0, 2, 0, 1, -1, 0, -2, 2, 3, -3, 0, 1, -1, 0, -1, 
0, 0, -5, -2, 0, -3, -2, -6, 1, 3, 1, -2, 0, 0, 5, 2, 
0, 3, 2, -1, -2, -5, -3, -2, 0, 3, -1, -1, -3, -4, -8, -1, 
-1, 0, 1, -1, 0, 0, 0, 1, 0, -1, -1, -1, 0, 0, -40, 11, 
1, -4, -1, -1, -3, -1, 1, -1, -1, -4, -2, -1, -2, -1, -1, 5, 
-1, -6, -4, -2, -6, 0, 0, 4, 0, -4, 0, 0, -5, 1, 3, -1, 
1, -20, -17, -10, -7, -6, 2, -24, 0, -7, -2, -4, -6, -1, 20, 31, 
1, -1, -1, -1, -1, 1, 0, 2, -1, -4, 0, -4, 4, -1, -4, 2, 
0, -3, -2, 0, 4, -3, 1, 6, 1, 0, 0, 0, 2, 3, -2, 6, 
0, 8, 9, 19, 29, 9, -16, 2, 0, -12, -7, -1, 19, 11, -47, 32, 
1, -21, -15, -2, 27, 20, 10, 21, 0, -5, -17, -14, -7, -17, 25, -45, 
-1, 1, 2, -2, -1, 1, 1, 0, 0, 0, -1, 0, -1, -1, -4, 27, 
0, 0, -2, 0, 1, -1, -7, 20, 0, 1, -1, 0, 0, -2, -8, 21, 
0, 0, -2, 0, 0, -1, -15, 33, 1, -5, -4, -1, 1, 7, -11, 61, 
1, -11, -9, -8, -4, -12, -47, 94, 0, -10, -18, -4, -7, 31, 50, 67, 
1, 0, -1, 1, 0, 0, 0, -1, 1, -6, -2, 0, 0, -5, 1, 0, 
0, -3, -2, 0, -4, 0, 0, -5, 1, -3, 0, -4, 0, 1, -2, -6, 
-1, -6, -3, -2, -8, -5, -11, -6, -1, 0, 5, 0, -12, -8, -2, -29, 
2, 9, 4, -5, -7, -16, -21, 17, 0, 1, 8, 1, -3, 3, -6, -5, 
0, 0, 0, 1, 0, -1, -1, 0, 0, 2, 3, 0, -3, 1, 1, -45, 
-1, 1, -1, 0, -1, 0, -6, -12, 1, 1, 0, 0, -1, 0, -5, -19, 
0, 2, 0, 0, 0, 0, -12, -19, 1, 0, -1, 1, 0, 1, -11, -33, 
-1, 2, 2, 1, 1, 1, -17, 9, 0, 1, -1, 4, 6, 1, -18, 66, 
0, 0, -2, -2, 1, 0, -1, -1, 0, 2, 2, 3, 0, -1, 3, 0, 
0, 1, 0, 7, 1, 0, 1, 2, -1, 3, 4, 2, 0, -2, 2, 4, 
-1, 3, 6, 3, 5, -4, 1, 5, 1, 0, 0, -2, 0, -6, 5, -2, 
-1, 0, -3, 2, 0, -1, 5, 3, 0, 4, 7, 5, -4, -10, -1, -3, 
0, -1, 1, -1, -1, 0, 1, -2, 0, -9, -6, -8, -8, 0, 0, 0, 
-1, -10, -4, -7, -10, 1, -1, -1, -1, -12, -7, -7, -10, 1, -2, 0, 
-2, -13, -8, -10, -11, 3, -4, 3, 0, 1, 7, -11, -13, 3, -4, -8, 
-1, 0, -12, -15, -14, 4, -5, -6, 0, 0, 0, 0, 0, 0, 0, 0, 
-1, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0, 0, 0, -2, 2, 3, 
0, 0, 0, -1, 0, -1, 0, 2, -1, 0, 0, 0, 0, -2, 1, 2, 
-1, 2, 2, 2, 1, 0, 2, -3, 0, 0, -1, 0, -1, -1, 0, 7, 
1, 1, 0, -3, -6, -7, -7, 17, 1, 3, 1, -8, -14, -23, -15, 45, 
0, 0, 0, 2, 0, 1, 1, 1, -1, -3, -1, -1, -1, -3, -2, -4, 
0, -2, -2, -2, -1, -3, 0, -1, 0, -2, 0, 0, 0, -1, 0, 0, 
1, -3, 0, 0, 0, -1, 0, -3, 1, -5, -4, -2, -1, -2, 0, -1, 
2, -2, -3, -2, -3, -1, 1, 8, -1, -3, 0, -2, -7, -7, 0, 23, 
0, 0, 1, 0, 0, 0, 0, 1, -1, 0, 0, 0, 1, 0, 0, 0, 
0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
0, 1, 0, 0, 0, 0, 1, 0, 0, 2, 0, 0, 0, 0, -1, 0, 
-1, -1, 0, -1, 0, 0, 2, 7, 0, 0, -1, 1, 0, 1, 4, 6, 
};




#define layer_6_bias_size ((unsigned int)8) //array size
#define layer_6_bias_range ((nn_t)211) //multiply neuron result with range/1024

const nn_weight_t layer_6_bias[]={
15, 75, 67, 71, 75, 111, 71, 127, };


#endif
