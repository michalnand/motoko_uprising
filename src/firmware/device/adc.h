#ifndef _ADC_H_
#define _ADC_H_

#define ADC0_CH   ((unsigned int)0)
#define ADC1_CH   ((unsigned int)1)
#define ADC2_CH   ((unsigned int)2)
#define ADC3_CH   ((unsigned int)3)
#define ADC4_CH   ((unsigned int)4)
#define ADC5_CH   ((unsigned int)5)
#define ADC6_CH   ((unsigned int)6)
#define ADC7_CH   ((unsigned int)7)

#define ADC8_CH   ((unsigned int)8)
#define ADC9_CH   ((unsigned int)9)
#define ADC10_CH   ((unsigned int)10)

#define ADC_FRONT   ADC8_CH
#define ADC_LEFT    ADC9_CH
#define ADC_RIGHT   ADC10_CH

void adc_init();
int adc_read(int channel);

#endif
