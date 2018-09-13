#include "NetworkConvolutionKernelMultithread.h"

#ifdef MULTI_THREADS_SUPPORT

NetworkConvolutionKernelMultithread network_convolution_kernel_multithread;



template<const unsigned int kernel_size>
void t_network_convolution_kernel_thread(   nn_layer_t *output,
                                            nn_layer_t *input,
                                            nn_weight_t *w,
                                            nn_weight_t *bias,
                                            int w_range,
                                            int bias_range,

                                            unsigned int in_width,
                                            unsigned int in_height,
                                            unsigned int in_channels,
                                            unsigned int out_channels,
                                            unsigned int filter_start,
                                            unsigned int filter_inc)
{
  unsigned int k_half = (kernel_size - 1)/2;

  unsigned int input_size_y = in_height - 2*k_half;
  unsigned int input_size_x = in_width - 2*k_half;

  for (unsigned int filter = filter_start; filter < out_channels; filter+= filter_inc)
    for (unsigned int y = 0; y <= input_size_y; y++)
      for (unsigned int x = 0; x <= input_size_x; x++)
        {
          unsigned int filter_idx = kernel_size*kernel_size*in_channels*filter;

          nn_t dot_result = 0;
          nn_t bias_result;

          for (unsigned int ch = 0; ch < in_channels; ch++)
          {
            unsigned int input_idx = (ch*in_height + y)*in_width + x;

            if (kernel_size == 1)
            {
              dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++; input_idx++;
            }

            if (kernel_size == 3)
            {
              dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++; input_idx++;
              dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++; input_idx++;
              dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++; input_idx++;
              input_idx+=  in_width - kernel_size;

              dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++; input_idx++;
              dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++; input_idx++;
              dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++; input_idx++;
              input_idx+=  in_width - kernel_size;

              dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++; input_idx++;
              dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++; input_idx++;
              dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++; input_idx++;
              input_idx+=  in_width - kernel_size;
            }

            if (kernel_size == 5)
            {
              dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++; input_idx++;
              dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++; input_idx++;
              dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++; input_idx++;
              dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++; input_idx++;
              dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++; input_idx++;
              input_idx+=  in_width - kernel_size;

              dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++; input_idx++;
              dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++; input_idx++;
              dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++; input_idx++;
              dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++; input_idx++;
              dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++; input_idx++;
              input_idx+=  in_width - kernel_size;

              dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++; input_idx++;
              dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++; input_idx++;
              dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++; input_idx++;
              dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++; input_idx++;
              dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++; input_idx++;
              input_idx+=  in_width - kernel_size;

              dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++; input_idx++;
              dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++; input_idx++;
              dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++; input_idx++;
              dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++; input_idx++;
              dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++; input_idx++;
              input_idx+=  in_width - kernel_size;

              dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++; input_idx++;
              dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++; input_idx++;
              dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++; input_idx++;
              dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++; input_idx++;
              dot_result+= ((int16_t)w[filter_idx])*((int16_t)input[input_idx]); filter_idx++; input_idx++;
              input_idx+=  in_width - kernel_size;
            }
          }

          dot_result  = (dot_result*w_range)/128;
          bias_result = (bias[filter]*bias_range);

          nn_t result = (dot_result + bias_result)/1024;

          if (result > NETWORK_LAYER_OUTPUT_RANGE)
            result = NETWORK_LAYER_OUTPUT_RANGE;
          if (result < -NETWORK_LAYER_OUTPUT_RANGE)
            result = -NETWORK_LAYER_OUTPUT_RANGE;

          unsigned int output_idx = (filter*in_height + y + k_half)*in_width + x + k_half;
          output[output_idx] = result;
        }
}

NetworkConvolutionKernelMultithread::NetworkConvolutionKernelMultithread()
{
  threads_count = std::thread::hardware_concurrency();
  if (threads_count > 16)
    threads_count = 16;

  // std::cout << "threads count " << threads_count << "\n";

  this->output      = nullptr;
  this->input       = nullptr;
  this->w           = nullptr;
  this->bias        = nullptr;
  this->w_range     = 0;
  this->bias_range  = 0;

  this->in_width      = 0;
  this->in_height     = 0;
  this->in_channels   = 0;
  this->out_channels  = 0;
  this->kernel_size   = 0;

  running = true;

  start_mutex.resize(threads_count);
  for (unsigned int i = 0; i < threads_count; i++)
  {
    start_mutex[i] = new std::mutex();
    start_mutex[i]->lock();
  }

  done_mutex.resize(threads_count);
  for (unsigned int i = 0; i < threads_count; i++)
  {
    done_mutex[i] = new std::mutex();
    done_mutex[i]->lock();
  }


  for (unsigned int i = 0; i < threads_count; i++)
  {
    threads.push_back(new std::thread(&NetworkConvolutionKernelMultithread::compute_thread, this, i));
  }
}


NetworkConvolutionKernelMultithread::~NetworkConvolutionKernelMultithread()
{
  running = false;

  start_computing();
  wait_for_done();

  for (unsigned int i = 0; i < threads.size(); i++)
  {
    threads[i]->join();
    delete threads[i];
  }

  for (unsigned int i = 0; i < start_mutex.size(); i++)
  {
    delete start_mutex[i];
  }

  for (unsigned int i = 0; i < done_mutex.size(); i++)
  {
    delete done_mutex[i];
  }
}


void NetworkConvolutionKernelMultithread::run(  nn_layer_t *output,
                                                nn_layer_t *input,
                                                nn_weight_t *w,
                                                nn_weight_t *bias,
                                                int w_range,
                                                int bias_range,

                                                unsigned int in_width,
                                                unsigned int in_height,
                                                unsigned int in_channels,
                                                unsigned int out_channels,
                                                unsigned int kernel_size)
{
  this->output      = output;
  this->input       = input;
  this->w           = w;
  this->bias        = bias;
  this->w_range     = w_range;
  this->bias_range  = bias_range;

  this->in_width      = in_width;
  this->in_height     = in_height;
  this->in_channels   = in_channels;
  this->out_channels  = out_channels;
  this->kernel_size   = kernel_size;

  start_computing();
  wait_for_done();
}

void NetworkConvolutionKernelMultithread::compute_thread(unsigned int id)
{
  while (running)
  {
    start_mutex[id]->lock();   //wait for start mutex unlock -> start computing
    if (running)
    {
          switch (kernel_size)
          {
            case 1:
                    t_network_convolution_kernel_thread<1>(   output,
                                                              input,
                                                              w,
                                                              bias,
                                                              w_range,
                                                              bias_range,

                                                              in_width,
                                                              in_height,
                                                              in_channels,
                                                              out_channels,
                                                              id,
                                                              threads_count) ;
                                                              break;

            case 3:
                    t_network_convolution_kernel_thread<3>(   output,
                                                              input,
                                                              w,
                                                              bias,
                                                              w_range,
                                                              bias_range,

                                                              in_width,
                                                              in_height,
                                                              in_channels,
                                                              out_channels,
                                                              id,
                                                              threads_count) ;
                                                              break;


            case 5:
                    t_network_convolution_kernel_thread<5>(   output,
                                                              input,
                                                              w,
                                                              bias,
                                                              w_range,
                                                              bias_range,

                                                              in_width,
                                                              in_height,
                                                              in_channels,
                                                              out_channels,
                                                              id,
                                                              threads_count) ;
                                                              break;
          }
    }
    done_mutex[id]->unlock();
  }
}

void NetworkConvolutionKernelMultithread::start_computing()
{
  for (unsigned int i = 0; i < start_mutex.size(); i++)
    start_mutex[i]->unlock();
}

void NetworkConvolutionKernelMultithread::wait_for_done()
{
  for (unsigned int i = 0; i < start_mutex.size(); i++)
    done_mutex[i]->lock();
}


#endif
