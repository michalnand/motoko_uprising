#ifndef _FILTER_H_
#define _FILTER_H_

class Filter
{
    private:
        float a1, a2, b0, b1, b2;
        float y0, y1, y2, x0, x1, x2;

    public:
        Filter();
        Filter(float a1, float a2, float b0, float b1, float b2);
        virtual ~Filter();

        void set_coefs(float a1, float a2, float b0, float b1, float b2);
        void reset();

        float process(float x);

        float get();
        float get_absolute();
        float operator()(float x);
};


#endif
