/*
 * file_2.c
 *
 *  Created on: Feb 15, 2021
 *      Author: babal
 */
// extern int pvt_data_file_1; // telling the compiler that the variable exists somewhere in the project
extern int system_clock(int data);

// function file 2 is calling system_clock function here from the
// main function, which is exclusive to the main function.


void funct_file_2(void)
{

	system_clock(0);
	while(1);
}
