/*
 * pointer_excercise_4.c
 *
 *  Created on: Dec 16, 2020
 *      Author: babal
 *
 * Add two numbers using the pointers.
 */

#include<stdio.h>

int add_two(int *a, int *b);

int main(void)
{
 int a,b;
 printf("This exercise uses pointers to add two numbers\n");
 printf("-----------------------------------------------------\n");
 printf("Enter two numbers:");
 scanf("%d%d",&a,&b);
 add_two(&a,&b);
 return 0;
}

int add_two(int *a, int *b)
{
  int sum = *a + *b;
  printf("Sum of two numbers is %d\n",sum);
  return 0;
}
