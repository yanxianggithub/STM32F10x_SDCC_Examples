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
extern const unsigned char BMP1[];
int main()
{
    unsigned char i;
    /*初始化LED、串口*/
    LED_GPIO_Config();
    EXTI_Key_Config();
    USART_Config();
    SysTick_Init();      // 初始化延迟函数
    I2C_Configuration(); // 配置CPU的硬件I2C
    OLED_Init();    //初始化OLED
	while(1)
	{
		OLED_Fill(0xFF);//全屏点亮
		Delay_s(2);		// 2s
		OLED_Fill(0x00);//全屏灭
		Delay_s(2);		// 2s
		for(i=0;i<4;i++)
		{
			OLED_ShowCN(22+i*16,0,i);									//测试显示中文
		}
		Delay_s(2);		// 2s
		OLED_ShowStr(0,3,(unsigned char*)"Wildfire Tech",1);				//测试6*8字符
		OLED_ShowStr(0,4,(unsigned char*)"Hello wildfire",2);				//测试8*16字符
		Delay_s(2);		// 2*100=200s
		OLED_CLS();//清屏
		OLED_OFF();//测试OLED休眠
		Delay_s(2);		// 2s
		OLED_ON();//测试OLED休眠后唤醒
		OLED_DrawBMP(0,0,128,8,(unsigned char *)BMP1);//测试BMP位图显示
		Delay_s(2);		// 2*100=200s
	}
}
