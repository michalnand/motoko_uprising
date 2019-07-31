#include <EmbeddedNet.h>

EmbeddedNet::EmbeddedNet()
{
    input_shape.w = 0;
    input_shape.h = 0;
    input_shape.d = 0;

    output_shape.w = 0;
    output_shape.h = 0;
    output_shape.d = 0;

    for (unsigned int i = 0; i < NETWORK_LAYERS_MAX_COUNT; i++)
        layers[i] = nullptr;

    layers_count = 0;

    buffer_a     = nullptr;
    buffer_b     = nullptr;
}

EmbeddedNet::~EmbeddedNet()
{
    delete[] buffer_a;
    delete[] buffer_b;
}

void EmbeddedNet::forward()
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


void EmbeddedNet::set_input(nn_layer_t *input_)
{
    unsigned int input_size = input_shape.w*input_shape.h*input_shape.d;

    for (unsigned int i = 0; i < input_size; i++)
        input[i] = input_[i];
}

unsigned int EmbeddedNet::class_result()
{
    nn_t max = output[0];
    unsigned int result = 0;

    unsigned int output_size = output_shape.w*output_shape.h*output_shape.d;

    for (unsigned int i = 0; i < output_size; i++)
        if (output[i] > max)
        {
            max = output[i];
            result = i;
        }

    return result;
}


unsigned int EmbeddedNet::get_required_buffer_size()
{
  unsigned int required = 0;

  for (unsigned int i = 0; i < layers_count; i++)
  {
    unsigned int layer_input_size  = layers[i]->input_shape().w*layers[i]->input_shape().h*layers[i]->input_shape().d;
    unsigned int layer_output_size = layers[i]->output_shape().w*layers[i]->output_shape().h*layers[i]->output_shape().d;

    if (layer_input_size > required)
      required = layer_input_size;

    if (layer_output_size > required)
      required = layer_output_size;
  }

  return required;
}



void EmbeddedNet::allocate_buffer()
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

void EmbeddedNet::io_swap()
{
  nn_layer_t *tmp = input;
  input = output;
  output = tmp;
}
