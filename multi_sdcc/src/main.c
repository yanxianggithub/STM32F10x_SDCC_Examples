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
#include "systick.h"
#include "led.h"
#include "oled.h"
#include "exti.h"
#include "usart.h"

int main()
{
   unsigned char i;
    /*初始化LED、串口*/
	LED_GPIO_Config();
	//USART_Config();
	SysTick_Init();   //初始化延迟函数
	//I2C_Configuration();//配置CPU的硬件I2C
	//OLED_Init();    //初始化OLED
	EXTI_Key_Config();
	//printf("\r\n OLED初始化成功,OLED正在工作！ \r\n");
	
	while(1)
	{
		;
	} 
}
