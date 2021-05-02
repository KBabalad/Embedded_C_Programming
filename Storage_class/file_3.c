/*
 * file_3.c
 *
 *  Created on: Feb 15, 2021
 *      Author: babal
 */

#include<stdio.h>

static int system_clock(int data);
extern void funct_file_2(void);

int main()
{
  //system_clock()
  funct_file_2();
  return 0;
}

/*To make the system_clock Exclusive to the main function or the file_2 itself, we can use static
 * keyword.
 */

static int system_clock(int data)
{
	printf("Calling System CLock Function the data is %d\n",data);
    return 0;
}



