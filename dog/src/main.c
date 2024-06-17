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
#include "usart.h"
#include "key.h"
#include "led.h"
#include "oled.h"

extern const unsigned char BMP1[];
extern const unsigned char BMP2[];
int main()
{
    SysTick_Init();
	Key_GPIO_Config();
    LED_GPIO_Config();
    USART_Config();
    I2C_Configuration(); // 配置CPU的硬件I2C
    OLED_Init();    //初始化OLED

    unsigned char i;
    while (1)
    {

		if (Key_Scan(KEY1_GPIO_PORT, KEY1_GPIO_PIN) == KEY_ON)
		{
			LED1_ON;
		}else
		{
			LED1_OFF;
		}
		


		/*
        OLED_Fill(0xFF);//全屏点亮
		Delay_s(2);		// 2s
		OLED_Fill(0x00);//全屏灭
		Delay_s(2);		// 2s
		for(i=0;i<4;i++)
		{
			OLED_ShowCN(22+i*16,0,i);										//测试显示中文
		}
		Delay_s(2);		// 2s
		OLED_ShowStr(0,3,(unsigned char*)"Wildfire Tech",1);				//测试6*8字符
		OLED_ShowStr(0,4,(unsigned char*)"Hello wildfire",2);				//测试8*16字符
		Delay_s(2);		// 2*100=200s
		OLED_CLS();//清屏
		OLED_OFF();//测试OLED休眠
		Delay_s(2);		// 2s

		OLED_ON();//测试OLED休眠后唤醒
		OLED_DrawBMP(0,0,128,8,(unsigned char *)BMP2);//测试BMP位图显示
		Delay_s(2);		// 2*100=200s
		*/
    }
}
