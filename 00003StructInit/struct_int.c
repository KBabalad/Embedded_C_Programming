/*
 * struct_int.c
 *
 *  Created on: Oct 4, 2020
 *      Author: babal
 */
/*Exercise is to create a carmodel structure, and create 2 variables of type carModel.
 * Initialize the variables with the below given data and print them */


#include<stdio.h>
#include<stdint.h>

/*Defining a struct is usually done outside the main function */



struct carModel
{
	uint32_t car_number;
	uint32_t car_price;
	uint32_t car_speed;
	float car_weight;
};


int main()
{
	struct carModel BMW = {2021, 15000, 220, 1330};
	struct carModel AUDI = {4031, 35000, 160, 1900.96};
	struct carModel FIAT = {.car_number= 1828, .car_price= 15000, .car_speed = 120};

	printf("Details of the Car Model BMW are \n");
	printf("Car_number = %u \n", BMW.car_number);
	printf("Car_price = %u \n", BMW.car_price);
	printf("Car_speed = %u \n", BMW.car_speed);
	printf("Car_weight = %f \n", BMW.car_weight);

	printf("Details of the Car Model AUDI are \n");
	printf("Car_number = %u \n", AUDI.car_number);
	printf("Car_price = %u \n", AUDI.car_price);
	printf("Car_speed = %u \n", AUDI.car_speed);
	printf("Car_weight = %f \n", AUDI.car_weight);

	printf("Details of the Car Model FIAT are \n");
	printf("Car_number = %u \n", FIAT.car_number);
	printf("Car_price = %u \n", FIAT.car_price);
	printf("Car_speed = %u \n", FIAT.car_speed);
	printf("Car_weight = %f \n", FIAT.car_weight);


	/*change a structure member or add a new avlue to the structure variable we can do that below*/

	BMW.car_number = 1234;
	BMW.car_price = 20000;
	BMW.car_speed = 222;
	BMW.car_weight = 1500.23;

	printf("Details of the Car Model BMW are \n");
	printf("Car_number = %u \n", BMW.car_number);
	printf("Car_price = %u \n", BMW.car_price);
	printf("Car_speed = %u \n", BMW.car_speed);
	printf("Car_weight = %f \n", BMW.car_weight);

	getchar();

	return 0;


}
