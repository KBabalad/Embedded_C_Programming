/*
 * In this program we are going to see how a typedef strcut is going to look like
 * Why we need to d o a typedef?
 * in order to create the structure always we need to call the sruct key word again and again
 * so we are using typedef or alias name
 */

#include<stdio.h>
#include<stdint.h>

typedef struct
{
uint32_t data1;
uint16_t data2;
uint8_t data3;
float data4;
}DATASET_t;


int main()
{
DATASET_t data_share;
data_share.data1= 0xAA;
data_share.data2 = 0x08;
data_share.data3 = 1;
data_share.data4 = 0.44;
printf("All data is equal to %x %x %u %f\n",data_share.data1,data_share.data2,data_share.data3, data_share.data4);
}
