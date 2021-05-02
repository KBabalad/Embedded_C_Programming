/*
 * Macro_usage.c
 *
 *  Created on: Feb 6, 2021
 *      Author: babal
 *
 *  In this exercise we will study about the usage of macros in C.
 *  Macro's are used for textual replacement.
 *  In Embedded Systems we use a lot of macros to define
 *  -> PIN Numbers
 *  -> pin Values
 *  -> Crystal speed
 *  -> Peripheral register Address
 *  -> memory Address
 *  -> For Config values
 *  ex: # define PIN_8
 *  	# define GREEN_LED PIN_8
 *  	#define LED_STATE_ON 1
 */


#include<stdio.h>
#include<stdlib.h>

#define PI_VALUE 3.415
#define Area_of_Circle(r) PI_VALUE*r*r

int main()
{
float area_of_circle;
area_of_circle = Area_of_Circle(1+1);
printf("Are of circle is %f\n",area_of_circle);


}


/*Using Macros can make the life of programmer easy, especially in case where we use multiple
 * constants through out the prgram, but in the future if we want to change the value of the c
 * constant or to create the test cases by inputting different values, use of MACRO's would come
 * handy.
 *
 * As we use the macros we also have certain drawbacks of using them, especially in the above
 * example where in we use more than one constant defined as a macro. If we hnag the value of
 * the function what we are passing through the function macro we will get a different value
 * for the same value. That is because of the precedence followed by the compiler and if we wanna
 * use the precedence we need to actually use the parenthesis generously.
 *
 *
 * Best Practices while using the Macros
 * -> Use of Meaningful names for macros.
 * -> Use Upper case for the Macros definition to differentiate them from the normal variables.
 * -> Macros NAmes are not Variables they are actually the Identifiers, which is the alias name
 *    constants
 * -> Make sure to use the PArenthesis generously while using the macro names.
 * -> While using Function like macro's or when using the macros along with any operators,
 *    always  surrond  the opernads with parenthesis.
 */



