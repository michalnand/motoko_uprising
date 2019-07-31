#include "imu.h"

#include <drivers.h>
#include <sensors_config.h>

//#define LSM6DS0_ADDRESS              ((unsigned char)0xD6)
#define LSM6DS0_ADDRESS              ((unsigned char)0xD4)

#define LSM6DS0_WHO_AM_I             ((unsigned char)0x0F)
#define LSM6DS0_WHO_AM_I_VALUE       ((unsigned char)0x68)
#define LSM6DS0_WHO_AM_I_33_VALUE    ((unsigned char)0x69)

#define LSM6DS0_CTRL_REG1_G         ((unsigned char)0x10)
#define LSM6DS0_CTRL_REG2_G         ((unsigned char)0x11)
#define LSM6DS0_CTRL_REG3_G         ((unsigned char)0x12)
#define LSM6DS0_CTRL_REG4_G         ((unsigned char)0x1E)
#define LSM6DS0_CTRL_REG10_G        ((unsigned char)0x24)

#define LSM6DS0_GYRO_XOUT_L         ((unsigned char)0x18)
#define LSM6DS0_GYRO_XOUT_H         ((unsigned char)0x19)
#define LSM6DS0_GYRO_YOUT_L         ((unsigned char)0x1A)
#define LSM6DS0_GYRO_YOUT_H         ((unsigned char)0x1B)
#define LSM6DS0_GYRO_ZOUT_L         ((unsigned char)0x1C)
#define LSM6DS0_GYRO_ZOUT_H         ((unsigned char)0x1D)






#define LSM6DS0_FIFO_CTR	           ((unsigned char)0x2E)


#define LSM6DS0_G_ODR_PD                                ((unsigned char)0x00) /*!< Output Data Rate: Power-down*/
#define LSM6DS0_G_ODR_14_9HZ                            ((unsigned char)0x20) /*!< Output Data Rate: 14.9 Hz, cutoff 5Hz */
#define LSM6DS0_G_ODR_59_5HZ                            ((unsigned char)0x40) /*!< Output Data Rate: 59.5 Hz, cutoff 19Hz */
#define LSM6DS0_G_ODR_119HZ                             ((unsigned char)0x60) /*!< Output Data Rate: 119 Hz, cutoff 38Hz*/
#define LSM6DS0_G_ODR_238HZ                             ((unsigned char)0x80) /*!< Output Data Rate: 238 Hz, cutoff 76Hz*/
#define LSM6DS0_G_ODR_476HZ                             ((unsigned char)0xA0) /*!< Output Data Rate: 476 Hz, cutoff 100Hz*/
#define LSM6DS0_G_ODR_952HZ                             ((unsigned char)0xC0)

#define LSM6DS0_G_FS_245                               ((unsigned char)0x00) /*!< Full scale: 245 dps*/
#define LSM6DS0_G_FS_245_MDPS                          ((int32_t)875)            /*!< 8.75mdps*/

#define LSM6DS0_G_FS_500                               ((unsigned char)0x08) /*!< Full scale: 500 dps */
#define LSM6DS0_G_FS_500_MDPS                          ((int32_t)1750)            /*!< 17.5mdps*/

#define LSM6DS0_G_FS_2000                              ((unsigned char)0x18) /*!< Full scale: 2000 dps */
#define LSM6DS0_G_FS_2000_MDPS                         ((int32_t)7000)            /*!< 70mdps*/


#define LSM6DS0_G_XEN_ENABLE                           ((unsigned char)0x08)
#define LSM6DS0_G_YEN_ENABLE                           ((unsigned char)0x10)
#define LSM6DS0_G_ZEN_ENABLE                           ((unsigned char)0x20)


#define LSM6DS0_XG_CTRL_REG6_XL                        ((unsigned char)0x20)
#define LSM6DS0_XG_CTRL_REG5_XL                        ((unsigned char)0x1F)
#define LSM6DS0_XG_OUT_X_L_XL                          ((unsigned char)0x28)
#define LSM6DS0_XG_OUT_X_H_XL                          ((unsigned char)0x29)
#define LSM6DS0_XG_OUT_Y_L_XL                          ((unsigned char)0x2A)
#define LSM6DS0_XG_OUT_Y_H_XL                          ((unsigned char)0x2B)
#define LSM6DS0_XG_OUT_Z_L_XL                          ((unsigned char)0x2C)
#define LSM6DS0_XG_OUT_Z_H_XL                          ((unsigned char)0x2D)


#define LSM6DS0_XL_ODR_10HZ                             ((uint8_t)0x20) /*!< Output Data Rate: 10 Hz*/
#define LSM6DS0_XL_ODR_50HZ                             ((uint8_t)0x40) /*!< Output Data Rate: 50 Hz */
#define LSM6DS0_XL_ODR_119HZ                            ((uint8_t)0x60) /*!< Output Data Rate: 119 Hz */
#define LSM6DS0_XL_ODR_238HZ                            ((uint8_t)0x80) /*!< Output Data Rate: 238 Hz */
#define LSM6DS0_XL_ODR_476HZ                            ((uint8_t)0xA0) /*!< Output Data Rate: 476 Hz */
#define LSM6DS0_XL_ODR_952HZ                            ((uint8_t)0xC0) /*!< Output Data Rate: 952 Hz */

#define LSM6DS0_XL_ODR_MASK                             ((uint8_t)0xE0)


#define LSM6DS0_XL_FS_2G                                ((uint8_t)0x00) /*!< Full scale: +- 2g */
#define LSM6DS0_XL_FS_4G                                ((uint8_t)0x10) /*!< Full scale: +- 4g */
#define LSM6DS0_XL_FS_8G                                ((uint8_t)0x18) /*!< Full scale: +- 8g */


#define LSM6DS0_XL_ZEN_ENABLE                             ((uint8_t)0x20)
#define LSM6DS0_XL_YEN_ENABLE                           ((uint8_t)0x10)
#define LSM6DS0_XL_XEN_ENABLE                           ((uint8_t)0x08)



IMU::IMU()
{

}

void IMU::init(I2C_Interface &i2c_)
{
    i2c = &i2c_;

    delay_loops(10000);

    m_present = false;

    if ((i2c->read_reg(LSM6DS0_ADDRESS, LSM6DS0_WHO_AM_I) == LSM6DS0_WHO_AM_I_VALUE) ||
        (i2c->read_reg(LSM6DS0_ADDRESS, LSM6DS0_WHO_AM_I) == LSM6DS0_WHO_AM_I_33_VALUE) )
      m_present = true;


    i2c->write_reg(LSM6DS0_ADDRESS, LSM6DS0_CTRL_REG1_G, LSM6DS0_G_ODR_238HZ | LSM6DS0_G_FS_500 );
    i2c->write_reg(LSM6DS0_ADDRESS, LSM6DS0_CTRL_REG4_G, LSM6DS0_G_XEN_ENABLE|LSM6DS0_G_YEN_ENABLE|LSM6DS0_G_ZEN_ENABLE); // anable x, y, z axis
    i2c->write_reg(LSM6DS0_ADDRESS, LSM6DS0_FIFO_CTR, 0); //bypass mode
    i2c->write_reg(LSM6DS0_ADDRESS, LSM6DS0_CTRL_REG3_G, 0); //hp filter disable

    i2c->write_reg(LSM6DS0_ADDRESS, LSM6DS0_XG_CTRL_REG6_XL, LSM6DS0_XL_ODR_119HZ | LSM6DS0_XL_FS_2G); //output data rate, full scale
    i2c->write_reg(LSM6DS0_ADDRESS, LSM6DS0_XG_CTRL_REG5_XL, LSM6DS0_XL_XEN_ENABLE|LSM6DS0_XL_YEN_ENABLE|LSM6DS0_XL_ZEN_ENABLE);

    sensitivity = LSM6DS0_G_FS_500_MDPS;

    delay_loops(10000);


    for (uint32_t i = 0; i < 32; i++)
        read();

    offset.x = 0;
    offset.y = 0;
    offset.z = 0;

    uint32_t calibration_iterations = 1000;
    for (uint32_t i = 0; i < calibration_iterations; i++)
    {
      read(true);
      timer.delay_ms(1);
    }

    offset.x/= calibration_iterations;
    offset.y/= calibration_iterations;
    offset.z/= calibration_iterations;

    angular_rate.x = 0;
    angular_rate.y = 0;
    angular_rate.z = 0;

    angle.x = 0;
    angle.y = 0;
    angle.z = 0;

    acceleration.x = 0;
    acceleration.y = 0;
    acceleration.z = 0;


    time_now = timer.get_time();
    time_old = time_now;


    timer.add_task(*this, IMU_DT);

    m_ready = false;
}

IMU::~IMU()
{

}

void IMU::read(bool calibration)
{
    int16_t x = 0, y = 0, z = 0;

    #if IMU_SINGLE_AXIS_MODE == true
        i2c->start();
        i2c->write(LSM6DS0_ADDRESS);
        i2c->write(LSM6DS0_GYRO_ZOUT_H);

        i2c->start();
        i2c->write(LSM6DS0_ADDRESS|0x01);

        z = ((int16_t)i2c->read(1)) << 8;
        z|= ((int16_t)i2c->read(0)) << 0;

        i2c->stop();
    #else
        i2c->start();
        i2c->write(LSM6DS0_ADDRESS);
        i2c->write(LSM6DS0_GYRO_XOUT_H);

        i2c->start();
        i2c->write(LSM6DS0_ADDRESS|0x01);

        x = ((int16_t)i2c->read(1)) << 8;
        x|= ((int16_t)i2c->read(1)) << 0;

        y = ((int16_t)i2c->read(1)) << 8;
        y|= ((int16_t)i2c->read(1)) << 0;

        z = ((int16_t)i2c->read(1)) << 8;
        z|= ((int16_t)i2c->read(0)) << 0;

        i2c->stop();
    #endif

    x/= 2;
    y/= 2;
    z/= 2;

    if (calibration)
    {
        offset.x+= x;
        offset.y+= y;
        offset.z+= z;
    }
    else
    {
        time_old = time_now;
        time_now = timer.get_time_interrupt();
        uint32_t dt = time_now - time_old;


        int32_t rx = (x - offset.x)*dt*IMU_DPS;
        int32_t ry = (y - offset.y)*dt*IMU_DPS;
        int32_t rz = (z - offset.z)*dt*IMU_DPS;

        angular_rate.x = rx/1000000;
        angular_rate.y = ry/1000000;
        angular_rate.z = rz/1000000;


        angle.x+= angular_rate.x;
        angle.y+= angular_rate.y;
        angle.z+= angular_rate.z;
    }

    #if IMU_SINGLE_AXIS_MODE == true
        i2c->start();
        i2c->write(LSM6DS0_ADDRESS);
        i2c->write(LSM6DS0_XG_OUT_Z_H_XL);

        i2c->start();
        i2c->write(LSM6DS0_ADDRESS|0x01);

        z = ((int16_t)i2c->read(1)) << 8;
        z|= ((int16_t)i2c->read(0)) << 0;

        i2c->stop();
    #else
        i2c->start();
        i2c->write(LSM6DS0_ADDRESS);
        i2c->write(LSM6DS0_XG_OUT_X_H_XL);

        i2c->start();
        i2c->write(LSM6DS0_ADDRESS|0x01);

        x = ((int16_t)i2c->read(1)) << 8;
        x|= ((int16_t)i2c->read(1)) << 0;

        y = ((int16_t)i2c->read(1)) << 8;
        y|= ((int16_t)i2c->read(1)) << 0;

        z = ((int16_t)i2c->read(1)) << 8;
        z|= ((int16_t)i2c->read(0)) << 0;

        i2c->stop();
    #endif

    acceleration.x = x;
    acceleration.y = y;
    acceleration.z = z;

    m_ready = true;
}

void IMU::main()
{
  read();
}

bool IMU::present()
{
  return m_present;
}

bool IMU::ready()
{
  bool res = m_ready;

  __disable_irq();
  if (res)
    m_ready = false;
  __enable_irq();

  return res;
}


void IMU::delay_loops(uint32_t loops)
{
  while (loops--)
    __asm("nop");
}
