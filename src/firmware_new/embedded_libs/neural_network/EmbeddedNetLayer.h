#ifndef _EMBEDDED_NET_LAYER_H_
#define _EMBEDDED_NET_LAYER_H_

#include <EmbeddedNetConfig.h>

class EmbeddedNetLayer
{
    protected:
        sEmbeddedNetShape m_input_shape, m_output_shape, m_kernel_shape;

    public:
        EmbeddedNetLayer();
        virtual ~EmbeddedNetLayer();

        sEmbeddedNetShape input_shape()
        {
            return m_input_shape;
        }

        sEmbeddedNetShape output_shape()
        {
            return m_output_shape;
        }

        sEmbeddedNetShape kernel_shape()
        {
            return m_kernel_shape;
        }

        unsigned int get_input_size()
        {
            return m_input_shape.w*m_input_shape.h*m_input_shape.d;
        }

        unsigned int get_output_size()
        {
            return m_output_shape.w*m_output_shape.h*m_output_shape.d;
        }

    public:
        virtual void forward(nn_layer_t *output, nn_layer_t *input);
};

#endif
