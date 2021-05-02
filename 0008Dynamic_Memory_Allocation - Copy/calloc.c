/*
 * calloc.c
 *
 *  Created on: Dec 15, 2020
 *      Author: babal
 *
 * In this program we will see how we allocate a block of memory using calloc()
 *
 * calloc or contagious method in C is used to dynamically allocate the specified number
 * of blocks of memory of specified type. It initializes each block with a default value '0'
 * Syntax:
 * ptr = (cast_type*)calloc(n, element_size);
 *
 * If space is insufficient, allocation fails and returns a NULL pointer.
 *
 */

#include<stdio.h>
#include<stdlib.h>

int main()
{
 int *ptr; // holds the base address of the block
// int what_var =(int) *ptr;
 printf("The address of the pointer is %p \n", &ptr);
int n,i;
n=5;
ptr = (int*)calloc(n,sizeof(int));//callox dynamically allocate memory

if (ptr == NULL)
{
	printf("Memory is not allocated\n");
    exit(0);
}
else
{
   printf("Memory is successfully allocated\n");
   for(i=0;i<n;i++)
   {
	   ptr[i] = i+1;
   }
   //print the elements of the array
   for(i=0;i<n;i++)
   {
	   printf("%d, \t", ptr[i]);
   }
}

 return 0;

}



