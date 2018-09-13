#ifndef _NetworkConvolutionKernelMultithread_H_
#define _NetworkConvolutionKernelMultithread_H_

#include "NetworkConfig.h"

#ifdef MULTI_THREADS_SUPPORT

#include <thread>
#include <mutex>
#include <iostream>
#include <vector>


class NetworkConvolutionKernelMultithread
{
  private:
    unsigned int threads_count;


    nn_layer_t *output;
    nn_layer_t *input;
    nn_weight_t *w;
    nn_weight_t *bias;
    int w_range;
    int bias_range;
    unsigned int in_width;
    unsigned int in_height;
    unsigned int in_channels;
    unsigned int out_channels;
    unsigned int kernel_size;

  private:
    bool running;

    std::vector<std::mutex*> start_mutex;
    std::vector<std::mutex*> done_mutex;
    std::vector<std::thread*> threads;


  public:
    NetworkConvolutionKernelMultithread();
    virtual ~NetworkConvolutionKernelMultithread();

    void run( nn_layer_t *output,
              nn_layer_t *input,
              nn_weight_t *w,
              nn_weight_t *bias,
              int w_range,
              int bias_range,

              unsigned int in_width,
              unsigned int in_height,
              unsigned int in_channels,
              unsigned int out_channels,
              unsigned int kernel_size);

    unsigned int get_threads_count()
    {
      return threads_count;
    }

  private:
    void compute_thread(unsigned int id);

    void start_computing();
    void wait_for_done();

};

extern NetworkConvolutionKernelMultithread network_convolution_kernel_multithread;

#endif

#endif
