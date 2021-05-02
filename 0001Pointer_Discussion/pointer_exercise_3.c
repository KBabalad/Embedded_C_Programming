/*
 * pointer_exercise_3.c
 *
 *  Created on: Dec 16, 2020
 *      Author: babal
 *
 *   Write a program in C to demonstrate the use of &(address of) and *(value at address) operator.
 */


#include<stdio.h>

int main(void)
{
	int m =300;
	float fx = 300.89;
	char cht = 'z';

	printf("Pointer Demonstrate the use of * and &\n");
	printf("---------------------------------------\n");
	printf("Value stored in m: %d\n", m);
	printf("Value stored in fx: %f\n", fx);
	printf("Value stored in cht: %c\n", cht);

	printf("Using & operator \n");
	printf("---------------------------------------\n");
	printf("address of m: %p\n", &m);
	printf("address of fx: %p\n", &fx);
	printf("address of cht: %p\n", &cht);

	printf("Using & and * operator \n");
	printf("---------------------------------------\n");
	printf("Value stored at address %p in m: %d\n", &m,*(&m));
	printf("Value stored at address %p in fx: %f\n", &fx,*(&fx));// this is how you dereference a pointer for a given address
	printf("Value stored at address %p in cht: %c\n", &cht,*(&cht));

	printf("Using only pointer variable \n");
	printf("---------------------------------------\n");
	int* pm = (int*) &m;
	float* pfx =(float*)&pfx;
	char* pcht =(char*)&cht;
	printf("address of m: %p\n", pm);
	printf("address of fx: %p\n", pfx);
	printf("address of cht: %p\n", pcht);

	printf("Using only pointer operator \n");
	printf("-----------------------------------------\n");
	printf("address of m: %d\n", *pm);
	printf("address of fx: %f\n", *pfx);
	printf("address of cht: %c\n", *pcht);


return 0;

}
