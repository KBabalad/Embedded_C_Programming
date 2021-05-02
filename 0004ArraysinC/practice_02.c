/*
 * practice_02.c
 *
 *  Created on: Feb 9, 2021
 *      Author: babal
 *  Reverse a 64bit number
 *
 */
#include<stdio.h>

void bin(unsigned n)
{
    unsigned i;
    for (i = 1 << 31; i > 0; i = i / 2)
        (n & i) ? printf("1") : printf("0");
}

int main(void)
{
    bin(7);
    printf("\n");
    bin(4);
}
