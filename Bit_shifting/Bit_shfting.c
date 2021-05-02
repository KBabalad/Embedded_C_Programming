/*
 * Bit_shfting.c
 *
 *  Created on: Nov 13, 2020
 *      Author: babal
 */

/* in this exercise we are going to extract some value from the bit fields
 * and copy them to a different variable
 */

#include<stdio.h>
#include"stdint.h"

int main()
{
  uint32_t bit_value = (uint32_t) 0xf0010000; //extract last 24-28 bits on to a new variable output
  uint32_t output;
  output = (uint32_t)((bit_value>>28)& 0x000f);
  printf("the output is %x \n", output);
  getchar();
  return 0;

}


