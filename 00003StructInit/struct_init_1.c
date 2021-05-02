/*
 * struct_init_1.c
 *
 *  Created on: Nov 23, 2020
 *      Author: babal
 */

#include<stdio.h>
#include<stdint.h>

struct CarModel
{
uint32_t CarNumber;
uint32_t CarPrice;
uint16_t CarMaxSpeed;
float CarWeight;
};

int main()
{
 struct CarModel BMW ={.CarNumber= 124, .CarMaxSpeed=220, .CarPrice=32000, .CarWeight= 2789.150};
 printf("Size of the struct is %d \n",sizeof(BMW));
 // printf(" CarNumber = %s\n",BMW.CarNumber);
// printf("CarPrice= %u\n",BMW.CarPrice);
// printf("CarMaxSpeed= %u\n",BMW.CarMaxSpeed);
// printf("CarWeight= %f\n",BMW.CarWeight);
}
