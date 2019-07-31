#ifndef _RESONANT_FILTER_H_
#define _RESONANT_FILTER_H_

//simple resonant filter, tunned to fs/4
//q - quality factor
//q in range <0, 1000>

#define RESONANT_FILTER_MAX 1000.0


template <int q_> class ResonantFilter
{
    private:
        float q;
        float x0, x1, x2, y0, y1, y2;

    public:
        ResonantFilter()
        {
            y0 = 0;
            y1 = 0;
            y2 = 0;

            x0 = 0;
            x1 = 0;
            x2 = 0;

            q = q_/RESONANT_FILTER_MAX;
        }

        float process(float input)
        {
            x2 = x1;
            x1 = x0;
            x0 = input;

            y2 = y1;
            y1 = y0;

            y0 = -q*y2 + (x0 - x2)*((1.0 - q)/2);

            return y0;
        }

        float get()
        {
            return y0;
        }

        float get_absolute()
        {
            float result = get();
            if (result < 0)
                result = -result;
            return result;
        }
};


#endif
