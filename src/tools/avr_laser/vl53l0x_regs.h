#ifndef _VL53L0X_REGS_H_
#define _VL53L0X_REGS_H_

#define I2C_ADDRESS                             ((unsigned char)0x52) // ((unsigned char)0b0101 0010)
#define WHO_AM_I                            ((unsigned char)0x00C0)
#define WHO_AM_I_VALUE                      ((unsigned char)0xEE) //who am i value

#define SYSRANGE_START                              ((unsigned char)0x00)
#define SYSTEM_THRESH_HIGH                          ((unsigned char)0x0C)
#define SYSTEM_THRESH_LOW                           ((unsigned char)0x0E)

#define SYSTEM_SEQUENCE_CONFIG                      ((unsigned char)0x01)
#define SYSTEM_RANGE_CONFIG                         ((unsigned char)0x09)
#define SYSTEM_INTERMEASUREMENT_PERIOD              ((unsigned char)0x04)

#define SYSTEM_INTERRUPT_CONFIG_GPIO                ((unsigned char)0x0A)

#define GPIO_HV_MUX_ACTIVE_HIGH                     ((unsigned char)0x84)

#define SYSTEM_INTERRUPT_CLEAR                      ((unsigned char)0x0B)

#define RESULT_INTERRUPT_STATUS                     ((unsigned char)0x13)
#define RESULT_RANGE_STATUS                         ((unsigned char)0x14)

#define RESULT_CORE_AMBIENT_WINDOW_EVENTS_RTN       ((unsigned char)0xBC)
#define RESULT_CORE_RANGING_TOTAL_EVENTS_RTN        ((unsigned char)0xC0)
#define RESULT_CORE_AMBIENT_WINDOW_EVENTS_REF       ((unsigned char)0xD0)
#define RESULT_CORE_RANGING_TOTAL_EVENTS_REF        ((unsigned char)0xD4)
#define RESULT_PEAK_SIGNAL_RATE_REF                 ((unsigned char)0xB6)

#define ALGO_PART_TO_PART_RANGE_OFFSET_MM           ((unsigned char)0x28)


#define MSRC_CONFIG_CONTROL                         ((unsigned char)0x60)

#define PRE_RANGE_CONFIG_MIN_SNR                    ((unsigned char)0x27)
#define PRE_RANGE_CONFIG_VALID_PHASE_LOW            ((unsigned char)0x56)
#define PRE_RANGE_CONFIG_VALID_PHASE_HIGH           ((unsigned char)0x57)
#define PRE_RANGE_MIN_COUNT_RATE_RTN_LIMIT          ((unsigned char)0x64)

#define FINAL_RANGE_CONFIG_MIN_SNR                  ((unsigned char)0x67)
#define FINAL_RANGE_CONFIG_VALID_PHASE_LOW          ((unsigned char)0x47)
#define FINAL_RANGE_CONFIG_VALID_PHASE_HIGH         ((unsigned char)0x48)
#define FINAL_RANGE_CONFIG_MIN_COUNT_RATE_RTN_LIMIT ((unsigned char)0x44)

#define PRE_RANGE_CONFIG_SIGMA_THRESH_HI            ((unsigned char)0x61)
#define PRE_RANGE_CONFIG_SIGMA_THRESH_LO            ((unsigned char)0x62)

#define PRE_RANGE_CONFIG_VCSEL_PERIOD               ((unsigned char)0x50)
#define PRE_RANGE_CONFIG_TIMEOUT_MACROP_HI          ((unsigned char)0x51)
#define PRE_RANGE_CONFIG_TIMEOUT_MACROP_LO          ((unsigned char)0x52)

#define SYSTEM_HISTOGRAM_BIN                        ((unsigned char)0x81)
#define HISTOGRAM_CONFIG_INITIAL_PHASE_SELECT       ((unsigned char)0x33)
#define HISTOGRAM_CONFIG_READOUT_CTRL               ((unsigned char)0x55)

#define FINAL_RANGE_CONFIG_VCSEL_PERIOD             ((unsigned char)0x70)
#define FINAL_RANGE_CONFIG_TIMEOUT_MACROP_HI        ((unsigned char)0x71)
#define FINAL_RANGE_CONFIG_TIMEOUT_MACROP_LO        ((unsigned char)0x72)
#define CROSSTALK_COMPENSATION_PEAK_RATE_MCPS       ((unsigned char)0x20)

#define MSRC_CONFIG_TIMEOUT_MACROP                  ((unsigned char)0x46)

#define SOFT_RESET_GO2_SOFT_RESET_N                 ((unsigned char)0xBF)
#define IDENTIFICATION_MODEL_ID                     ((unsigned char)0xC0)
#define IDENTIFICATION_REVISION_ID                  ((unsigned char)0xC2)

#define OSC_CALIBRATE_VAL                           ((unsigned char)0xF8)

#define GLOBAL_CONFIG_VCSEL_WIDTH                   ((unsigned char)0x32)
#define GLOBAL_CONFIG_SPAD_ENABLES_REF_0            ((unsigned char)0xB0)
#define GLOBAL_CONFIG_SPAD_ENABLES_REF_1            ((unsigned char)0xB1)
#define GLOBAL_CONFIG_SPAD_ENABLES_REF_2            ((unsigned char)0xB2)
#define GLOBAL_CONFIG_SPAD_ENABLES_REF_3            ((unsigned char)0xB3)
#define GLOBAL_CONFIG_SPAD_ENABLES_REF_4            ((unsigned char)0xB4)
#define GLOBAL_CONFIG_SPAD_ENABLES_REF_5            ((unsigned char)0xB5)

#define GLOBAL_CONFIG_REF_EN_START_SELECT           ((unsigned char)0xB6)
#define DYNAMIC_SPAD_NUM_REQUESTED_REF_SPAD         ((unsigned char)0x4E)
#define DYNAMIC_SPAD_REF_EN_START_OFFSET            ((unsigned char)0x4F)
#define POWER_MANAGEMENT_GO1_POWER_FORCE            ((unsigned char)0x80)

#define VHV_CONFIG_PAD_SCL_SDA__EXTSUP_HV           ((unsigned char)0x89)

#define ALGO_PHASECAL_LIM                           ((unsigned char)0x30)

#endif
