#ifndef _VL53L0X_H_
#define _VL53L0X_H_

#include <i2c_interface.h>

class VL53L0X
{
    public:
        VL53L0X();
        virtual ~VL53L0X();

        int init(I2C_Interface *i2c_);

        int read_single_shot();
        int read_countinuous();
        void start_continuous();
        int get();

    private:
        int result;
        I2C_Interface *i2c;

        unsigned char stop_variable;

    private:
        bool setSignalRateLimit(float limit_Mcps);
        bool getSpadInfo(unsigned char *count, bool *type_is_aperture);
        bool performSingleRefCalibration(unsigned char vhv_init_byte);
        void startContinuous();
        int readRangeContinuous();
};

#endif
