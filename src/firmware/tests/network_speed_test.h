#ifndef _NETWORK_SPEED_TEST_H_
#define _NETWORK_SPEED_TEST_H_


// size 1024 FC computing time 252 147 [ms], loops 1000
// size 256 FC computing time 63 37 [ms], loops 1000
// size 64 FC computing time 16 10 [ms], loops 1000
void network_fc_speed_test();

//convolution speed test, stm32f303, 72MHz, COrtexM4F
//input 16x16x16 kernels count 16

// naive kernel
// kernel size 1 convolution computing time 1098 [ms], loops 10
// kernel size 3 convolution computing time 3120 [ms], loops 10
// kernel size 5 convolution computing time 5320 [ms], loops 10


// template, but no unrolled kernel
// kernel size 1 convolution computing time 266 [ms], loops 10
// kernel size 3 convolution computing time 2136 [ms], loops 10
// kernel size 5 convolution computing time 3733 [ms], loops 10


//optimized kernel
// kernel size 1 convolution computing time 210 [ms], loops 10
// kernel size 3 convolution computing time 571 [ms], loops 10
// kernel size 5 convolution computing time 1062 [ms], loops 10

void network_convolution_speed_test();

#endif
