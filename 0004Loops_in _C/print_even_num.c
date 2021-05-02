/*
 * print_even_num.c
 * In this program we will print the even numbers taking
 * range from the user
 *  Created on: Nov 14, 2020
 *      Author: babal
 */

#include<stdio.h>
#include<stdint.h>

int main(void)
{
 int32_t low,high;
 uint8_t even,count;
 printf("Enter the range of numbers\n");
 scanf("%d %d", &low,&high);
 if(high<low)
 {
	 printf("Error! Ending number should be greater than starting number\n");
 }
 printf("Even Numbers are \n");
 while(low<=high)
 {
	 even = low%2;
	 if(even==0)
	 {
	 printf("%4d \t",low);
	 count++;
	 }
	 low++;
 }
 printf("\nThe number of even numbers are %d ", count);

 while(1);

}

