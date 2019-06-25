#include <vl53l0x.h>
#include <vl53l0x_regs.h>

VL53L0X::VL53L0X()
{
    result = -1;
}

VL53L0X::~VL53L0X()
{

}

int VL53L0X::init(I2C_Interface *i2c_)
{
    this->i2c = i2c_;
    result = -1;

    //switch to 2.8V mode
    i2c->write_reg(I2C_ADDRESS, VHV_CONFIG_PAD_SCL_SDA__EXTSUP_HV, i2c->read_reg(I2C_ADDRESS, VHV_CONFIG_PAD_SCL_SDA__EXTSUP_HV) | 0x01);

    if (i2c->read_reg(I2C_ADDRESS, WHO_AM_I) != WHO_AM_I_VALUE)
        return -1;


    i2c->write_reg(I2C_ADDRESS, 0x88, 0x00);
    i2c->write_reg(I2C_ADDRESS, 0x80, 0x01);
    i2c->write_reg(I2C_ADDRESS, 0xFF, 0x01);
    i2c->write_reg(I2C_ADDRESS, 0x00, 0x00);
    stop_variable = i2c->read_reg(I2C_ADDRESS, 0x91);
    i2c->write_reg(I2C_ADDRESS, 0x00, 0x01);
    i2c->write_reg(I2C_ADDRESS, 0xFF, 0x00);
    i2c->write_reg(I2C_ADDRESS, 0x80, 0x00);

    // disable SIGNAL_RATE_MSRC (bit 1) and SIGNAL_RATE_PRE_RANGE (bit 4) limit checks
    i2c->write_reg(I2C_ADDRESS, MSRC_CONFIG_CONTROL, i2c->read_reg(I2C_ADDRESS, MSRC_CONFIG_CONTROL) | 0x12);

    // set final range signal rate limit to 0.25 MCPS (million counts per second)
    setSignalRateLimit(0.25);
    i2c->write_reg(I2C_ADDRESS, SYSTEM_SEQUENCE_CONFIG, 0xFF);

    unsigned char spad_count = 0;
    bool spad_type_is_aperture;
    if (!getSpadInfo(&spad_count, &spad_type_is_aperture))
    {
        return -2;
    }

    // The SPAD map (RefGoodSpadMap) is read by VL53L0X_get_info_from_device() in
    // the API, but the same data seems to be more easily readable from
    // GLOBAL_CONFIG_SPAD_ENABLES_REF_0 through _6, so read it from there
    unsigned char ref_spad_map[6];
    i2c->read_reg_multi(I2C_ADDRESS, GLOBAL_CONFIG_SPAD_ENABLES_REF_0, ref_spad_map, 6);

    // -- VL53L0X_set_reference_spads() begin (assume NVM values are valid)
    i2c->write_reg(I2C_ADDRESS, 0xFF, 0x01);
    i2c->write_reg(I2C_ADDRESS, DYNAMIC_SPAD_REF_EN_START_OFFSET, 0x00);
    i2c->write_reg(I2C_ADDRESS, DYNAMIC_SPAD_NUM_REQUESTED_REF_SPAD, 0x2C);
    i2c->write_reg(I2C_ADDRESS, 0xFF, 0x00);
    i2c->write_reg(I2C_ADDRESS, GLOBAL_CONFIG_REF_EN_START_SELECT, 0xB4);

    unsigned char first_spad_to_enable = spad_type_is_aperture ? 12 : 0; // 12 is the first aperture spad
    unsigned char spads_enabled = 0;

    for (unsigned char i = 0; i < 48; i++)
    {
        if (i < first_spad_to_enable || spads_enabled == spad_count)
        {
          // This bit is lower than the first one that should be enabled, or
          // (reference_spad_count) bits have already been enabled, so zero this bit
          ref_spad_map[i / 8] &= ~(1 << (i % 8));
        }
        else if ((ref_spad_map[i / 8] >> (i % 8)) & 0x1)
        {
          spads_enabled++;
        }
    }

    i2c->write_reg_multi(I2C_ADDRESS, GLOBAL_CONFIG_SPAD_ENABLES_REF_0, ref_spad_map, 6);

    // -- VL53L0X_set_reference_spads() end
    // -- VL53L0X_load_tuning_settings() begin
    // DefaultTuningSettings from vl53l0x_tuning.h

    i2c->write_reg(I2C_ADDRESS, 0xFF, 0x01);
    i2c->write_reg(I2C_ADDRESS, 0x00, 0x00);

    i2c->write_reg(I2C_ADDRESS, 0xFF, 0x00);
    i2c->write_reg(I2C_ADDRESS, 0x09, 0x00);
    i2c->write_reg(I2C_ADDRESS, 0x10, 0x00);
    i2c->write_reg(I2C_ADDRESS, 0x11, 0x00);

    i2c->write_reg(I2C_ADDRESS, 0x24, 0x01);
    i2c->write_reg(I2C_ADDRESS, 0x25, 0xFF);
    i2c->write_reg(I2C_ADDRESS, 0x75, 0x00);

    i2c->write_reg(I2C_ADDRESS, 0xFF, 0x01);
    i2c->write_reg(I2C_ADDRESS, 0x4E, 0x2C);
    i2c->write_reg(I2C_ADDRESS, 0x48, 0x00);
    i2c->write_reg(I2C_ADDRESS, 0x30, 0x20);

    i2c->write_reg(I2C_ADDRESS, 0xFF, 0x00);
    i2c->write_reg(I2C_ADDRESS, 0x30, 0x09);
    i2c->write_reg(I2C_ADDRESS, 0x54, 0x00);
    i2c->write_reg(I2C_ADDRESS, 0x31, 0x04);
    i2c->write_reg(I2C_ADDRESS, 0x32, 0x03);
    i2c->write_reg(I2C_ADDRESS, 0x40, 0x83);
    i2c->write_reg(I2C_ADDRESS, 0x46, 0x25);
    i2c->write_reg(I2C_ADDRESS, 0x60, 0x00);
    i2c->write_reg(I2C_ADDRESS, 0x27, 0x00);
    i2c->write_reg(I2C_ADDRESS, 0x50, 0x06);
    i2c->write_reg(I2C_ADDRESS, 0x51, 0x00);
    i2c->write_reg(I2C_ADDRESS, 0x52, 0x96);
    i2c->write_reg(I2C_ADDRESS, 0x56, 0x08);
    i2c->write_reg(I2C_ADDRESS, 0x57, 0x30);
    i2c->write_reg(I2C_ADDRESS, 0x61, 0x00);
    i2c->write_reg(I2C_ADDRESS, 0x62, 0x00);
    i2c->write_reg(I2C_ADDRESS, 0x64, 0x00);
    i2c->write_reg(I2C_ADDRESS, 0x65, 0x00);
    i2c->write_reg(I2C_ADDRESS, 0x66, 0xA0);

    i2c->write_reg(I2C_ADDRESS, 0xFF, 0x01);
    i2c->write_reg(I2C_ADDRESS, 0x22, 0x32);
    i2c->write_reg(I2C_ADDRESS, 0x47, 0x14);
    i2c->write_reg(I2C_ADDRESS, 0x49, 0xFF);
    i2c->write_reg(I2C_ADDRESS, 0x4A, 0x00);

    i2c->write_reg(I2C_ADDRESS, 0xFF, 0x00);
    i2c->write_reg(I2C_ADDRESS, 0x7A, 0x0A);
    i2c->write_reg(I2C_ADDRESS, 0x7B, 0x00);
    i2c->write_reg(I2C_ADDRESS, 0x78, 0x21);

    i2c->write_reg(I2C_ADDRESS, 0xFF, 0x01);
    i2c->write_reg(I2C_ADDRESS, 0x23, 0x34);
    i2c->write_reg(I2C_ADDRESS, 0x42, 0x00);
    i2c->write_reg(I2C_ADDRESS, 0x44, 0xFF);
    i2c->write_reg(I2C_ADDRESS, 0x45, 0x26);
    i2c->write_reg(I2C_ADDRESS, 0x46, 0x05);
    i2c->write_reg(I2C_ADDRESS, 0x40, 0x40);
    i2c->write_reg(I2C_ADDRESS, 0x0E, 0x06);
    i2c->write_reg(I2C_ADDRESS, 0x20, 0x1A);
    i2c->write_reg(I2C_ADDRESS, 0x43, 0x40);

    i2c->write_reg(I2C_ADDRESS, 0xFF, 0x00);
    i2c->write_reg(I2C_ADDRESS, 0x34, 0x03);
    i2c->write_reg(I2C_ADDRESS, 0x35, 0x44);

    i2c->write_reg(I2C_ADDRESS, 0xFF, 0x01);
    i2c->write_reg(I2C_ADDRESS, 0x31, 0x04);
    i2c->write_reg(I2C_ADDRESS, 0x4B, 0x09);
    i2c->write_reg(I2C_ADDRESS, 0x4C, 0x05);
    i2c->write_reg(I2C_ADDRESS, 0x4D, 0x04);

    i2c->write_reg(I2C_ADDRESS, 0xFF, 0x00);
    i2c->write_reg(I2C_ADDRESS, 0x44, 0x00);
    i2c->write_reg(I2C_ADDRESS, 0x45, 0x20);
    i2c->write_reg(I2C_ADDRESS, 0x47, 0x08);
    i2c->write_reg(I2C_ADDRESS, 0x48, 0x28);
    i2c->write_reg(I2C_ADDRESS, 0x67, 0x00);
    i2c->write_reg(I2C_ADDRESS, 0x70, 0x04);
    i2c->write_reg(I2C_ADDRESS, 0x71, 0x01);
    i2c->write_reg(I2C_ADDRESS, 0x72, 0xFE);
    i2c->write_reg(I2C_ADDRESS, 0x76, 0x00);
    i2c->write_reg(I2C_ADDRESS, 0x77, 0x00);

    i2c->write_reg(I2C_ADDRESS, 0xFF, 0x01);
    i2c->write_reg(I2C_ADDRESS, 0x0D, 0x01);

    i2c->write_reg(I2C_ADDRESS, 0xFF, 0x00);
    i2c->write_reg(I2C_ADDRESS, 0x80, 0x01);
    i2c->write_reg(I2C_ADDRESS, 0x01, 0xF8);

    i2c->write_reg(I2C_ADDRESS, 0xFF, 0x01);
    i2c->write_reg(I2C_ADDRESS, 0x8E, 0x01);
    i2c->write_reg(I2C_ADDRESS, 0x00, 0x01);
    i2c->write_reg(I2C_ADDRESS, 0xFF, 0x00);
    i2c->write_reg(I2C_ADDRESS, 0x80, 0x00);

      // -- VL53L0X_load_tuning_settings() end

      // "Set interrupt config to new sample ready"
      // -- VL53L0X_SetGpioConfig() begin

    i2c->write_reg(I2C_ADDRESS, SYSTEM_INTERRUPT_CONFIG_GPIO, 0x04);
    i2c->write_reg(I2C_ADDRESS, GPIO_HV_MUX_ACTIVE_HIGH, i2c->read_reg(I2C_ADDRESS, GPIO_HV_MUX_ACTIVE_HIGH) & ~0x10); // active low
    i2c->write_reg(I2C_ADDRESS, SYSTEM_INTERRUPT_CLEAR, 0x01);


    /*
    // -- VL53L0X_SetGpioConfig() end
    unsigned long int measurement_timing_budget_us = getMeasurementTimingBudget();

    // "Disable MSRC and TCC by default"
    // MSRC = Minimum Signal Rate Check
    // TCC = Target CentreCheck
    // -- VL53L0X_SetSequenceStepEnable() begin
    i2c->write_reg(I2C_ADDRESS, SYSTEM_SEQUENCE_CONFIG, 0xE8);
    // -- VL53L0X_SetSequenceStepEnable() end
    // "Recalculate timing budget"
    setMeasurementTimingBudget(measurement_timing_budget_us);
    */


    // VL53L0X_StaticInit() end
    // VL53L0X_PerformRefCalibration() begin (VL53L0X_perform_ref_calibration())
    // -- VL53L0X_perform_vhv_calibration() begin

    i2c->write_reg(I2C_ADDRESS, SYSTEM_SEQUENCE_CONFIG, 0x01);
    if (!performSingleRefCalibration(0x40))
    {
        return -3;
    }

      // -- VL53L0X_perform_vhv_calibration() end

      // -- VL53L0X_perform_phase_calibration() begin
      i2c->write_reg(I2C_ADDRESS, SYSTEM_SEQUENCE_CONFIG, 0x02);
      if (!performSingleRefCalibration(0x00))
      { return -4;

       }

      // -- VL53L0X_perform_phase_calibration() end

      // "restore the previous Sequence Config"
      i2c->write_reg(I2C_ADDRESS, SYSTEM_SEQUENCE_CONFIG, 0xE8);

      // VL53L0X_PerformRefCalibration() end

      return 0;
}

int VL53L0X::read_single_shot()
{
  i2c->write_reg(I2C_ADDRESS, 0x80, 0x01);
  i2c->write_reg(I2C_ADDRESS, 0xFF, 0x01);
  i2c->write_reg(I2C_ADDRESS, 0x00, 0x00);
  i2c->write_reg(I2C_ADDRESS, 0x91, stop_variable);
  i2c->write_reg(I2C_ADDRESS, 0x00, 0x01);
  i2c->write_reg(I2C_ADDRESS, 0xFF, 0x00);
  i2c->write_reg(I2C_ADDRESS, 0x80, 0x00);

  i2c->write_reg(I2C_ADDRESS, SYSRANGE_START, 0x01);

  // "Wait until start bit has been cleared"
  unsigned int timeout = 0;
  while (i2c->read_reg(I2C_ADDRESS, SYSRANGE_START) & 0x01)
  {
      timeout--;
      if (timeout == 0)
      {
          result = -1;
          return -1;
      }
  }

  result = i2c->read_reg_16bit(I2C_ADDRESS, RESULT_RANGE_STATUS + 10);

  if (result > 500)
        result = -2;

  return result;
}


int VL53L0X::read_countinuous()
{
    unsigned long int timeout = 10000000;
    while ((i2c->read_reg(I2C_ADDRESS, RESULT_INTERRUPT_STATUS) & 0x07) == 0)
    {
        timeout--;
        if (timeout == 0)
        {
            result = -1;
            return result;
        }
    }

    // assumptions: Linearity Corrective Gain is 1000 (default);
    // fractional ranging is not enabled
    int result = i2c->read_reg_16bit(I2C_ADDRESS, RESULT_RANGE_STATUS + 10);

    i2c->write_reg(I2C_ADDRESS, SYSTEM_INTERRUPT_CLEAR, 0x01);

    if (result > 500)
          result = -2;

    return result;
}


void VL53L0X::start_continuous()
{
    i2c->write_reg(I2C_ADDRESS, 0x80, 0x01);
    i2c->write_reg(I2C_ADDRESS, 0xFF, 0x01);
    i2c->write_reg(I2C_ADDRESS, 0x00, 0x00);
    i2c->write_reg(I2C_ADDRESS, 0x91, stop_variable);
    i2c->write_reg(I2C_ADDRESS, 0x00, 0x01);
    i2c->write_reg(I2C_ADDRESS, 0xFF, 0x00);
    i2c->write_reg(I2C_ADDRESS, 0x80, 0x00);

    // continuous back-to-back mode
    i2c->write_reg(I2C_ADDRESS, SYSRANGE_START, 0x02); // VL53L0X_REG_SYSRANGE_MODE_BACKTOBACK
}




int VL53L0X::get()
{
    return result;
}


bool VL53L0X::setSignalRateLimit(float limit_Mcps)
{
    if (limit_Mcps < 0 || limit_Mcps > 511.99)
    {
        return false;
    }

    // Q9.7 fixed point format (9 integer bits, 7 fractional bits)
    i2c->write_reg_16bit(I2C_ADDRESS, FINAL_RANGE_CONFIG_MIN_COUNT_RATE_RTN_LIMIT, limit_Mcps * (1 << 7));

    return true;
}


bool VL53L0X::getSpadInfo(unsigned char *count, bool *type_is_aperture)
{
  unsigned char tmp;

  i2c->write_reg(I2C_ADDRESS, 0x80, 0x01);
  i2c->write_reg(I2C_ADDRESS, 0xFF, 0x01);
  i2c->write_reg(I2C_ADDRESS, 0x00, 0x00);

  i2c->write_reg(I2C_ADDRESS, 0xFF, 0x06);
  i2c->write_reg(I2C_ADDRESS, 0x83, i2c->read_reg(I2C_ADDRESS, 0x83) | 0x04);
  i2c->write_reg(I2C_ADDRESS, 0xFF, 0x07);
  i2c->write_reg(I2C_ADDRESS, 0x81, 0x01);

  i2c->write_reg(I2C_ADDRESS, 0x80, 0x01);

  i2c->write_reg(I2C_ADDRESS, 0x94, 0x6b);
  i2c->write_reg(I2C_ADDRESS, 0x83, 0x00);

  unsigned int timeout = 0xffff;
  while (i2c->read_reg(I2C_ADDRESS, 0x83) == 0x00)
  {
      timeout--;
      if (timeout == 0)
        return false;
  }

  i2c->write_reg(I2C_ADDRESS, 0x83, 0x01);
  tmp =  i2c->read_reg(I2C_ADDRESS, 0x92);

  *count = tmp & 0x7f;
  *type_is_aperture = (tmp >> 7) & 0x01;

  i2c->write_reg(I2C_ADDRESS, 0x81, 0x00);
  i2c->write_reg(I2C_ADDRESS, 0xFF, 0x06);
  i2c->write_reg(I2C_ADDRESS, 0x83, i2c->read_reg(I2C_ADDRESS, 0x83)  & ~0x04);
  i2c->write_reg(I2C_ADDRESS, 0xFF, 0x01);
  i2c->write_reg(I2C_ADDRESS, 0x00, 0x01);

  i2c->write_reg(I2C_ADDRESS, 0xFF, 0x00);
  i2c->write_reg(I2C_ADDRESS, 0x80, 0x00);

  return true;
}





// based on VL53L0X_perform_single_ref_calibration()
bool VL53L0X::performSingleRefCalibration(unsigned char vhv_init_byte)
{
  i2c->write_reg(I2C_ADDRESS, SYSRANGE_START, 0x01 | vhv_init_byte); // VL53L0X_REG_SYSRANGE_MODE_START_STOP

  unsigned int timeout = 0xffff;
  while ((i2c->read_reg(I2C_ADDRESS, RESULT_INTERRUPT_STATUS) & 0x07) == 0)
  {
      timeout--;
      if (timeout == 0)
        return false;
  }

  i2c->write_reg(I2C_ADDRESS, SYSTEM_INTERRUPT_CLEAR, 0x01);

  i2c->write_reg(I2C_ADDRESS, SYSRANGE_START, 0x00);

  return true;
}
