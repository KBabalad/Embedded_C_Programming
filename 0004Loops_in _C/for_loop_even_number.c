/*
 * In this code we are going to find the even numbers using the
 * while loop
 */

#include<stdio.h>
#include<stdint.h>

int main()
{
 int32_t start_num, end_num;
 uint32_t even,count;
 printf("Enter the range of numbers\n");
 scanf(" %d%d",&start_num,&end_num);
 if(end_num< start_num)
 {
	 printf("Error! End num should be greater than start num \n ");
 }
 printf("The even numbers are \n");
 count =0;
 for(; start_num<=end_num;start_num++)
 {
	 even = start_num % 2;
	 if(even==0)
	 {
		 printf("%2d \t", start_num);
		 count++;
	 }
 }
 printf("\n Number of even numbers are %d \n",count);
}
