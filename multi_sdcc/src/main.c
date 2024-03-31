/*
 * ************************************************
 * 
 * STM32 blink demo
 * 
 * CPU:     STM32F103C8
 * PIN:     PA1
 * 
 * ************************************************
*/

#include "stm32f10x.h"
#include "delay.h"
#include "led.h"
#include "exti.h"
#include "usart.h"

int main()
{
    /*初始化USART 配置模式为 115200 8-N-1，中断接收*/
    USART_Config();
    LED_GPIO_Config();
    EXTI_Key_Config();

    while (1)
    {
        delay(10000);
        Usart_SendString( DEBUG_USARTx,"这是一个串口中断接收回显实验\n");
    }
}
