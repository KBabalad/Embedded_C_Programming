/*
 * practice_01.c
 *
 *  Created on: Feb 9, 2021
 *      Author: babal
 *  check whether the two arrays passed have a duplicate element in them
 */
#include<stdio.h>

int check_duplicate(int *arr_1, int *arr_2)
{
	int i,j;
	int count=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;)
		{
			if(arr_1[i]==arr_2[j])
			{
				count = count+1;
			}
			j++;
		}
	}
 printf("Number of duplicate elements are %d \n",count);
 getchar();
 return count;
}


int main()
{
  	int arr_1[3] = {1,2,3};
  	int arr_2[3] = {4,5,6};
    check_duplicate(arr_1,arr_2);
    while(1);
}




