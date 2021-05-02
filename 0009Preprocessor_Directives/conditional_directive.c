/*
 * conditional_directive.c
 *
 *  Created on: Feb 7, 2021
 *      Author: babal
 *  Conditional Directives are the one we use when we want to include or exclude a block of code
 *  based on various conditons in the program.
 *
 *  For ex: We can discuss #if and #endif directive
 *  This directive checks whether the constant expression is zero or non-zero. If constant is zero,
 *  the code block will not be included for the code compilation.If the code block is non zero or the
 *  condition is non -zero then the code block will be included in the code compilation. The decision
 *  is made during the compilation time.
 *
 */


#include<stdio.h>
// #define AREA_TRI // as soon as the AREA_TRI macro is defined we will be enabling ifdef block below
//#define AREA_TRI
//#define AREA_CIR



int main()
{
//#ifndef AREA_TRI
//#if defined(AREA_CIR) && defined(AREA_TRI)
  //printf("This program is used to calulate the are of a Circle and a Triangle\n");
//#endif

#if !defined(AREA_CIR) && !defined(AREA_TIR)
	#error "No Macro defined"
#endif

#if 0
  float radius;
  printf("This Program calculates the area of the circle\n");
  fflush(stdout);
  printf("Enter the Radius\n");
  fflush(stdout);
  scanf("%f",&radius);
  printf("Are of the circle is %f",(3.145*radius*radius));
  fflush(stdout);

//#if 0


//#ifdef AREA_TRI // the code below this gets compiled only if AREA_TRI is defined else it does not
  float length;
  float breadth;
  printf("This Program calculates the area of the triangle\n");
  fflush(stdout);
  printf("Enter the length and breadth: ");
  scanf("%f%f",&length, &breadth);
  float area = ((1/2)*(length)*(breadth));
  printf("Area of the triangle = %f",area);
#endif
}

/*
 * The usage of ifdef can also be done using the compiler settings by just adding the MACRO to the
 * compiler settings values field. As shown below:-
 * Properties-> settings-> c/c++ variables-> preprocessor variables-> settings->
 * copy and add the Macro name
 *
 *
 * Usage of #undef:
 * If we want to disable the defined macro we use the #undef key word.
 *
 * Usage of #inndef(if not def)
 * -> If we want to negate the if condition and compile a block of code if the other block of
 * code is defined. Then we need to use the ifndef code.
 *-> ifndef cehceks whether the identifier is define in the code or not. If the identifier is not
 *-> defined then the code block will be included for compilation.
 *
 *
 *Usage of #ifdef and else together
 *-> #ifdef NEW_FEATURE
 *-> // exceute code block
 *-> #else
 *-> //code block for old feature
 *-> #endif
 *->
 *->
 * Usage of #if and 'defined' operator
 * ->Defined operator is used when you want to check definitions of multiple macros using the
 *   single #if, #ifdef and #ifndef operators
 *  -> You can also use 'C' logical operators like AND, OR,NOT with defined operator
 *  -> helps evaluate multiple macros in one single line
 *
 *  Usage of #error
 *  -> If we want to display an error message suggesting that both the macros should be defined,
 *   to throw a warning to the user we can use #error
 */
