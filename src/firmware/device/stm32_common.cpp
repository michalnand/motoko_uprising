#include "stm32_common.h"

#define F_CPU     ((unsigned int)75000000)

void nvic_init(uint32_t IRQChannel, uint32_t ChannelPreemptionPriority, uint32_t ChannelSubPriority)
{
  uint8_t tmppriority = 0x00, tmppre = 0x00, tmpsub = 0x0F;


  /* Compute the Corresponding IRQ Priority --------------------------------*/
  tmppriority = (0x700 - ((SCB->AIRCR) & (uint32_t)0x700))>> 0x08;
  tmppre = (0x4 - tmppriority);
  tmpsub = tmpsub >> tmppriority;

  tmppriority = ChannelPreemptionPriority << tmppre;
  tmppriority |=  (uint8_t)(ChannelSubPriority & tmpsub);

  tmppriority = tmppriority << 0x04;

  NVIC->IP[IRQChannel] = tmppriority;

  /* Enable the Selected IRQ Channels --------------------------------------*/
  NVIC->ISER[IRQChannel >> 0x05] =
    (uint32_t)0x01 << (IRQChannel & (uint8_t)0x1F);
}

void timer_init(TIM_TypeDef* TIMx, uint32_t counter_mode, uint32_t clock_division, uint32_t period, uint32_t prescaler)
{
  uint16_t tmpcr1 = 0;
  tmpcr1 = TIMx->CR1;

  if((TIMx == TIM1) || (TIMx == TIM8)|| (TIMx == TIM2) ||
     (TIMx == TIM3) || (TIMx == TIM4) || (TIMx == TIM20))
  {
    /* Select the Counter Mode */
    tmpcr1 &= (uint16_t)(~(TIM_CR1_DIR | TIM_CR1_CMS));
    tmpcr1 |= (uint32_t)counter_mode;
  }

  if((TIMx != TIM6) && (TIMx != TIM7))
  {
    /* Set the clock division */
    tmpcr1 &=  (uint16_t)(~TIM_CR1_CKD);
    tmpcr1 |= (uint32_t)clock_division;
  }

  TIMx->CR1 = tmpcr1;

  /* Set the Autoreload value */
  TIMx->ARR = period ;

  /* Set the Prescaler value */
  TIMx->PSC = prescaler;

  if ((TIMx == TIM1) || (TIMx == TIM8)|| (TIMx == TIM15) ||
      (TIMx == TIM16) || (TIMx == TIM17)|| (TIMx == TIM20))
  {
    /* Set the Repetition Counter value */
    TIMx->RCR = 0;
  }

  /* Generate an update event to reload the Prescaler
     and the repetition counter(only for TIM1 and TIM8) value immediately */
  TIMx->EGR = 0x01; //TIM_PSCReloadMode_Immediate;

  //timer enable
  TIMx->CR1 |= TIM_CR1_CEN;

  // Enable interrupt on update event
  TIMx->DIER |= TIM_DIER_UIE;
}



void usart_init(USART_TypeDef* USARTx, uint32_t baudrate)
{
  uint32_t apbclock  = F_CPU;

  USARTx->CR2 = 0;  //1stop bit
  USARTx->CR1 = USART_CR1_RE|USART_CR1_TE;  //8bit word, no parity, RX, TX enable
  USARTx->CR3 = 0;

  USARTx->BRR = apbclock/baudrate;
  USARTx->CR1 |= USART_CR1_UE;    //usart enable
}




void exti_clear_pending_bit(uint32_t exti_line)
{
    *(__IO uint32_t *) (((uint32_t) &(EXTI->PR)) + ((exti_line) >> 5 ) * 0x20) = (1 << (exti_line & 0x1F));
}

void exti_line_config(uint8_t port_source, uint8_t pin_source)
{
  uint32_t tmp = 0x00;

  tmp = ((uint32_t)0x0F) << (0x04 * (pin_source & (uint8_t)0x03));
  SYSCFG->EXTICR[pin_source >> 0x02] &= ~tmp;
  SYSCFG->EXTICR[pin_source >> 0x02] |= (((uint32_t)port_source) << (0x04 * (pin_source & (uint8_t)0x03)));
}

void configure_exti(uint32_t exti_line, uint32_t trigger)
{
  uint32_t tmp = (uint32_t)EXTI_BASE;

  /* Clear EXTI line configuration */
  *(__IO uint32_t *) (((uint32_t) &(EXTI->IMR)) + ((exti_line) >> 5 ) * 0x20) &= ~(uint32_t)(1 << (exti_line & 0x1F));
  *(__IO uint32_t *) (((uint32_t) &(EXTI->EMR)) + ((exti_line) >> 5 ) * 0x20) &= ~(uint32_t)(1 << (exti_line & 0x1F));

  uint32_t EXTI_Mode = 0;
  tmp += EXTI_Mode + (((exti_line) >> 5 ) * 0x20);

  *(__IO uint32_t *) tmp |= (uint32_t)(1 << (exti_line & 0x1F));

  tmp = (uint32_t)EXTI_BASE;

  /* Clear Rising Falling edge configuration */

  *(__IO uint32_t *) (((uint32_t) &(EXTI->RTSR)) + ((exti_line) >> 5 ) * 0x20) &= ~(uint32_t)(1 << (exti_line & 0x1F));
  *(__IO uint32_t *) (((uint32_t) &(EXTI->FTSR)) + ((exti_line) >> 5 ) * 0x20) &= ~(uint32_t)(1 << (exti_line & 0x1F));


  if (trigger == EXTI_Trigger_Rising_Falling)
  {
    *(__IO uint32_t *) (((uint32_t) &(EXTI->RTSR)) + ((exti_line) >> 5 ) * 0x20) |= (uint32_t)(1 << (exti_line & 0x1F));
    *(__IO uint32_t *) (((uint32_t) &(EXTI->FTSR)) + ((exti_line) >> 5 ) * 0x20) |= (uint32_t)(1 << (exti_line & 0x1F));
  }
  else
  {
    /* Rising or falling edge */
    tmp += trigger + (((exti_line) >> 5 ) * 0x20);
    *(__IO uint32_t *) tmp |= (uint32_t)(1 << (exti_line & 0x1F));
  }
}
