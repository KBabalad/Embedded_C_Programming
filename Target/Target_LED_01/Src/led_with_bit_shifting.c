/*
 * led_with_bit_shifting.c
 *
 *  Created on: Nov 13, 2020
 *      Author: babal
 */


#include<stdio.h>
#include<stdint.h>

int delay(void);
int led_on(void);
int led_off(void);

int led_on(void)
	{
	uint32_t *pClkCtrlReg = (uint32_t*) 0x40023830;
	uint32_t *pPortDModeReg = (uint32_t*) 0x40020C00;
	uint32_t *pPortDDataOutReg = (uint32_t*) 0x40020C14;

	//1. Enable the clock for GPIO-D register using AHB1 ENR
	/*uint32_t temp = *pClkCtrlReg; // de-referencing the pointer and storing to temp
	temp = temp | 0x08; // modify
	*pClkCtrlReg = temp; // write back*/
	*pClkCtrlReg |= (1<<3);



	//2. Set the GPIOD pin to output mode using Output mode register
	*pPortDModeReg = ~(3<<24); // clearing the bits 24 and 25 use bitwise AND
	*pPortDModeReg =  (1<<24); // set 24th bit to high to pout it to output mode use bitwise OR

	//3. Set the 12th bit high for the LED to glow using o/p data register
	*pPortDDataOutReg = (1<<12);
	return 0;
	}


int led_off(void)
	{
	uint32_t *pClkCtrlReg = (uint32_t*) 0x40023830;
	uint32_t *pPortDModeReg = (uint32_t*) 0x40020C00;
	uint32_t *pPortDDataOutReg = (uint32_t*) 0x40020C14;

	//1. Enable the clock for GPIO-D register using AHB1 ENR
	/*uint32_t temp = *pClkCtrlReg; // de-referencing the pointer and storing to temp
	temp = temp | 0x08; // modify
	*pClkCtrlReg = temp; // write back*/
	*pClkCtrlReg |= (1<<3);



	//2. Set the GPIOD pin to output mode using Output mode register
	*pPortDModeReg = ~(3<<24); // clearing the bits 24 and 25 use bitwise AND
	*pPortDModeReg =  (1<<24); // set 24th bit to high to pout it to output mode use bitwise OR

	//3. Set the 12th bit high for the LED to glow using o/p data register
	*pPortDDataOutReg = ~(1<<12);
	return 0;
	}

int delay(void)
{
 int i;
 for(i=0;i<1000000;i++)
 {

 }
 return 0;
}


int main ()
{
while(1)
{
 delay();
 led_on();
 delay();
 led_off();
}
}



