/*
 * struct_pointer_Diff_Function.c
 *
 *  Created on: Oct 4, 2020
 *      Author: babal
 */


#include<stdio.h>
#include<stdint.h>


struct DataSet
{
 uint8_t data1;
 uint32_t data2;
 uint32_t data3;
 float data4;
};

void DisplayMemberElements(struct DataSet *pData);


int main()
{
 struct DataSet data;

 data.data1 = 0x55;
 data.data2 = 0xffffeeee;
 data.data3 = 0xff11;
 data.data4 = 00;

 DisplayMemberElements(&data);

 getchar();

 return 0;

}

void DisplayMemberElements(struct DataSet *pData)
{
  printf("Data1 = %x \n", pData->data1);
  printf("Data2 = %x \n", pData->data2);
  printf("Data3 = %x \n", pData->data3);
  printf("Data4 = %f \n", pData->data4);

}

