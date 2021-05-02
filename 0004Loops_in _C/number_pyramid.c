/*
 * number_pyramid.c
 * In this code we will print the numbers as pyramid asking the
 * height of the pyramid from the user, we use two for loops for
 * one for loop to create the height and other for loop to keep a
 * check on the rows
 *  Created on: Nov 14, 2020
 *      Author: babal
 */

#include<stdio.h>
#include<stdint.h>

int main()
{
 int32_t i,j;
 uint32_t height;

 printf("Enter the height of the pyramid \n");
 scanf("%d",&height);

 if(height>0)
 {
	 for(i=1;i<=height;i++)
 	 {
		 for(j=i;j>0;j--)
		 {
		 printf("%d\t",j);
	     }
	 printf("\n");
 	 }
 }
 else
 {
 printf("Error! Height should be positive\n");
 }

 getchar();
 return 0;
}



