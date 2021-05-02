/*
 * practice_01.c
 *
 *  Created on: Feb 8, 2021
 *      Author: babal
 * Write a program to store and print the roll no., name , age and marks of a student using structures.
 */

#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>


typedef struct
{
  int age;
  int rollnumber;
  char name[10];
  unsigned long phone;
}student_record_t;



int main()
{
	student_record_t student_1; // simple structure variable
	student_record_t student_2;
	student_record_t *pstudent_2; // pointer structure variable

	//initialize pointer to student through dynamic memory allocation
	pstudent_2 =(student_record_t*) &student_2;
	printf("Welcome to Student record Application\n");


	//input data structure members using the dot operator
	printf("ENter the student name: ");
	fgets(student_1.name,40,stdin);

	printf("Enter the student rollnumber: ");
	scanf("%d",&student_1.rollnumber);

	printf("Enter students age:");
	scanf("%d",&student_1.age);

	printf("Enter students Phone: ");
	scanf("%lu",&student_1.phone);

	printf("Student name is %s ",student_1.name);
	printf("Student rollnumber is %d \n",student_1.rollnumber);
	printf("Student age is %d\n",student_1.age);
	printf("Student phone is %lu \n",student_1.phone);

	getchar(); // eat new line from input buffer

    // collect student 2 details in the data structure
    printf("Collect all the details of student 2");
    printf("Enter the student name: ");
    fgets(pstudent_2->name, 40,stdin);

    printf("Enter the student rollnumber: ");
    scanf("%d",&(pstudent_2->rollnumber));


    printf("Enter the student age: ");
    scanf("%d",&(pstudent_2->age));


    printf("Enter the student phone: ");
    scanf("%lu",&(pstudent_2->phone));

	printf("Student name is %s\n",pstudent_2->name);
	printf("Student rollnumber is %d \n",pstudent_2->rollnumber);
	printf("Student age is %d \n",pstudent_2->age);
	printf("Student phone is %lu \n", pstudent_2->phone);

}
