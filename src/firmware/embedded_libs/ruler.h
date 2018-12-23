#ifndef _RULER_RAMP_H_
#define _RULER_RAMP_H_


template <class T> class Ruler
{
    public:
        Ruler()
        {
            this->m_start_point       = 0;
            this->m_end_point         = 0;
        }

        Ruler(T start_point_, T end_point_)
        {
            this->m_start_point       = start_point_;
            this->m_end_point         = end_point_;
        }

        Ruler(Ruler<T> &other)
        {
            this->m_start_point       = other.m_start_point;
            this->m_end_point         = other.m_end_point;
        }

        Ruler(const Ruler<T> &other)
        {
            this->m_start_point       = other.m_start_point;
            this->m_end_point         = other.m_end_point;
        }

        virtual ~Ruler()
        {

        }

    public:

        Ruler& operator=(Ruler &other)
        {
            this->m_start_point       = other.m_start_point;
            this->m_end_point         = other.m_end_point;

            return *this;
        }

        Ruler& operator=(const Ruler &other)
        {
            this->m_start_point       = other.m_start_point;
            this->m_end_point         = other.m_end_point;

            return *this;
        }

    public:
        void start_point(T value)
        {
            this->m_start_point = value;
        }

        void end_point(T value)
        {
            this->m_end_point = value;
        }

        T distance()
        {
            T result;

            if (m_end_point > m_start_point)
                result = m_end_point - m_start_point;
            else
                result = m_start_point - m_end_point;

            return result;
        }

    private:
        T m_start_point, m_end_point;
};

#endif
