/*
 * uinion_ini.c
 *
 *  Created on: Nov 29, 2020
 *      Author: babal
 *
 *  Unions are similar to structures except that all of its members start at the same memory location
 *  A union variable can represent only the value of only one of its members at a time.
 */


#include<stdio.h>
#include<stdint.h>

union address
{
 uint16_t short_addr;
 uint32_t long_addr;
};

int main()
{
 union address addr_var;
 addr_var.short_addr = 0xABCD;
 addr_var.long_addr = 0xEEFF4455;

 printf("value of short address = %X \n", addr_var.short_addr);
 printf("value of short address = %X \n", addr_var.long_addr);
}


