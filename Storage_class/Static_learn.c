/*
 * Static_learn.c
 *
 *  Created on: Feb 15, 2021
 *      Author: babal
 */
#include<stdio.h>



int func_1(void);
int func_2(void);

int main()
{
  func_1();
  func_1();
  func_1();
  func_1();
  func_1();

  func_2();
  func_2();
  func_2();
  func_2();
  func_2();

}

int func_1(void)
{
  static int count =0;
  count = count +1;

  printf("The number of time the function is cal'd is %d\n", count);
  return 0;
}


int func_2(void)
{
  static int count =0;
  count = count+1;
  printf("The number of times the function is cal'd is %d\n",count);
  return 0;
}


/*
 * In the above example the variable count has a scope only inside the function func_1, it dies as
 * as soon as the function completes its execution/ its scope ends after the exceution of the function
 * is done. if the function func_1 is cl'd again and again the variable count is created again and again
 * so it gets initialized again.
 * The solution we find to see how many ties the functon is being cald is to use static storage class
 *  Memory allocation is as follows:
 *   text    data     bss     dec     hex   filename
     16816    1592     116   18524    485c New_static.c

     Now let us change the storage class for the variable to static:
     we can see the change in memory allocation where the bss is allocated extra 4 bytes and
       text    data     bss     dec     hex filename
  	  16816    1592     120   18528    4860 New_static.c

  Previously the variable was not stored in the bss, so it was getting intialized everytime the function is cald
  If we wanna store the value of the variable through out the program or we want to see the scope
  of the variable thorugh out the program then we will store it as static

     text    data     bss     dec     hex filename
  	 16964    1592     120   18676    48f4 New_static.c

  	 Even though you define the same variable name in the different function it has no impact on the
  	 previous a separate memory space is assigned to the variable which is in the bss for the Static variable


 *
 */
