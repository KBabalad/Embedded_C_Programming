/*
 * malloc_array.c
 *
 *  Created on: Feb 9, 2021
 *      Author: babal
 *  In this example we are goin to dynamically allocate the memory to a pointer variable
 *
 *
 */

#include<stdio.h>
#include<stdlib.h>


int main()
{
 int *ptr;
 int n,i;

 // get the number of elements for the array
  n=25;
  //printf("Enter the number of elements: %d \n",n);
  //scanf("%d",&n);

  // dynamically allocate the memory to the ptr
  ptr = (int*)malloc(n,sizeof(int));
  ptr = realloc(ptr,20*sizeof(int));

  // to check whether the memory is successfully allocated
  if(ptr == NULL)
  {
	  printf("Memory not allocated\n");
	  exit(0);
  }
  else
  {
	  printf("Memory successfully allocated\n");

	  //get the elements of the array
	  for(i=0;i<n;++i)
	  {
		  ptr[i]=i+1;
	  }
	  printf("Elements of the array are: ");
	  for(i=0;i<n;i++)
	  {
		  printf("%d",ptr[i]);
	  }
  }
  return 0;


}


