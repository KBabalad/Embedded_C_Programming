/*
 * Array_exercise_01.c
 *
 *  Created on: Dec 16, 2020
 *      Author: babal
 *
 *  In this program we will learn how we can read and write from an array.
 */

#include<stdio.h>
#include<stdint.h>


int main()
{
 uint16_t student_name[20]={1,2,3,4,5,6,7,8,9,10};
 printf("the base address of array: %p \n", student_name);
 printf("the size of the array is: %d \n", sizeof(student_name));
 //printf("before: 2nd data item is modified %x\n ",*(student_name+1));
 printf("before: 2nd data item is modified %x\n ",student_name[1]);

 //*(student_name+1) = 0x99;
 student_name[1]=0x99; //equal to the above statement
 //printf("After : 2nd data item is modified %x\n ",*(student_name+1));
 printf("After: 2nd data item is modified %x\n ",student_name[1]);
 // lets print all the items of the array
 printf("contents of the array are\n ");
 for(int i=0;i< 10;i++)
 {
	 printf("%x\t ",student_name[i]);

 }
 //how to write to an array
 int j=20;
 printf("After writing to the array the contents are \n");
 for(int i =0 ;i<10;i++)
 {
	 student_name[i]=j;
	 j++;

	 printf("%d\t ",student_name[i]);

 }
 return 0;
}
