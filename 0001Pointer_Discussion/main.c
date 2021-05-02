/*
 * main.c
 *
 *  Created on: Oct 3, 2020
 *      Author: babalad
 */

#include<stdio.h>


int main()
{
char my_var = 100;
printf("Address of my_var is %p\n", &my_var);
char* p1 = &my_var;
char data = *p1;
printf("The value stored in the variable is %d \n", data);
*p1 = 65;
data = *p1;
printf("The value stored in the variable after write is %d", data);

}


