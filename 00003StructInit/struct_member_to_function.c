/*
 * struct_member_to_function.c
 *
 *  Created on: Nov 29, 2020
 *      Author: babal
 *
 * SO why do we need the pointers to be used when manipulating the members of the structures?
 * Sometimes we might pass the member of the structure to a different function for manipulation
 * or the function might use the structure member and manipulate it.
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

int display_member_element(struct DataSet *pData);

struct DataSet data;

int main()
{
	data.data1= 0x11;
    printf("the value of the structure member %X\n", data.data1);
    display_member_element(&data); //always need to pass an address here if the function is asking for an pointer type data
    printf("the value of the structure member %X %X %X %f\n", data.data1,data.data2,data.data3,data.data4);

}

//defining the function which take the argument as the address of data
//This also call'd pass by reference here we are not passing the value of the variable, but we are passing a
// a varable by its reference or address
int display_member_element(struct DataSet *pData)
{
	pData->data1 = 0x88;
	pData->data2 = 0x33;
	pData->data3 = 0x23;
	pData->data4 = 0x09;
	printf("the value of the structure member %X %X %X %f\n", pData->data1,pData->data2,pData->data3,pData->data4);
	return 0;
}






