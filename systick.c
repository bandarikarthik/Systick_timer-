/*
 * systick.c
 *
 *  Created on: 19-Nov-2021
 *      Author: Admin
 */


/*
 * systick.c
 *
 *  Created on: 19-Nov-2021
 *      Author: Admin
 */
#include<stdint.h>
#include"systick.h"


uint32_t *pSRVR = (uint32_t*)0xE000E014;    //load value
uint32_t *pSCSR = (uint32_t*)0xE000E010;    //status and control registers
uint32_t *pCVR  = (uint32_t*)0xE000E018;      //systick current value register

void init_systick_timer(void)
{
	*pSCSR  = 0x0;
	*pCVR  = 0x0;
	*pSCSR |= 0x5;
}

void delay_ms(uint16_t delay)
{
	*pSRVR = (ms*delay)-1;
	*pCVR  = 0x0;
	while((*pSCSR & 0x10000)==0)
	{
		;
	}

}


void delay_us(uint16_t delay)
{
	*pSRVR = (us*delay)-1;
	*pCVR  = 0x0;
	while((*pSCSR & 0x10000)==0)
	{
		;
	}

}





