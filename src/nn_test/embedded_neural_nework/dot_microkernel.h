#ifndef _dot_microkernel_H_
#define _dot_microkernel_H_



template<const unsigned int vector_size, class DATA_VA_t, class DATA_VB_t, class ACC_t>
ACC_t dot_microkernel(const DATA_VA_t *va, const DATA_VB_t *vb)
{    
    ACC_t result = 0;

    unsigned int idx = 0;
    unsigned int size = vector_size;


    while (size >= 32)
    {                    
        result+= (ACC_t)va[idx]*(ACC_t)vb[idx]; idx++;
        result+= (ACC_t)va[idx]*(ACC_t)vb[idx]; idx++;
        result+= (ACC_t)va[idx]*(ACC_t)vb[idx]; idx++;
        result+= (ACC_t)va[idx]*(ACC_t)vb[idx]; idx++;
        result+= (ACC_t)va[idx]*(ACC_t)vb[idx]; idx++;
        result+= (ACC_t)va[idx]*(ACC_t)vb[idx]; idx++;
        result+= (ACC_t)va[idx]*(ACC_t)vb[idx]; idx++;
        result+= (ACC_t)va[idx]*(ACC_t)vb[idx]; idx++;
        result+= (ACC_t)va[idx]*(ACC_t)vb[idx]; idx++;
        result+= (ACC_t)va[idx]*(ACC_t)vb[idx]; idx++;
        result+= (ACC_t)va[idx]*(ACC_t)vb[idx]; idx++;
        result+= (ACC_t)va[idx]*(ACC_t)vb[idx]; idx++;
        result+= (ACC_t)va[idx]*(ACC_t)vb[idx]; idx++;
        result+= (ACC_t)va[idx]*(ACC_t)vb[idx]; idx++;
        result+= (ACC_t)va[idx]*(ACC_t)vb[idx]; idx++;
        result+= (ACC_t)va[idx]*(ACC_t)vb[idx]; idx++;
        result+= (ACC_t)va[idx]*(ACC_t)vb[idx]; idx++;
        result+= (ACC_t)va[idx]*(ACC_t)vb[idx]; idx++;
        result+= (ACC_t)va[idx]*(ACC_t)vb[idx]; idx++;
        result+= (ACC_t)va[idx]*(ACC_t)vb[idx]; idx++;
        result+= (ACC_t)va[idx]*(ACC_t)vb[idx]; idx++;
        result+= (ACC_t)va[idx]*(ACC_t)vb[idx]; idx++;
        result+= (ACC_t)va[idx]*(ACC_t)vb[idx]; idx++;
        result+= (ACC_t)va[idx]*(ACC_t)vb[idx]; idx++;
        result+= (ACC_t)va[idx]*(ACC_t)vb[idx]; idx++;
        result+= (ACC_t)va[idx]*(ACC_t)vb[idx]; idx++;
        result+= (ACC_t)va[idx]*(ACC_t)vb[idx]; idx++;
        result+= (ACC_t)va[idx]*(ACC_t)vb[idx]; idx++;
        result+= (ACC_t)va[idx]*(ACC_t)vb[idx]; idx++;
        result+= (ACC_t)va[idx]*(ACC_t)vb[idx]; idx++;
        result+= (ACC_t)va[idx]*(ACC_t)vb[idx]; idx++;
        result+= (ACC_t)va[idx]*(ACC_t)vb[idx]; idx++;
    
        size-= 32;
    }


    while (size >= 16)
    {                    
        result+= (ACC_t)va[idx]*(ACC_t)vb[idx]; idx++;
        result+= (ACC_t)va[idx]*(ACC_t)vb[idx]; idx++;
        result+= (ACC_t)va[idx]*(ACC_t)vb[idx]; idx++;
        result+= (ACC_t)va[idx]*(ACC_t)vb[idx]; idx++;
        result+= (ACC_t)va[idx]*(ACC_t)vb[idx]; idx++;
        result+= (ACC_t)va[idx]*(ACC_t)vb[idx]; idx++;
        result+= (ACC_t)va[idx]*(ACC_t)vb[idx]; idx++;
        result+= (ACC_t)va[idx]*(ACC_t)vb[idx]; idx++;
        result+= (ACC_t)va[idx]*(ACC_t)vb[idx]; idx++;
        result+= (ACC_t)va[idx]*(ACC_t)vb[idx]; idx++;
        result+= (ACC_t)va[idx]*(ACC_t)vb[idx]; idx++;
        result+= (ACC_t)va[idx]*(ACC_t)vb[idx]; idx++;
        result+= (ACC_t)va[idx]*(ACC_t)vb[idx]; idx++;
        result+= (ACC_t)va[idx]*(ACC_t)vb[idx]; idx++;
        result+= (ACC_t)va[idx]*(ACC_t)vb[idx]; idx++;
        result+= (ACC_t)va[idx]*(ACC_t)vb[idx]; idx++;

        size-= 16;
    }


    while (size >= 8)
    {                    
        result+= (ACC_t)va[idx]*(ACC_t)vb[idx]; idx++;
        result+= (ACC_t)va[idx]*(ACC_t)vb[idx]; idx++;
        result+= (ACC_t)va[idx]*(ACC_t)vb[idx]; idx++;
        result+= (ACC_t)va[idx]*(ACC_t)vb[idx]; idx++;
        result+= (ACC_t)va[idx]*(ACC_t)vb[idx]; idx++;
        result+= (ACC_t)va[idx]*(ACC_t)vb[idx]; idx++;
        result+= (ACC_t)va[idx]*(ACC_t)vb[idx]; idx++;
        result+= (ACC_t)va[idx]*(ACC_t)vb[idx]; idx++;
        
        size-= 8;
    }
  
    while (size > 0)
    {
        result+= (ACC_t)va[idx]*(ACC_t)vb[idx]; idx++;
        size--;
    }

    return result;
}


#endif