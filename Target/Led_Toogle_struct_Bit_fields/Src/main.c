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
#include"Register.h"

/*
 *  uint32_t *pClkCtrlReg = (uint32_t*) 0x40023830;
	uint32_t *pPortDModeReg = (uint32_t*) 0x40020C00;
	uint32_t *pPortDDataOutReg = (uint32_t*) 0x40020C14;
 *  old code
 */
int delay(void);

int main()
{
	RCC_AHB1ENR_t *pClkCtrlReg = (RCC_AHB1ENR_t*) 0x40023830; //creating a pointer variable carrying the base address to structure RCC_AHB1ENR_t
	GPIOx_MODER_t *pPortDModeReg = (GPIOx_MODER_t*) 0x40020C00; //creating a pointer variable carrying the base address to structure	GPIOx_ModeR_t
	GPIOx_ODR_t *pPortDDataOutReg = (GPIOx_ODR_t*) 0x40020C14;  //creating a pointer variable carrying the base address to structure  GPIOx_ODR_t
	//de-referencing the pointer and enabling the appropriate bit member// here we are giving the user an abstraction
	pClkCtrlReg->gpio_d_en = 1;
	pPortDModeReg->pin_12 = 1;
	for(int i=1;i<=10;i++)
	{
	pPortDDataOutReg->odr_12 = 1;
	delay();
	pPortDDataOutReg->odr_12 = 0;
	delay();
	// pPortDDataOutReg->odr_12 = 1;
	}
}

int delay(void)
{
 int i;
 for(i=0;i<1000000;i++)
 {

 }
 return 0;
}
