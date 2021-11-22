/*
 * systick.h
 *
 *  Created on: 19-Nov-2021
 *      Author: Admin
 */

#ifndef SYSTICK_H_
#define SYSTICK_H_

#define MCU_CLK 32000000
#define ms 		32000
#define us 		32


extern void init_systick_timer(void);
extern void delay_ms(uint16_t delay);
extern void delay_us(uint16_t delay);


#endif /* SYSTICK_H_ */
