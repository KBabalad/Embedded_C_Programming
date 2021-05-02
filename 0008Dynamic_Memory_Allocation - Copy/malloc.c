/*
 * malloc.c
 *
 *  Created on: Dec 15, 2020
 *      Author: babal
 *      In this program we will allocate memory to the program during runtime of the program.
 *
 * Since C is a structured lanaguage and it has some fixed rules for programming. One of it includes changing the size of
 * an array. An Array is collection of items stored at contigous memory locations.
 *
 * Dynamic Memory Allocation can be defined as a procedure in which the size of Data Structure (like Array)is changed during
 * run time
 *
 * C provides some functions to achieve these tasks. There are 4 libraries fucntions provided by C defined under stdlib.h, to
 * facilitate the dynamic memory allocation in C programming. They are
 *
 * 1. malloc
 * 2. calloc
 * 3. free
 * 4. realloc
 *
 * #####################################################MALLOC######################################################
 * malloc method is used to dynamically allocate a single large block of memory with specified size. It returns a pointer
 * type void which can ve cast into pointer of any form. It intializes each block with default garbage value.
 *
 * Syntax:
 * ptr = (cast_type*)malloc(byte_size)
 * if the space is insufficient, allocation fails and returns a NULL pointer.
 */

#include<stdio.h>
#include<stdlib.h>


int main()
{
 int* ptr; //ptr to hold the base address of the block created
 int n,i;// get the number of elements for the array

 n=1000;
 printf("Enter the number of elements: %d \n", n);

ptr = (int*)malloc(n * sizeof(int));// dynamically allocate the size of block using malloc()

//check if the memory is allocated by the pointer or not?
if(ptr==NULL)
{
 printf("Memory not allocated\n");
 exit(0);
}

else
{
	printf("Memory successfully allocated \n");
	for(i=0;i<n;i++)
	{
		ptr[i] = i+1;

	}
	printf("The elements of the array are\n");
	{
		for(i=0;i<n;i++)
		{
			if((ptr[i]%2)!=0)
		    {
			printf("%d, ", ptr[i]);
		    }
		}
	}

	return 0;
}

}
