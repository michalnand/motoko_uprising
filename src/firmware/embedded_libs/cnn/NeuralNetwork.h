#ifndef _NEURAL_NETWORK_H_
#define _NEURAL_NETWORK_H_

#include <NetworkConfig.h>
#include <NetworkLayer.h>

#include <NetFcLayer.h>
#include <NetDenseFcLayer.h>
#include <NetReluLayer.h>

#include <NetConvolutionLayer.h>
#include <NetDenseConvolutionLayer.h>
#include <NetMaxPoolingLayer.h>

class NeuralNetwork
{
    protected:
        unsigned int layers_count;
        NetworkLayer *layers[NETWORK_LAYERS_MAX_COUNT];

        sLayerGeometry input_geometry, output_geometry;

    protected:
        nn_layer_t *buffer_a;
        nn_layer_t *buffer_b;

        nn_layer_t *input, *output;

    public:
        NeuralNetwork();

        virtual ~NeuralNetwork();
        virtual void set_input(nn_layer_t *input_);

        void forward();

        unsigned int input_size()
        {
            return input_geometry.w*input_geometry.h*input_geometry.d;
        }

        unsigned int output_size()
        {
            return output_geometry.w*output_geometry.h*output_geometry.d;
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
