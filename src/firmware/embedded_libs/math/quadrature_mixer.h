#ifndef _QUADRATURE_MIXER_H_
#define _QUADRATURE_MIXER_H_

template<class num_type> class QuadratureMixer
{
    private:
        unsigned char phase;
        num_type m_sin[4], m_cos[4];

        num_type m_i, m_q;

    public:
        QuadratureMixer()
        {
            phase   = 0;
            m_i     = 0;
            m_q     = 0;

            m_sin[0] = 0;
            m_sin[1] = 1;
            m_sin[2] = 0;
            m_sin[3] = -1;

            m_cos[0] = 1;
            m_cos[1] = 0;
            m_cos[2] = -1;
            m_cos[3] = 0;
        }

        ~QuadratureMixer()
        {

        }

        void process(num_type input)
        {
            m_i = m_sin[phase]*input;
            m_q = m_cos[phase]*input;
            phase = (phase + 1)&3;
        }

        num_type I()
        {
            return m_i;
        }

        num_type Q()
        {
            return m_q;
        }
};

#endif
