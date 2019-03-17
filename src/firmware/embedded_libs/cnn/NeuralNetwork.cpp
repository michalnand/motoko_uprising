#include "NeuralNetwork.h"

NeuralNetwork::NeuralNetwork()
{
    input_geometry.w = 0;
    input_geometry.h = 0;
    input_geometry.d = 0;

    output_geometry.w = 0;
    output_geometry.h = 0;
    output_geometry.d = 0;

    for (unsigned int i = 0; i < NETWORK_LAYERS_MAX_COUNT; i++)
        layers[i] = nullptr;

    layers_count = 0;

    buffer_a     = nullptr;
    buffer_b     = nullptr;
}

NeuralNetwork::~NeuralNetwork()
{
    delete[] buffer_a;
    delete[] buffer_b;
}

void NeuralNetwork::forward()
{
    for (unsigned int i = 0; i < layers_count; i++)
    {
        for (unsigned int j = 0; j < layers[i]->get_output_size(); j++)
            output[j] = 0;

        layers[i]->forward(output, input);

        io_swap();
    }

    io_swap();
}


void NeuralNetwork::set_input(nn_layer_t *input_)
{
    unsigned int input_size = input_geometry.w*input_geometry.h*input_geometry.d;

    for (unsigned int i = 0; i < input_size; i++)
        input[i] = input_[i];
}

unsigned int NeuralNetwork::class_result()
{
    nn_t max = output[0];
    unsigned int result = 0;

    unsigned int output_size = output_geometry.w*output_geometry.h*output_geometry.d;

    for (unsigned int i = 0; i < output_size; i++)
        if (output[i] > max)
        {
            max = output[i];
            result = i;
        }

    return result;
}


unsigned int NeuralNetwork::get_required_buffer_size()
{
  unsigned int required = 0;

  for (unsigned int i = 0; i < layers_count; i++)
  {
    unsigned int layer_input_size  = layers[i]->input_geometry().w*layers[i]->input_geometry().h*layers[i]->input_geometry().d;
    unsigned int layer_output_size = layers[i]->output_geometry().w*layers[i]->output_geometry().h*layers[i]->output_geometry().d;

    if (layer_input_size > required)
      required = layer_input_size;

    if (layer_output_size > required)
      required = layer_output_size;
  }

  return required;
}



void NeuralNetwork::allocate_buffer()
{
  if ((buffer_a == nullptr)&&(buffer_b == nullptr))
  {
    unsigned int required_size = get_required_buffer_size();

    buffer_a = new nn_layer_t[required_size];
    buffer_b = new nn_layer_t[required_size];

    input   = buffer_a;
    output  = buffer_b;

    for (unsigned int i = 0; i < required_size; i++)
    {
      buffer_a[i] = 0;
      buffer_b[i] = 0;
    }
  }
}

void NeuralNetwork::io_swap()
{
  nn_layer_t *tmp = input;
  input = output;
  output = tmp;
}
