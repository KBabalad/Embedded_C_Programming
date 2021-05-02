/*
 * practice_02.c
 *
 *  Created on: Feb 9, 2021
 *      Author: babal
 *
 * Create a structure that contains three members of different datatypes
 * allocate the values for the structure members main function and pass
 * the members to a display function and
 */


#include<stdio.h>


typedef struct
{
  int member_1;
  char member_2;
  float member_3;
}members_t;

members_t first_member; // variable of type struct memory allocated size of the datatype members

int display_function(members_t *pFirst_member)
{
  printf("Value in member 1 is %d\n",pFirst_member->member_1);
  printf("Value in member 1 is %c\n",pFirst_member->member_2);
  printf("Value in member 1 is %f\n",pFirst_member->member_3);
 return 0;
}



int main()
{
	printf("Size of the member variable is %d\n",sizeof(first_member));
    first_member.member_1=10;
    first_member.member_2 = "K";
    first_member.member_3 = 3.142;
    members_t *pfirst_member;
    pfirst_member = &first_member;
    display_function(pfirst_member);
  while(1);
}
