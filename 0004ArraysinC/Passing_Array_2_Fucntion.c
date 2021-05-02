/*
 * Passing_Array_2_Fucntion.c
 *
 *  Created on: Oct 4, 2020
 *      Author: babal
 */


#include<stdio.h>
#include<stdint.h>


int display_array(uint32_t const *const pArray, uint8_t array_size);

int main()
{
  uint32_t Data_Items[] = {0xff, 0xff, 0xff,0xff, 0xff, 0xff,0xff, 0xff, 0xff,0xff};
  /* pass this array to a function */
  display_array(Data_Items, 10);
}

int display_array(uint32_t const *const pArray, uint8_t array_size)
{

	printf("Elements of the array are \n");
  	for(uint32_t i= 0; i< array_size ; i++)
  	{
  	printf("%x \t", pArray[i]);
  	}

}
