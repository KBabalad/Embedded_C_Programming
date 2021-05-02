/*
 * read_print_string.c
 *
 *  Created on: Dec 11, 2020
 *      Author: babal
 *
 *  In this exercise lets ask the user to in put the name using the scanf and print the read name using the printf
 */

#include<stdio.h>
#include<stdint.h>
#include<string.h>

int main(void)
{
 char name[10];
 printf("Enter the user name:");
 fflush(stdout); //used to check the console output in the eclipse IDE
 scanf("%s",name);
 printf("Hello %s",name);
 return 0;
}
