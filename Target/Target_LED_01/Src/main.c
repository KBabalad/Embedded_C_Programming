/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 ******************************************************************************
 */

#include<stdio.h>
#include<stdint.h>

int blink_led()
	{
	uint32_t *pClkCtrlReg = (uint32_t*) 0x40023830;
	uint32_t *pPortDModeReg = (uint32_t*) 0x40020C00;
	uint32_t *pPortDDataOutReg = (uint32_t*) 0x40020C14;

	//1. Enable the clock for GPIO-D register using AHB1 ENR
	/*uint32_t temp = *pClkCtrlReg; // de-referencing the pointer and storing to temp
	temp = temp | 0x08; // modify
	*pClkCtrlReg = temp; // write back */
	*pClkCtrlReg |= 0x08; //this is equivalent to all the 3 lines above

	//2. Set the GPIOD pin to output mode using Output mode register
	*pPortDModeReg = (*pPortDModeReg & 0xFCFFFFFF); // clearing the bits 24 and 25 use bitwise AND
	*pPortDModeReg = (*pPortDModeReg | 0x01000000); // set 24th bit to high to pout it to output mode use bitwise OR

	//3. Set the 12th bit high for the LED to glow using o/p data register
	*pPortDDataOutReg = *pPortDDataOutReg | 0x1000;
	}

int delay()
{
	int i, j;
	for(i=0;i<=1000;i++)
	{
		for(j=0;j<1000;j++)
		{

		}
	}
}

/*int main()
{
	int i;
	for(i=0;i<10;i++)
	{
	blink_led();
	delay();
	blink_led();
	delay();
	}
}*/
