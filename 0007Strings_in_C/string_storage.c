/*
 * string_storage.c
 *
 *  Created on: Dec 1, 2020
 *      Author: babal
 *      In this program we will se how we can store the string inside an array and try some string manipulation tasks
 */
#include<stdio.h>
#include<string.h>

int main()
{
	char msg[6]= "Hello";
	int len = strlen(msg);
	char temp[len];
	int i;
	int j = 0;
	printf("%s is my string msg\n",msg);
	printf("%d is my string msg\n",len);
	//lets reverse the string?
	for(i=len-1;i>=0;i--)
	{
		temp[j]= msg[i];
		j++;
	}

	printf("reversed string is %s\t",temp);

}

