/*
 * excercise_02_swapping.c
 *
 *  Created on: Dec 16, 2020
 *      Author: babal
 *
 */

#include<stdio.h>
#include<stdint.h>

int swapping_function(uint32_t *pArray_1, uint32_t *pArray_2, uint8_t size_1, uint8_t size_2);

int main()
{
uint32_t array_1[10];
uint32_t array_2[10];
int i;
//write to both the arrays
printf("Before: Contents of the array are \n");
for(i=0;i<10;i++)
{
 array_1[i]= 0x33;
 array_2[i]= 0x44;
 printf("%x \t",array_1[i]);
 printf("%x \t",array_2[i]);
}
swapping_function(array_1,array_2, 10, 10);
return 0;

}


int swapping_function(uint32_t *pArray_1, uint32_t *pArray_2, uint8_t size_1, uint8_t size_2)
{
	int i, count=0;
	int temp;
	for(i=0;i<size_1;i++)
	{
		temp = pArray_1[i];
		pArray_1[i]= pArray_2[i];
		pArray_2[i] = temp;
		count++;
	}
	printf("Array_1 item %d element: %x \n",count, pArray_1[i]);
	printf("Array_2 item %d element: %x \n",count, pArray_2[i]);

return 0;
}
