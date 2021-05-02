/*
 * Array_Read_Write.c
 *
 *  Created on: Oct 4, 2020
 *      Author: babal
 */

#include<stdio.h>
#include<stdint.h>

int main()
{
  uint32_t Data_Items[] = {0xff, 0xff, 0xff,0xff, 0xff, 0xff,0xff, 0xff, 0xff,0xff};
  printf("Before: 2nd Data Item = %x \n", *(Data_Items+1));
  *(Data_Items+1) = 0x99;
  printf("After: 2nd Data Item = %x \n", *(Data_Items+1));

  for(uint8_t i = 0; i< 10; i++)
  {
	  printf("Elements of Array %x \n", Data_Items[i]);

  }
}
