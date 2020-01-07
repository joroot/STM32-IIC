#ifndef __BSP_AT24C02_H
#define __BSP_AT24C02_H

#include "stm32f10x.h"

/* 
 * AT24C02 2kb = 2048bit = 2048/8 B = 256 B
 * 32 pages of 8 bytes each
 *
 * Device Address
 * 1 0 1 0 A2 A1 A0 R/W
 * 1 0 1 0 0  0  0  0 = 0XA0
 * 1 0 1 0 0  0  0  1 = 0XA1 
 */

/* AT24C01/02ÿҳ��8���ֽ� 
 * AT24C04/08A/16Aÿҳ��16���ֽ� 
 */
 
#define DEV_ADDR			0xA0		/* 24xx02���豸��ַ */
#define PAGE_SIZE		  8			  /* 24xx02��ҳ���С */
#define SIZE				  256			  /* 24xx02������ */


uint8_t at24c02_CheckOk(void);
uint8_t at24c02_ReadBytes(uint8_t *_pReadBuf, uint16_t _usAddress, uint16_t _usSize);
uint8_t at24c02_WriteBytes(uint8_t *_pWriteBuf, uint16_t _usAddress, uint16_t _usSize);
void at24c02_Erase(void);
uint8_t at24c02_Test(int j);

#endif

