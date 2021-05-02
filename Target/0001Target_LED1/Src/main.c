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

int main(void)
{
    uint32_t *pClkCtrlReg = (uint32_t*)0x40023830;
    uint32_t *pPortAModeReg = (uint32_t*)0x40020C00;
    uint32_t *pPortAOutReg = (uint32_t*)0x40020C14;

    //1. Enable the clock for GPIOD Peripheral in the AHB1ENR
    uint32_t temp = *pClkCtrlReg;
    temp = temp | 0x08;
    *pClkCtrlReg = temp;

    //2.Configure the mode of the IO Pin as Output
    //a. Clear the 24th and 25th bit positions (CLEAR)
    *pPortAModeReg &= 0xFFFFF3FF;
     //b. Make 24th bit position as 1 (SET)
    *pPortAModeReg |= 0x00000800;

    //3.Set 12th bit of the output data register to make I/O pin-12 as High
    *pPortAOutReg |= 0x0020;

    while(1);





}
