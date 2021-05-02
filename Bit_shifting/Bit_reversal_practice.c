/*
 * Bit_reversal_practice.c
 *
 *  Created on: Feb 9, 2021
 *      Author: babal
 */


#include<stdio.h>

#define CHAR_BITS 8
#define INT_BITS (4*8)

int print_binary(unsigned int n)
{
    int i;
    for(i=(INT_BITS-1);i>=0;i--)
    {
    	(n&(1<<i)?printf("1"):printf("0"));
    }

}


int bit_reversal(unsigned int n)
{
	int temp;
	int num_1;
	int number_of_bits= 32;
	int iloop = 0;
	for(;iloop<number_of_bits-1;iloop++)
	{
		num_1 = n & 1;
		temp |= num_1;
		n = n >>1;
		temp = temp<<1;
	}
print_binary(temp);
return temp;
}

int main()
{
  bit_reversal(2);
}
