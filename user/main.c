#include "stm32f10x.h"
#include "bsp_SysTick.h"
#include "bsp_usart1.h"
#include "bsp_at24c02.h"

int main(void)
{
	uint8_t read_b[1];
	uint8_t write_b[1]="c";
	USARTx_Config();
//	SysTick_Init();

	printf("eeprom ���ģ��i2c�������� \r\n");		
//	at24c02_Erase();
	

	if(at24c02_Test(0xad) == 1)
	{
		printf("�ɹ�\r\n");
	}
	else
	{
		printf("ʧ��\r\n");
	}
	
}
