/*
 * struct_padding.c
 *
 *  Created on: Nov 23, 2020
 *      Author: babal
 *
 *      In this we are going to discuss the structure padding and alignment
 */

#include<stdio.h>
#include<stdint.h>

struct SampleData
{
 char data1;
 int data2;
 char data3;
 short data4;
}__attribute__((packed));

int main()
{
 uint16_t total_size = sizeof(struct SampleData);
 struct SampleData data;//variable data represents the structure SampleData
 printf("the size of the structure created is %d bytes\n",total_size);
 printf("-----------------------Data in the structure---------------\n");

 //create a pointer to access the structure pointer
 uint32_t* ptr = (uint32_t*)&data; // storing the address of the data to the pointer variable
 data.data1 = 0x11;
 data.data2= 0xffff;
 data.data3 = 1;
 data.data4 = 0.99;

 //printing the individual data stored inside the structure
 for(int i=0;i<total_size;i++)
 {
	 printf("%p   :  %X \n", ptr, *ptr);
	 ptr++;
 }

 getchar();
}


/*

 the size of the structure created is 12
-----------------------Data in the struture---------------
0061FF08   :  11
0061FF0C   :  1FFFF
0061FF10   :  3F7D70A4
0061FF14   :  C0000
0061FF18   :  4
0061FF1C   :  61FF1C
0061FF20   :  61FF0C
0061FF24   :  341000
0061FF28   :  61FF80
0061FF2C   :  401233
0061FF30   :  1
0061FF34   :  C64D28


Aligned storage of data using structures

 */

