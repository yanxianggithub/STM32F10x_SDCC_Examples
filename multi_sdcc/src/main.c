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
//#include "usart.h"

int main()
{
    LED_GPIO_Config();
    while (1)
    {
        LED1_TOGGLE;
        delay(5000);
    }
}
