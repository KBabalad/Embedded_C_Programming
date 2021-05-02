/*
 * reversing_bits.c
 *
 *  Created on: Feb 9, 2021
 *      Author: babal
 *
 *   In this exercise we are reversing the bits of the integer number irrespective of the length
 */

#include<stdio.h>

#define CHAR_BITS 8 // macro defining the size of character

#define INT_BITS (sizeof(int) * (CHAR_BITS)) // macro defining the size of the integer bits which is 32


void print_binary(unsigned n)
{
	int iPos;
	for(iPos=(INT_BITS-1);iPos>=0;iPos--)
	{
		(n& (1<<iPos)?printf("1"):printf("0"));
	}
}



int bit_reversal(unsigned int num)
{
  unsigned int iloop=0;
  unsigned int tmp;
  int iNumberLoop = (INT_BITS -1);

  for(;iloop<iNumberLoop;iloop++)
  {
	  tmp |= num & 1; //bit extraction the lsb bit here
	 // print_binary(tmp)
	 // print_binary(tmp);
	  num >>=1; //shift num right side
	  tmp<<=1; //shift tmp left side
  }
  print_binary(tmp);
  return tmp;
}

int main()
{
 int x = 0xF;
 print_binary(x);
 printf("\n");
 bit_reversal(x);

}
