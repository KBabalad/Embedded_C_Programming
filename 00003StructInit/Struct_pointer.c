/*
 * Struct_pointer.c
 *
 *  Created on: Oct 4, 2020
 *      Author: babal
 */


#include<stdio.h>
#include<stdint.h>

struct dataset
{
 uint8_t data1;
 uint32_t data2;
 uint8_t data3;
 float data4;
};


int main()
{
 struct dataset data;

 data.data1 = 0x55;
 data.data2 = 0xffffeeee;
 data.data3 = 0xABCD;
 data.data4 = 00;

 printf("%x ",data.data1);
 //uint8_t *ptr = (uint8_t*) &data;

 /* modify the first element of the structure*/
 //ptr = 0x99;
 /*Till here everything will be fine, the value modified for the first member
  * of the structure might take effect but for the second member we will not be
  * recognize by what value the pointer needs to be incremented because of structure padding*/

 /* in this case we use the pointer differencing technique*/
 /* Logic for this is:
  * Step1: Create a pointer variable of type struct whose memebers you want to modify
  * struct dataset *pData;
  * Step2: Now assign the base address of the struct variable to the pointer variable
  * pData holds the address of structure variable data
  * pData = &data;
  * Step3: De-Refernece the pointer variable to select the first member of the structure and then
  * modify the value of the structure member.
  * pData-> data1 = 0x99;
  * Use DE-Referncing only when the structure pointer is involved
  */

 struct dataset *pData;
 pData = &data;
 pData->data1 = 0x99;
 printf("%x ",data.data1);
}
