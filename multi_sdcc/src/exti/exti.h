#ifndef __EXTI_H
#define	__EXTI_H

#include "stm32f10x.h"

//引脚定义
#define KEY1_INT_GPIO_PORT         GPIOA
#define KEY1_INT_GPIO_CLK          (RCC_APB2Periph_GPIOA|RCC_APB2Periph_AFIO)
#define KEY1_INT_GPIO_PIN          GPIO_Pin_4
#define KEY1_INT_EXTI_PORTSOURCE   GPIO_PortSourceGPIOA
#define KEY1_INT_EXTI_PINSOURCE    GPIO_PinSource4
#define KEY1_INT_EXTI_LINE         EXTI_Line4
#define KEY1_INT_EXTI_IRQ          EXTI4_IRQn

#define KEY1_IRQHandler            EXTI4_IRQHandler


void EXTI_Key_Config(void);

#endif /* __EXTI_H */
