/*
 * File_1.c
 *
 *  Created on: Feb 16, 2021
 *      Author: babal
 */


#include<stdio.h>
#include<stdint.h>

uint8_t const data = 10; // a simple variable of 1 byte

int main()
{

 // data =30;
 printf("The variable data is holding the value %d\n",data);
 // If we want to make the variable only read only then we can use the const type-qualifier
 // But, we can always modify the value using a pointer,
 uint8_t *ptr;
 ptr = (uint8_t*)&data; // here we are modifying the data using the pointer to the data variable
 *ptr = 40;
 printf("The variable data is holding the value %d\n",data);
}


/*
 * So here a programmer is promising the compiler that the variable data is being used as read-only
 * We are telling the compiler we will not modify the variable data
 *
 *  Lets take a look at the memory location before making it a const variable
 *    text    data     bss     dec     hex filename
  	  16748    1592     116   18456    4818 File_dummy.c

 * So when I make it a constant variable the compiler doesnt allow and throws the following error:
	 * e_1.c"
	..\File_1.c: In function 'main':
	..\File_1.c:16:7: error: assignment of read-only variable 'data'
	  data =30;
 *
 *
  	Lets take a look at the memory location after making it a const variable?
 *     text    data     bss     dec     hex filename
  	  16732    1592     116   18440    4808 File_dummy.c

  	  The memory allocation here we can observe that the both the constant defined and normal defined
  	  variable are stored in the bss segment. SO in the definition all the variables which are
  	  initialized are stored in bss segment.

  	  So in this program if we make the const variable to be a global variable, then the variable
  	  will be stored in ROM or the read only memory in that case the variable.Thi would actually
  	  make the application to crash.Let us take a look at the memory,
  	     text    data     bss     dec     hex filename
  	  	 16784    1592     116   18492    483c File_2.c
 *
 */
