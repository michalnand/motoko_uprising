#ifndef _LAYER_layer_0_H_
#define _LAYER_layer_0_H_


#include <EmbeddedNetConfig.h>


#define layer_0_type "fc"

const sEmbeddedNetShape layer_0_input_shape = {6, 6, 1};
const sEmbeddedNetShape layer_0_output_shape = {1, 1, 32};
const sEmbeddedNetShape layer_0_shape = {1, 1, 32};

#define layer_0_weights_size ((unsigned int)1152) //array size
#define layer_0_weights_range ((nn_t)855) //multiply neuron result with range/1024

const nn_weight_t layer_0_weights[]={
127, -20, -50, -17, -17, -18, 15, 19, -14, 2, -30, 9, 3, -17, 5, -8, 
-2, 13, -38, 6, 22, -1, 4, -10, 3, 21, -2, -10, 0, -2, 11, -9, 
-4, 35, -2, -15, 43, -47, 20, 28, -54, -9, 51, -31, -18, -4, -16, -22, 
24, 29, -3, -14, -8, 2, 2, -3, -24, -21, -10, 1, -2, 13, 12, 22, 
24, -10, -7, 11, 23, 1, 9, -16, -27, -9, 1, 13, -41, 61, 5, -14, 
17, -11, -9, 32, 11, 5, -1, -20, 20, 7, -7, -29, -25, -42, -19, 15, 
3, 5, -39, 16, 18, -22, 17, 23, -48, 39, 23, 22, 30, 49, -47, -41, 
-32, 9, -37, 61, -21, -32, 4, 3, 3, -8, 30, 3, -26, -12, -11, 13, 
-17, 8, -25, -19, 7, -13, 14, 48, 16, 6, -50, 0, -10, 8, 58, 24, 
-4, -2, -9, -21, 10, -13, -34, 11, -24, 0, 13, -19, -4, -24, -25, -32, 
3, -19, -29, 6, 3, 24, -25, 22, -40, 24, -23, -24, 7, -1, 28, -2, 
-41, 0, 17, -8, -2, 17, -5, 40, 17, -28, -13, -20, -1, 16, -8, 0, 
-15, 13, 4, -47, -19, 26, -11, -10, -34, -31, 30, 15, -30, 7, -27, -7, 
18, -1, 16, 16, 7, -5, 27, -6, -34, -37, 0, -9, -12, 6, 23, -41, 
7, -13, -27, -8, -41, 3, 19, -17, -14, -23, -3, -26, -6, -9, -19, -1, 
-6, -1, -27, 11, -29, 0, 5, 15, 20, -2, 15, -1, 25, -6, 39, -44, 
-56, -16, 11, -35, 63, -55, -1, 9, -13, -5, 21, 0, -9, 19, -20, 0, 
-22, 9, 21, 1, 2, -23, -12, 6, 23, 20, 18, -29, 23, 4, 4, 23, 
24, 79, 24, -58, -26, -17, 38, 42, 18, -33, -18, -32, -16, 0, -8, -12, 
-3, 11, -10, -10, 12, 3, -16, 23, -29, 3, 1, -15, 18, -15, -24, -26, 
3, 19, 35, 14, 0, 14, 0, -35, 12, -17, -15, -18, 14, 11, 47, -44, 
9, 1, 13, -26, 26, -59, 24, 28, -16, 15, -11, 0, -15, 11, -12, -29, 
29, 22, -10, -27, 0, -35, 30, 33, -27, -5, 1, -5, -26, 85, 11, -17, 
-3, -41, 15, 38, -3, -15, -28, -5, 6, -7, -23, 9, -12, 9, -27, -7, 
13, -20, 18, 11, 14, 4, 12, -8, 19, -10, 3, 18, -72, 63, 45, 66, 
-51, -7, -12, 22, 11, -9, -19, -18, 34, -8, 10, 0, 0, 2, -6, -7, 
-13, 2, 0, -7, -7, 9, -18, -8, -4, 29, 2, -6, -4, -8, 3, -9, 
-20, -30, 17, 25, -9, -22, -22, -7, 21, -8, 0, -31, -32, -36, 3, 4, 
-4, -37, -31, -15, -25, -25, -25, -14, -14, 12, -9, -15, 10, -37, -12, -4, 
-4, -3, 7, -1, 10, 21, -23, -15, -27, 11, 0, 34, 13, 18, -21, -24, 
7, -15, 1, -14, 5, -3, -43, -12, 20, 5, -12, 28, -4, -13, -19, -15, 
5, -29, 0, -20, -6, 22, -10, 22, -36, -87, 50, 16, -13, 13, 24, -20, 
59, -10, -4, 9, -12, -4, 31, -19, 16, -7, 42, -1, -23, -13, 12, -1, 
16, 0, 0, -7, -17, -9, 18, 15, 1, -35, -14, 5, 3, -34, 36, 82, 
-107, -26, -12, 23, 41, 31, -25, -19, -20, 14, 5, 1, 0, 2, -4, 16, 
-26, 2, 15, 38, 9, -37, 1, -6, -7, 22, -31, -8, -17, 5, 10, 19, 
73, -32, -36, -4, 18, -8, 9, 22, -43, 1, 12, -20, 9, -11, -10, -7, 
5, -34, 19, 22, 30, -11, -21, -22, 30, 7, 6, 34, -40, -8, 34, 20, 
-12, -17, -15, 3, -24, -31, -23, 5, -32, -9, -26, -19, 16, 5, 11, -18, 
25, -19, 11, 3, -13, -20, -31, 22, -6, -32, 13, 24, 9, 0, 4, -12, 
3, -5, -12, -29, -30, 1, 2, -13, -2, 0, 2, -11, 19, -26, -11, 8, 
-22, -27, -12, -30, 3, 27, -4, -5, -33, -31, 10, 15, -17, 10, 26, 4, 
-34, -12, -7, 16, -33, -9, -10, -36, 4, -18, -8, -18, 0, -73, 40, 71, 
56, -27, -19, -2, -2, 42, -17, -20, -29, 6, -9, 33, 3, -1, 10, 4, 
5, -13, -14, -20, -5, -8, 0, -8, 4, 31, 7, -16, -13, -1, -7, -3, 
-19, -22, -64, 2, 63, 57, -14, 0, -45, -8, 33, 24, 0, -34, 6, -3, 
7, -3, 14, -19, 25, 17, -22, -7, -23, 26, 0, 3, -10, -4, -9, 33, 
0, 0, 7, -4, -41, 17, 15, 22, 26, 28, 9, -30, -39, 10, -25, 17, 
-31, -34, -32, -29, -7, -8, -40, 17, -8, 32, -28, -37, -32, -36, -27, -29, 
-25, 8, 2, -37, -11, 6, -16, -36, -14, -26, -76, 26, 93, -62, 1, -8, 
-28, 21, -5, -5, -18, 11, 13, 2, -4, 32, -15, 18, 1, -16, -15, 9, 
18, -7, 27, 9, -3, -7, 25, 2, -16, 9, 12, -8, -53, 108, 27, -89, 
19, -14, -8, 26, 21, 7, -18, 3, 7, -24, 16, -5, -23, -2, -9, 8, 
1, 12, 10, -24, 20, -31, -7, -2, 27, 5, -21, 25, -14, -7, 0, 9, 
-3, -97, 67, 11, -4, 6, -15, -19, 19, -27, 1, 5, -11, -5, 11, -3, 
34, -32, 18, 17, 21, 9, -12, 12, 20, -19, 15, 3, -29, -14, 29, 4, 
11, 3, -32, 5, -3, -28, 0, -48, -24, 94, -12, -10, -30, -27, 1, 31, 
-7, 0, -3, 10, -1, -31, 9, 0, 5, 36, 25, -29, 3, -8, 10, 0, 
8, 23, 6, 4, 26, -9, -16, -1, -22, 20, -16, 8, 102, -67, -15, 5, 
2, 31, 12, 4, 19, -20, 1, 0, -10, 26, 13, -21, 29, -3, -10, 17, 
-18, 20, -27, -7, -2, -43, -1, -11, -16, -4, -6, 17, 19, 26, -24, -17, 
-6, 12, 8, -32, -19, 19, -32, 1, 0, 20, 12, 16, 20, -8, -34, -33, 
26, -36, -36, -30, 21, -28, -35, -39, 22, -9, -32, 11, 2, -12, 23, 24, 
-34, 10, -7, -19, 21, 28, -24, -40, 28, -25, -37, -7, -9, -36, -31, -10, 
-22, -16, 8, 16, -32, -4, -15, 11, -27, -23, 19, 18, -6, 16, 4, -20, 
24, -13, -37, -41, -75, 78, 0, -44, -10, 46, -10, 10, 33, -19, 15, 1, 
24, -18, 2, 24, 0, -18, 11, -15, -42, -11, -6, 7, -27, 12, 13, 12, 
-13, -25, 10, 2, 7, -12, 13, 23, -4, -24, -7, 8, -31, 11, 1, -28, 
-41, 12, -13, 15, -28, 25, -25, 3, -5, -9, -32, -10, -41, 0, -10, -7, 
14, -5, 0, 0, -25, -19, -43, 0, 3, -2, -2, 15, 6, -41, 4, 45, 
-79, 20, 6, -12, 1, 35, -25, 18, -5, -10, 0, -22, 25, 25, -17, 4, 
8, -9, -10, 30, 17, -29, 12, 24, 13, -11, -19, -25, -19, 1, 8, 16, 
};




#define layer_0_bias_size ((unsigned int)32) //array size
#define layer_0_bias_range ((nn_t)238) //multiply neuron result with range/1024

const nn_weight_t layer_0_bias[]={
-37, 23, -32, -111, -2, -30, 0, -127, 4, -57, 31, 3, 0, -6, -120, -97, 
77, 0, -1, 45, 36, 0, -60, -81, -86, -21, -66, -9, 0, -4, -1, -44, 
};


#endif
