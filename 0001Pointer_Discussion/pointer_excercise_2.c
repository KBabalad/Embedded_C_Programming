/*
 * pointer_excercise_2.c
 *
 *  Created on: Dec 16, 2020
 *      Author: babal
 *      Write a program in C to demonstrate how to handle the pointers in the program.
 */
#include<stdio.h>
#include<stdint.h>

int main(void)
{
  int m = 29;

  printf("Address of m %p \n", &m);
  printf("Value of m %d \n", m);

  int* ab = (int*) &m;
  printf("Address of ab %p \n", ab);
  printf("Content of ab %d \n", *ab);

  m=34;
  printf("Value of m is now assigned to 34 \n");
  printf("Address of pointer ab %p \n", &ab);
  printf("Content of ab %d \n", *ab);

  *ab = 7;
  printf("Address of m %p \n", &m);
  printf("Address of m %d \n", m);

return 0;
}


