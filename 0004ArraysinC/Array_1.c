/*
 * Array_1.c
 *
 *  Created on: Oct 4, 2020
 *      Author: babal
 */


#include<stdio.h>
#include<stdint.h>

int main()
{
 uint32_t Student_numbers[100];// this array consume 400 bytes of memory
 printf("Find out the size of above array %u \n", sizeof(Student_numbers));
 printf("The base address of the array is = %p \n", Student_numbers);
 return 0;
}


/*ALl the data items will be stored in a contiguous memory location.
 * To modify any item of an array you need to first find out the base address of the Array
 * To find out the base address, the name of the variable holds the base address. The variable is pointer
 * to the base address.If we print the value of the array name with the format specifier %p
 * we get the base address of the array
 *
 */
