#ifndef _EMBEDDED_NET_H_
#define _EMBEDDED_NET_H_

#include <EmbeddedNetConfig.h>
#include <EmbeddedNetLayer.h>

#include <EmbeddedNetFcLayer.h>
#include <EmbeddedNetConvolutionLayer.h>
#include <EmbeddedNetDenseConvolutionLayer.h>

#include <EmbeddedNetMaxPoolingLayer.h>

class EmbeddedNet
{
    protected:
        unsigned int layers_count;
        EmbeddedNetLayer *layers[NETWORK_LAYERS_MAX_COUNT];

        sEmbeddedNetShape input_shape, output_shape;

    protected:
        nn_layer_t *buffer_a;
        nn_layer_t *buffer_b;

        nn_layer_t *input, *output;

    public:
        EmbeddedNet();

        virtual ~EmbeddedNet();
        virtual void set_input(nn_layer_t *input_);

        void forward();

        unsigned int input_size()
        {
            return input_shape.w*input_shape.h*input_shape.d;
        }

        unsigned int output_size()
        {
            return output_shape.w*output_shape.h*output_shape.d;
        }

        nn_layer_t* get_output()
        {
            return output;
        }

        nn_layer_t* get_input()
        {
            return input;
        }

        unsigned int class_result();

    protected:
        unsigned int get_required_buffer_size();
        virtual void allocate_buffer();

    private:
        void io_swap();

};

#endif
