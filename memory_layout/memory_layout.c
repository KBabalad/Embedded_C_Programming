/*
 * memory_layout.c
 *
 *  Created on: Feb 15, 2021
 *      Author: babal
 */


#include<stdio.h>

int global=10; // A global uninitialized variable which is stored in the BSS // Initializing the data variable

int main()
{
static int i=10; // uninitialized static variable stored in bss // initialized data variable stored in data segment
return 0;
}

