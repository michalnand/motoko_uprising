#include "adc.h"
#include "stm32f30x.h"


void RCC_ADCCLKConfig(uint32_t rcc_pll_clk)
{
  uint32_t tmp = 0;

  tmp = (rcc_pll_clk >> 28);

  if (tmp != 0)
  {
    RCC->CFGR2 &= ~RCC_CFGR2_ADCPRE34;
  }
  else
  {
    RCC->CFGR2 &= ~RCC_CFGR2_ADCPRE12;
  }

  RCC->CFGR2 |= rcc_pll_clk;
}


void ADC_RegularChannelConfig(ADC_TypeDef* ADCx, uint8_t ADC_Channel, uint8_t Rank, uint8_t ADC_SampleTime)
{
  uint32_t tmpreg1 = 0, tmpreg2 = 0;


  /* Regular sequence configuration */
  /* For Rank 1 to 4 */
  if (Rank < 5)
  {
    /* Get the old register value */
    tmpreg1 = ADCx->SQR1;
    /* Calculate the mask to clear */
    tmpreg2 = 0x1F << (6 * (Rank ));
    /* Clear the old SQx bits for the selected rank */
    tmpreg1 &= ~tmpreg2;
    /* Calculate the mask to set */
    tmpreg2 = (uint32_t)(ADC_Channel) << (6 * (Rank));
    /* Set the SQx bits for the selected rank */
    tmpreg1 |= tmpreg2;
    /* Store the new register value */
    ADCx->SQR1 = tmpreg1;
  }
  /* For Rank 5 to 9 */
  else if (Rank < 10)
  {
    /* Get the old register value */
    tmpreg1 = ADCx->SQR2;
    /* Calculate the mask to clear */
    tmpreg2 = ADC_SQR2_SQ5 << (6 * (Rank - 5));
    /* Clear the old SQx bits for the selected rank */
    tmpreg1 &= ~tmpreg2;
    /* Calculate the mask to set */
    tmpreg2 = (uint32_t)(ADC_Channel) << (6 * (Rank - 5));
    /* Set the SQx bits for the selected rank */
    tmpreg1 |= tmpreg2;
    /* Store the new register value */
    ADCx->SQR2 = tmpreg1;
  }
  /* For Rank 10 to 14 */
  else if (Rank < 15)
  {
    /* Get the old register value */
    tmpreg1 = ADCx->SQR3;
    /* Calculate the mask to clear */
    tmpreg2 = ADC_SQR3_SQ10 << (6 * (Rank - 10));
    /* Clear the old SQx bits for the selected rank */
    tmpreg1 &= ~tmpreg2;
    /* Calculate the mask to set */
    tmpreg2 = (uint32_t)(ADC_Channel) << (6 * (Rank - 10));
    /* Set the SQx bits for the selected rank */
    tmpreg1 |= tmpreg2;
    /* Store the new register value */
    ADCx->SQR3 = tmpreg1;
  }
  else
  {
    /* Get the old register value */
    tmpreg1 = ADCx->SQR4;
    /* Calculate the mask to clear */
    tmpreg2 = ADC_SQR3_SQ15 << (6 * (Rank - 15));
    /* Clear the old SQx bits for the selected rank */
    tmpreg1 &= ~tmpreg2;
    /* Calculate the mask to set */
    tmpreg2 = (uint32_t)(ADC_Channel) << (6 * (Rank - 15));
    /* Set the SQx bits for the selected rank */
    tmpreg1 |= tmpreg2;
    /* Store the new register value */
    ADCx->SQR4 = tmpreg1;
  }

  /* Channel sampling configuration */
  /* if ADC_Channel_10 ... ADC_Channel_18 is selected */
  if (ADC_Channel > ((uint8_t)0x09))
  {
    /* Get the old register value */
    tmpreg1 = ADCx->SMPR2;
    /* Calculate the mask to clear */
    tmpreg2 = ADC_SMPR2_SMP10 << (3 * (ADC_Channel - 10));
    /* Clear the old channel sample time */
	ADCx->SMPR2 &= ~tmpreg2;
    /* Calculate the mask to set */
	ADCx->SMPR2 |= (uint32_t)ADC_SampleTime << (3 * (ADC_Channel - 10));

  }
  else /* ADC_Channel include in ADC_Channel_[0..9] */
  {
    /* Get the old register value */
    tmpreg1 = ADCx->SMPR1;
    /* Calculate the mask to clear */
    tmpreg2 = ADC_SMPR1_SMP1 << (3 * (ADC_Channel - 1));
    /* Clear the old channel sample time */
	ADCx->SMPR1 &= ~tmpreg2;
    /* Calculate the mask to set */
	ADCx->SMPR1 |= (uint32_t)ADC_SampleTime << (3 * (ADC_Channel));
  }
}

void adc_init()
{
  RCC_ADCCLKConfig(((uint32_t)0x00000110));
  RCC->AHBENR |= RCC_AHBENR_ADC12EN;

  RCC_ADCCLKConfig(((uint32_t)0x10002200));
  RCC->AHBENR |= RCC_AHBENR_ADC34EN;

  uint32_t cfgr;
  cfgr = 0x00|  //ADC_ContinuousConvMode_Disable|
         0x00| //ADC_Resolution_12b|
         0x00|  //ADC_ExternalTrigConvEvent_0|
         0x00|       //ADC_ExternalTrigInjecEventEdge_None|
         0x00|       //ADC_DataAlign_Right|
         0x00|       //ADC_OverrunMode_Disable|
         0x00;       //ADC_AutoInjec_Disable;

  ADC1->CFGR = cfgr;
  ADC2->CFGR = cfgr;
  ADC3->CFGR = cfgr;


  ADC_RegularChannelConfig(ADC1, 1, 1,  0x02); //ADC_SampleTime_4Cycles5
  ADC_RegularChannelConfig(ADC2, 1, 1,  0x02);
  ADC_RegularChannelConfig(ADC3, 12, 1,  0x02);

  //enable ADC
  ADC1->CR |= ADC_CR_ADEN;
  ADC2->CR |= ADC_CR_ADEN;
  ADC3->CR |= ADC_CR_ADEN;
}



int adc_read(int channel)
{
  //return 0;
	int result = 0;


  ADC_TypeDef* ADCx;
  uint8_t ADC_Channel;

  switch (channel)
  {
      case ADC0_CH:
                    ADCx = ADC1;
                    ADC_Channel = 1;
                    break;

      case ADC1_CH:
                    ADCx = ADC1;
                    ADC_Channel = 2;
                    break;

      case ADC2_CH:
                    ADCx = ADC1;
                    ADC_Channel = 3;
                    break;

      case ADC3_CH:
                    ADCx = ADC1;
                    ADC_Channel = 4;
                    break;

      case ADC4_CH:
                    ADCx = ADC2;
                    ADC_Channel = 1;
                    break;

      case ADC5_CH:
                    ADCx = ADC2;
                    ADC_Channel = 2;
                    break;

      case ADC6_CH:
                    ADCx = ADC2;
                    ADC_Channel = 3;
                    break;

      case ADC7_CH:
                    ADCx = ADC2;
                    ADC_Channel = 4;
                    break;

      case ADC8_CH:
                    ADCx = ADC3;
                    ADC_Channel = 12;
                    break;

      case ADC9_CH:
                    ADCx = ADC3;
                    ADC_Channel = 1;
                    break;

      case ADC10_CH:
                    ADCx = ADC1;
                    ADC_Channel = 6;
                    break;
      default:
                ADCx = ADC1;
                ADC_Channel = 1;
                break;
    }



    ADC_RegularChannelConfig( ADCx, ADC_Channel, 1, 0x01);
    //ADC_RegularChannelConfig( ADCx, ADC_Channel, 1, 0x02);

    //start conversion
    ADCx->CR |= ADC_CR_ADSTART;

    //wait until conversion done ADC_FLAG_EOC
    while ((ADCx->ISR & 0x0004) == 0)
      __asm("nop");

    //read result
    result = ADCx->DR;

  	return result;
}
