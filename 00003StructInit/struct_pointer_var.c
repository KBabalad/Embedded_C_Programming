/*
 * struct_pointer_var.c
 *
 *  Created on: Nov 29, 2020
 *      Author: babal
 * We cannot access the member of the structure by just knowing the base address of the structure
 * because if we create a pointer pointing at the base address and increment the pointer we cannot access the exact
 * member we need from the structure, because of the structure padding.
 *
 * So the solution to this using the pointer differencing operator and by assigning the pointer variable to the
 * address of the structure member
 *
 */

#include<stdio.h>
#include<stdint.h>

struct DataSet
{
int data1;
char data2;
int data3;
float data4;
};


int main()
{
struct DataSet data;
struct DataSet *pData;
// initial values
data.data1 = 0x22;
data.data2 = 'A';
data.data3 = 0x33;
data.data4 = 0.3;
//printing before changing the values of member elements
printf("The members of the structure are %d %d %d %f\n", data.data1,data.data2,data.data3,data.data4);
// assigning the address of structure variable data to the pointer variable which is of the type struct as well
pData = &data; // address of variable data to pointer data
pData->data1 = 0x55; // dereferencing using the -> dereferencing operator, where you access the address of the structure member
pData->data2 = 0x99;
pData->data3 = 0x01;
pData->data4 = 0.7;

getchar();
printf("The members of the structure are %d %d %d %f\n", pData->data1,pData->data2,pData->data3,pData->data4);
getchar();
}
