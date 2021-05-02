/*
 * main.c
 *
 *  Created on: Oct 4, 2020
 *      Author: babal
 */


#include<stdio.h>
#include<stdint.h>

int main()
{
 uint8_t const data = 10;

 printf("Value in variable data is %d \n", data);

 uint8_t* ptr = &data;
 *ptr = 50;

 printf("value in variable after change data is %d \n",data);

}
