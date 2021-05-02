/*
 * string_literal.c
 *
 *  Created on: Dec 10, 2020
 *      Author: babal
 */

#include<stdio.h>
#include<string.h>
#include<stdint.h>

int main()
{
 char msg_1[] = "Hello How are you?";
 char *pmsg_2 = "How you doing";
 printf("Message string is %s \n",msg_1);
 printf("Address of message_1 is %p\n", &msg_1);
 printf("Value stored inside message_1 is %p\n", msg_1);
 // char pmsg_2[0] = "K";//not possible as this variable is holding the address of flash memory and it cannot be changed
 printf("Message string is %s \n",pmsg_2);
 printf("Address of message_1 is %p\n", &pmsg_2);
 printf("Value stored inside message_1 is %p", pmsg_2);
}
