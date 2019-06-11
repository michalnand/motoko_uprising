#ifndef _STM32F30X_FUNC_H_
#define _STM32F30X_FUNC_H_

#include <stm32f30x.h>
#include <system_stm32f30x.h>
#include <config_device.h>

void nvic_init(uint32_t IRQChannel, uint32_t ChannelPreemptionPriority, uint32_t ChannelSubPriority);

void timer_init(TIM_TypeDef* TIMx, uint32_t counter_mode, uint32_t clock_division, uint32_t period, uint32_t prescaler);

void usart_init(USART_TypeDef* USARTx, uint32_t baudrate);


#define EXTI_Trigger_Rising           0x08
#define EXTI_Trigger_Falling          0x0C
#define EXTI_Trigger_Rising_Falling   0x10

void exti_clear_pending_bit(uint32_t exti_line);
void exti_line_config(uint8_t port_source, uint8_t pin_source);
void configure_exti(uint32_t exti_line, uint32_t trigger);


#endif
