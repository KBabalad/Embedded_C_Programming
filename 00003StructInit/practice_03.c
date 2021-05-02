/*
 * practice_03.c
 *
 *  Created on: Feb 24, 2021
 *      Author: babal
 */


#include<stdio.h>

typedef struct
{
  int member_1;
  float member_2;
  char member_3;
}members_t;

int display_function(members_t *pData)
{
 if(pData==NULL)
 {
	 printf("Null pointer allocated\n");
 }
 else
 {
	 printf("Member1 is %d\n", pData->member_1);
	 printf("Member2 is %f\n", pData->member_2);
	 printf("Member3 is %c\n", pData->member_3);
 }
return 0;
}


int main()
{
 members_t first_member; // memory allocation using a structure.
 members_t *pData; // new pointer allocated
 first_member.member_1 = 10;
 first_member.member_2 = 3.142;
 first_member.member_3 = 'J';
 pData = &first_member; // storing the address of the strcut variable
 display_function(pData);
 while(1);
}

