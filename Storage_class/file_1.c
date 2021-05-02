/*
 * file_1.c
 *
 *  Created on: Feb 15, 2021
 *      Author: babal
 */


#include<stdio.h>

void funct_file_2(void); // giving prototype of the function defined in file_2.c

static int pvt_data_file_1;
/*
 * if the pvt_data_file_1 variable it can always be accessed by a different file!
 * To make a global variable which is dedicated to one particular file, we can use a static storage class
 *
 */

int main()
{
  pvt_data_file_1 = 100;
  printf("pvt_data_file_1 is %d\n",pvt_data_file_1);
  funct_file_2();
  printf("pvt_data_file_1 is %d after calling file_2\n",pvt_data_file_1);
}
