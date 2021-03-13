#include <ReLU.h>


void ReLU(  int8_t *output_buffer, 
            int8_t *input_buffer, 
            unsigned int size)
{
    while (size >=4)
    {
        if (input_buffer[0] < 0)
            output_buffer[0] = 0;
        else
            output_buffer[0] = input_buffer[0];  

        if (input_buffer[1] < 0)
            output_buffer[1] = 0;
        else
            output_buffer[1] = input_buffer[1];  

        if (input_buffer[2] < 0)
            output_buffer[2] = 0;
        else
            output_buffer[2] = input_buffer[2];  

        if (input_buffer[3] < 0)
            output_buffer[3] = 0;
        else
            output_buffer[3] = input_buffer[3];  

        output_buffer+= 4;
        input_buffer+= 4;
        size-= 4;
    }    

    while (size > 0)
    {
        if (input_buffer[0] < 0)
            output_buffer[0] = 0;
        else
            output_buffer[0] = input_buffer[0]; 

        output_buffer+= 1;
        input_buffer+= 1;
        size--;
    }
}
