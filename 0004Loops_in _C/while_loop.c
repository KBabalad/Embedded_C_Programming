/*
 * while_loop.c
 *
 *  Created on: Oct 29, 2020
 *      Author: babal
 */

#include<stdio.h>
#include<stdint.h>

int main()
{
uint32_t my_numbers_1=100;
uint32_t my_numbers_2= 0;
while(my_numbers_1>0 && my_numbers_2<100)
	{
	printf("%d \t", my_numbers_1);
	my_numbers_1--;
	printf("%d \t", my_numbers_2);
	my_numbers_2++;
	}
getchar();
return 0;
}
