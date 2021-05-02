/*
 * pointer_excercise_1.c
 *
 *  Created on: Dec 16, 2020
 *      Author: babal
 *   In this exercise we will see the basic pointer declaration of a pointer?
 *
 */

#include<stdio.h>


int main()
{
 //create a pointer variable of type char and store an address on to it
 int m,n,o;
 m=11;
 char* addr_1 =(char*) &m;
 printf("Value stored of pointer variable %d \n ", *addr_1);
 printf("The address of variable m %p \n ", &m);
 printf("The address of pointer variable %p \n ", &addr_1);
 printf("Address of variable n %p \n", &n);
 printf("address of variable o %p \n ", &o);
 return 0;
}
