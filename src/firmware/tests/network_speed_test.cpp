#include <drivers/drivers.h>
#include <network_speed_test.h>

#include <EmbeddedNetDotKernel.h>
#include <EmbeddedNetConvolutionKernel.h>

#define FC_TEST_SIZE 62

void network_fc_speed_test()
{
    nn_weight_t w[FC_TEST_SIZE];
    nn_layer_t input[FC_TEST_SIZE];

    for (unsigned int i = 0; i < FC_TEST_SIZE; i++)
    {
        w[i]     = (int)(i%5) - 2;
        input[i] = (int)(i%5) - 2;
    }

    unsigned int loops_count = 1000;
    nn_t result_naive, result;

    timer.reset();
    for (unsigned int i = 0; i < loops_count; i++)
        result_naive = network_dot_kernel_naive(w, input, FC_TEST_SIZE);
    auto naive_computing_time = timer.elapsed_time();

    timer.reset();
    for (unsigned int i = 0; i < loops_count; i++)
        result = network_dot_kernel(w, input, FC_TEST_SIZE);
    auto computing_time = timer.elapsed_time();

    terminal << "FC computing time " << naive_computing_time << " " << computing_time << " [ms], loops " << loops_count << "\n";
    terminal << result_naive << " " << result << "\n";
}



#define INPUT_SIZE               16
#define FEATURE_MAPS_COUNT       16

#define KERNEL_SIZE               5
#define KERNELS_COUNT             16

void network_convolution_speed_test()
{
    sEmbeddedNetShape input_geometry;
    sEmbeddedNetShape kernel_geometry;

    input_geometry.w = INPUT_SIZE;
    input_geometry.h = INPUT_SIZE;
    input_geometry.d = FEATURE_MAPS_COUNT;

    kernel_geometry.w = KERNEL_SIZE;
    kernel_geometry.h = KERNEL_SIZE;
    kernel_geometry.d = KERNELS_COUNT;

    nn_layer_t input[INPUT_SIZE*INPUT_SIZE*FEATURE_MAPS_COUNT];
    nn_layer_t output[INPUT_SIZE*INPUT_SIZE*KERNELS_COUNT];
    nn_weight_t w[KERNEL_SIZE*KERNEL_SIZE*FEATURE_MAPS_COUNT*KERNELS_COUNT];
    nn_weight_t bias[KERNELS_COUNT];

    unsigned int loops_count = 10;

    timer.reset();
    for (unsigned int i = 0; i < loops_count; i++)
        network_convolution_kernel(output, input, w, bias, 50, 50, input_geometry, kernel_geometry);
    auto computing_time = timer.elapsed_time();


    terminal << "kernel size " << KERNEL_SIZE << " convolution computing time " << computing_time << " [ms], loops " << loops_count << "\n";
}
