/*
 * structInt_2.c
 *
 *  Created on: Oct 4, 2020
 *      Author: babal
 */


#include<stdio.h>
#include<stdint.h>

/*Defining a struct is usually done outside the main function */



typedef struct
{
	uint32_t car_number;
	uint32_t car_price;
	uint32_t car_speed;
	float car_weight;
}CarModel_t;


int main()
{
	CarModel_t BMW = {2021, 15000, 220, 1330};
    printf("Size of the structure record CarModel is %d\n", sizeof (BMW));
    printf("Size of the structure record CarModel is %d\n", sizeof (CarModel_t));

	getchar();

	return 0;
}
