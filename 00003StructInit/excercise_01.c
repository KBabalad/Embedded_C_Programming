/*
 * excercise_01.c
 *
 *  Created on: Dec 16, 2020
 *      Author: babal
 *
 */

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct
{
 int a;
 uint16_t usingned;
 char c;
}name;

int check(const name *p);

int main()
{
//memory gets alloted here
name val; // variable of type struct name
//malloc null pointer
name *p;
val.a=10;
val.usingned= 12;
val.c='a';
p=&val;

//call the function check
check(p);
}



int check(const name *p)
{
int True =1;
int False =0;
 if(p==NULL)
 {

	 printf("%d\n",False);

 }
if (((p->a %2) ==0)&&((p->usingned % 2)==0)&&((p->c % 2)!=0))
{
	printf("%d\n", True);
}
printf("%d\n",False);
return NULL;
}
