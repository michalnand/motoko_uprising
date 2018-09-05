#include "stm32f303.h"


#ifdef __cplusplus
extern "C" {
#endif


// Memory locations defined by the linker
extern uint32_t _estack[];
extern uint32_t _sdata[], _edata[];
extern uint32_t _etext[];                // End of code/flash


//  Default interrupt handler
void __attribute__((interrupt("IRQ"))) Default_Handler()
{

  while (1)
  {
    __asm("nop");
    GPIOB->BRR|= (1<<15);
  }
}


//  Default interrupt handler
void __attribute__((interrupt("IRQ"))) HardFault_Handler()
{
  while (1)
  {
    __asm("nop");
    GPIOB->BRR|= (1<<15);
  }
}


void Reset_Handler() __attribute__((naked, aligned(2)));
/* Weak definitions of handlers point to Default_Handler if not implemented */
void NMI_Handler()          __attribute__ ((weak, alias("Default_Handler")));
// void HardFault_Handler()          __attribute__ ((weak, alias("Default_Handler")));
void MemManage_Handler()          __attribute__ ((weak, alias("Default_Handler")));
void BusFault_Handler()          __attribute__ ((weak, alias("Default_Handler")));
void UsageFault_Handler()          __attribute__ ((weak, alias("Default_Handler")));
void DebugMon_Handler()          __attribute__ ((weak, alias("Default_Handler")));
void PendSV_Handler()       __attribute__ ((weak, alias("Default_Handler")));
void SVC_Handler()          __attribute__ ((weak, alias("Default_Handler")));
void SysTick_Handler()      __attribute__ ((weak, alias("Default_Handler")));

void WWDG_IRQHandler() __attribute__((weak, alias("Default_Handler")));                   /* Window WatchDog */
void PVD_IRQHandler() __attribute__((weak, alias("Default_Handler")));                    /* PVD through EXTI Line detection */
void TAMPER_STAMP_IRQHandler() __attribute__((weak, alias("Default_Handler")));             /* Tamper and TimeStamps through the EXTI line */
void RTC_WKUP_IRQHandler() __attribute__((weak, alias("Default_Handler")));               /* RTC Wakeup through the EXTI line */
void FLASH_IRQHandler() __attribute__((weak, alias("Default_Handler")));                  /* FLASH */
void RCC_IRQHandler() __attribute__((weak, alias("Default_Handler")));                    /* RCC */
void EXTI0_IRQHandler() __attribute__((weak, alias("Default_Handler")));                  /* EXTI Line0 */
void EXTI1_IRQHandler() __attribute__((weak, alias("Default_Handler")));                  /* EXTI Line1 */
void EXTI2_TS_IRQHandler() __attribute__((weak, alias("Default_Handler")));               /* EXTI Line2 and Touch */
void EXTI3_IRQHandler() __attribute__((weak, alias("Default_Handler")));                  /* EXTI Line3   */
void EXTI4_IRQHandler() __attribute__((weak, alias("Default_Handler")));                  /* EXTI Line4  */
void DMA1_Channel1_IRQHandler() __attribute__((weak, alias("Default_Handler")));          /* DMA1 Channel 1  */
void DMA1_Channel2_IRQHandler() __attribute__((weak, alias("Default_Handler")));          /* DMA1 Channel 2 */
void DMA1_Channel3_IRQHandler() __attribute__((weak, alias("Default_Handler")));          /* DMA1 Channel 3 */
void DMA1_Channel4_IRQHandler() __attribute__((weak, alias("Default_Handler")));          /* DMA1 Channel 4 */
void DMA1_Channel5_IRQHandler() __attribute__((weak, alias("Default_Handler")));          /* DMA1 Channel 5 */
void DMA1_Channel6_IRQHandler() __attribute__((weak, alias("Default_Handler")));          /* DMA1 Channel 6 */
void DMA1_Channel7_IRQHandler() __attribute__((weak, alias("Default_Handler")));          /* DMA1 Channel 7 */
void ADC1_2_IRQHandler() __attribute__((weak, alias("Default_Handler")));                 /* ADC1 and ADC2 */
void USB_HP_CAN1_TX_IRQHandler() __attribute__((weak, alias("Default_Handler")));         /* USB Device High Priority or CAN1 TX */
void USB_LP_CAN1_RX0_IRQHandler() __attribute__((weak, alias("Default_Handler")));        /* USB Device Low Priority or CAN1 RX0 */
void CAN1_RX1_IRQHandler() __attribute__((weak, alias("Default_Handler")));               /* CAN1 RX1   */
void CAN1_SCE_IRQHandler() __attribute__((weak, alias("Default_Handler")));               /* CAN1 SCE */
void EXTI9_5_IRQHandler() __attribute__((weak, alias("Default_Handler")));                /* External Line[9:5]s  */
void TIM1_BRK_TIM15_IRQHandler() __attribute__((weak, alias("Default_Handler")));         /* TIM1 Break and TIM15  */
void TIM1_UP_TIM16_IRQHandler() __attribute__((weak, alias("Default_Handler")));          /* TIM1 Update and TIM16  */
void TIM1_TRG_COM_TIM17_IRQHandler() __attribute__((weak, alias("Default_Handler")));     /* TIM1 Trigger and Commutation and TIM17 */
void TIM1_CC_IRQHandler() __attribute__((weak, alias("Default_Handler")));                /* TIM1 Capture Compare */
void TIM2_IRQHandler() __attribute__((weak, alias("Default_Handler")));                   /* TIM2 */
void TIM3_IRQHandler() __attribute__((weak, alias("Default_Handler")));                   /* TIM3 */
void TIM4_IRQHandler() __attribute__((weak, alias("Default_Handler")));                   /* TIM4 */
void I2C1_EV_IRQHandler() __attribute__((weak, alias("Default_Handler")));                /* I2C1 Event */
void I2C1_ER_IRQHandler() __attribute__((weak, alias("Default_Handler")));                /* I2C1 Error */
void I2C2_EV_IRQHandler() __attribute__((weak, alias("Default_Handler")));                /* I2C2 Event */
void I2C2_ER_IRQHandler() __attribute__((weak, alias("Default_Handler")));                /* I2C2 Error */
void SPI1_IRQHandler() __attribute__((weak, alias("Default_Handler")));                   /* SPI1 */
void SPI2_IRQHandler() __attribute__((weak, alias("Default_Handler")));                   /* SPI2 */
void USART1_IRQHandler() __attribute__((weak, alias("Default_Handler")));                 /* USART1 */
void USART2_IRQHandler() __attribute__((weak, alias("Default_Handler")));                 /* USART2 */
void USART3_IRQHandler() __attribute__((weak, alias("Default_Handler")));                 /* USART3  */
void EXTI15_10_IRQHandler() __attribute__((weak, alias("Default_Handler")));              /* External Line[15:10]s */
void RTC_Alarm_IRQHandler() __attribute__((weak, alias("Default_Handler")));              /* RTC Alarm (A and B) through EXTI Line */
void USBWakeUp_IRQHandler() __attribute__((weak, alias("Default_Handler")));              /* USB Wakeup through EXTI line */
void TIM8_BRK_IRQHandler() __attribute__((weak, alias("Default_Handler")));               /* TIM8 Break */
void TIM8_UP_IRQHandler() __attribute__((weak, alias("Default_Handler")));                /* TIM8 Update */
void TIM8_TRG_COM_IRQHandler() __attribute__((weak, alias("Default_Handler")));           /* TIM8 Trigger and Commutation */
void TIM8_CC_IRQHandler() __attribute__((weak, alias("Default_Handler")));                /* TIM8 Capture Compare  */
void ADC3_IRQHandler() __attribute__((weak, alias("Default_Handler")));                   /* ADC3   */
void SPI3_IRQHandler() __attribute__((weak, alias("Default_Handler")));                   /* SPI3  */
void UART4_IRQHandler() __attribute__((weak, alias("Default_Handler")));                  /* UART4  */
void UART5_IRQHandler() __attribute__((weak, alias("Default_Handler")));                  /* UART5  */
void TIM6_DAC_IRQHandler() __attribute__((weak, alias("Default_Handler")));               /* TIM6 and DAC1&2 underrun errors  */
void TIM7_IRQHandler() __attribute__((weak, alias("Default_Handler")));                   /* TIM7     */
void DMA2_Channel1_IRQHandler() __attribute__((weak, alias("Default_Handler")));          /* DMA2 Channel 1 */
void DMA2_Channel2_IRQHandler() __attribute__((weak, alias("Default_Handler")));          /* DMA2 Channel 2 */
void DMA2_Channel3_IRQHandler() __attribute__((weak, alias("Default_Handler")));          /* DMA2 Channel 3  */
void DMA2_Channel4_IRQHandler() __attribute__((weak, alias("Default_Handler")));          /* DMA2 Channel 4  */
void DMA2_Channel5_IRQHandler() __attribute__((weak, alias("Default_Handler")));          /* DMA2 Channel 5  */
void ADC4_IRQHandler() __attribute__((weak, alias("Default_Handler")));                   /* ADC4     */
void COMP1_2_3_IRQHandler() __attribute__((weak, alias("Default_Handler")));              /* COMP1 __attribute__((weak, alias("Default_Handler"))); COMP2 and COMP3  */
void COMP4_5_6_IRQHandler() __attribute__((weak, alias("Default_Handler")));              /* COMP4 __attribute__((weak, alias("Default_Handler"))); COMP5 and COMP6  */
void COMP7_IRQHandler() __attribute__((weak, alias("Default_Handler")));                  /* COMP7       */
void USB_HP_IRQHandler() __attribute__((weak, alias("Default_Handler")));                 /* USB High Priority remap  */
void USB_LP_IRQHandler() __attribute__((weak, alias("Default_Handler")));                 /* USB Low Priority remap */
void USBWakeUp_RMP_IRQHandler() __attribute__((weak, alias("Default_Handler")));          /* USB Wakeup remap through EXTI  */
void FPU_IRQHandler() __attribute__((weak, alias("Default_Handler")));                    /* FPU */



// ----------------------------------------------------------------------------------
// Interrupt vector table (loaded into flash memory at 0x000)
//
void (* const InterruptVector[])() __attribute__ ((section(".isr_vector"), aligned(2))) = {
    (void(*)(void)) (int)_estack,                // Initial stack pointer
    Reset_Handler,                                    // Reset handler
    NMI_Handler,
    HardFault_Handler,
    MemManage_Handler,
    BusFault_Handler,
    UsageFault_Handler,
    0,
    0,
    0,
    0,
    SVC_Handler,
    DebugMon_Handler,
    0,
    PendSV_Handler,
    SysTick_Handler,


    WWDG_IRQHandler,                   /* Window WatchDog */
    PVD_IRQHandler,                    /* PVD through EXTI Line detection */
    TAMPER_STAMP_IRQHandler,             /* Tamper and TimeStamps through the EXTI line */
    RTC_WKUP_IRQHandler,               /* RTC Wakeup through the EXTI line */
    FLASH_IRQHandler,                  /* FLASH */
    RCC_IRQHandler,                    /* RCC */
    EXTI0_IRQHandler,                  /* EXTI Line0 */
    EXTI1_IRQHandler,                  /* EXTI Line1 */
    EXTI2_TS_IRQHandler,               /* EXTI Line2 and Touch */
    EXTI3_IRQHandler,                  /* EXTI Line3   */
    EXTI4_IRQHandler,                  /* EXTI Line4  */
    DMA1_Channel1_IRQHandler,          /* DMA1 Channel 1  */
    DMA1_Channel2_IRQHandler,          /* DMA1 Channel 2 */
    DMA1_Channel3_IRQHandler,          /* DMA1 Channel 3 */
    DMA1_Channel4_IRQHandler,          /* DMA1 Channel 4 */
    DMA1_Channel5_IRQHandler,          /* DMA1 Channel 5 */
    DMA1_Channel6_IRQHandler,          /* DMA1 Channel 6 */
    DMA1_Channel7_IRQHandler,          /* DMA1 Channel 7 */
    ADC1_2_IRQHandler,                 /* ADC1 and ADC2 */
    USB_HP_CAN1_TX_IRQHandler,         /* USB Device High Priority or CAN1 TX */
    USB_LP_CAN1_RX0_IRQHandler,        /* USB Device Low Priority or CAN1 RX0 */
    CAN1_RX1_IRQHandler,               /* CAN1 RX1   */
    CAN1_SCE_IRQHandler,               /* CAN1 SCE */
    EXTI9_5_IRQHandler,                /* External Line[9:5]s  */
    TIM1_BRK_TIM15_IRQHandler,         /* TIM1 Break and TIM15  */
    TIM1_UP_TIM16_IRQHandler,          /* TIM1 Update and TIM16  */
    TIM1_TRG_COM_TIM17_IRQHandler,     /* TIM1 Trigger and Commutation and TIM17 */
    TIM1_CC_IRQHandler,                /* TIM1 Capture Compare */
    TIM2_IRQHandler,                   /* TIM2 */
    TIM3_IRQHandler,                   /* TIM3 */
    TIM4_IRQHandler,                   /* TIM4 */
    I2C1_EV_IRQHandler,                /* I2C1 Event */
    I2C1_ER_IRQHandler,                /* I2C1 Error */
    I2C2_EV_IRQHandler,                /* I2C2 Event */
    I2C2_ER_IRQHandler,                /* I2C2 Error */
    SPI1_IRQHandler,                   /* SPI1 */
    SPI2_IRQHandler,                   /* SPI2 */
    USART1_IRQHandler,                 /* USART1 */
    USART2_IRQHandler,                 /* USART2 */
    USART3_IRQHandler,                 /* USART3  */
    EXTI15_10_IRQHandler,              /* External Line[15:10]s */
    RTC_Alarm_IRQHandler,              /* RTC Alarm (A and B) through EXTI Line */
    USBWakeUp_IRQHandler,              /* USB Wakeup through EXTI line */
    TIM8_BRK_IRQHandler,               /* TIM8 Break */
    TIM8_UP_IRQHandler,                /* TIM8 Update */
    TIM8_TRG_COM_IRQHandler,           /* TIM8 Trigger and Commutation */
    TIM8_CC_IRQHandler,                /* TIM8 Capture Compare  */
    ADC3_IRQHandler,                   /* ADC3   */
    0,                                 /* Reserved   */
    0,                                /* Reserved */
    0,                                /* Reserved   */
    SPI3_IRQHandler,                   /* SPI3  */
    UART4_IRQHandler,                  /* UART4  */
    UART5_IRQHandler,                  /* UART5  */
    TIM6_DAC_IRQHandler,               /* TIM6 and DAC1&2 underrun errors  */
    TIM7_IRQHandler,                   /* TIM7     */
    DMA2_Channel1_IRQHandler,          /* DMA2 Channel 1 */
    DMA2_Channel2_IRQHandler,          /* DMA2 Channel 2 */
    DMA2_Channel3_IRQHandler,          /* DMA2 Channel 3  */
    DMA2_Channel4_IRQHandler,          /* DMA2 Channel 4  */
    DMA2_Channel5_IRQHandler,          /* DMA2 Channel 5  */
    ADC4_IRQHandler,                   /* ADC4     */
    0,                                 /* Reserved   */
    0,                                 /* Reserved    */
    COMP1_2_3_IRQHandler,              /* COMP1, COMP2 and COMP3  */
    COMP4_5_6_IRQHandler,              /* COMP4, COMP5 and COMP6  */
    COMP7_IRQHandler,                  /* COMP7       */
    0,                                 /* Reserved     */
    0,                                 /* Reserved     */
    0,                                 /* Reserved    */
    0,                                 /* Reserved  */
    0,                                 /* Reserved  */
    0,                                 /* Reserved  */
    0,                                 /* Reserved  */
    USB_HP_IRQHandler,                 /* USB High Priority remap  */
    USB_LP_IRQHandler,                 /* USB Low Priority remap */
    USBWakeUp_RMP_IRQHandler,          /* USB Wakeup remap through EXTI  */
    0,                                 /* Reserved  */
    0,                                 /* Reserved  */
    0,                                 /* Reserved  */
    0,                                 /* Reserved */
    FPU_IRQHandler                    /* FPU */
};


extern int main(void);


extern void (*__init_array_start)();
extern void (*__init_array_end)();

 extern void __libc_init_array();


void Reset_Handler(void)
{
    // copy values to initialize data segment
    uint32_t *fr = _etext;
    uint32_t *to = _sdata;
    unsigned int len = _edata - _sdata;
    while(len--)
      *to++ = *fr++;

    // enable FPU
    SCB->CPACR|= (1<<20)|(1<<21)|(1<<22)|(1<<23);   //full access

    //FPU->FPCCR&=~((1<<31)|(1<<30));                 //disable context saving, single thread FPU!!
    FPU->FPCCR|= ((1<<31)|(1<<30));                 //enable context saving


    void (**p)() = &__init_array_start;

    for (unsigned int i = 0; i < (&__init_array_end - &__init_array_start); i++)
    {
        p[i]();
    }


    // __libc_init_array();


    main();
}


#ifdef __cplusplus
}
#endif
