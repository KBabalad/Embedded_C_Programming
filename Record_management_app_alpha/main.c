/*
 * main.c
 *
 *  Created on: Dec 13, 2020
 *      Author: babalad
 */
#include<stdio.h>
#include<stdint.h>
#include<string.h>
#include<stdlib.h>

typedef struct
{
 int rollnumber;
 char studentname[15];
 char branch[15];
 int semester;
 int dob;
}Student_Info_t;


int max_record =10;
Student_Info_t students[10];


void display_user_menu(void);
int display_record(Student_Info_t *pBaseAddr, int max_record);
int add_record(Student_Info_t *pBaseAddr, int max_record);
int delete_record(Student_Info_t *pBaseAddr, int max_record);
int decode_menu_code(int x);
int check_roll_number(int rollnumber, Student_Info_t *record, int max_record);
int read_menu_code();
int exit_application();



//starting point of the application
int main()
{

    int8_t menu_code;
    int8_t app_continue = 1;

    printf("Student record management program\n");

     while(app_continue)
     {
		//1. display menu
		display_user_menu();

		//read the menu code
		menu_code = read_menu_code();

		if(menu_code){
			//Decode the menu code
			decode_menu_code(menu_code);
		}else{
			//end the application if menu_code = 0;
			app_continue = 0;
			printf("Exiting application\n");
		}

     }

    return 0;
}



void display_user_menu(void)
{
	printf("Welcome to the Record Management Application\n");
	printf("Menu for the application is as follows, Press corresponding key\n");
	printf("Display Record-----> 1\n");
	printf("Add a Record-----> 2\n");
	printf("Delete Record-----> 2\n");
	printf("Quit Application------>4 \n");
}


int read_menu_code()
{
  int input; //input from user
  printf("Enter the desired input key listed in the menu:\t");
  scanf("%d",&input);
  return input;
}


int decode_menu_code(int x)
{
  int ret;
  switch(x)
  {
  case 1:
	  printf("Displaying all records\n");
	  display_record(students, max_record);
	  break;
  case 2:
	  printf("Add new record \n");
	  ret = add_record(students, max_record);
	  !ret ? printf("Record Adding unsuccessful :(\n") : printf("Record Adding successful :)\n");
	  break;
  case 3:
	  printf("Delete a record \n");
	  ret = delete_record(students, max_record);
	  !ret ? printf("Record Deleting unsuccessful :(\n") : printf("Record Deleting successful :)\n");
	  break;
  case 4:
	  printf("Exit from Application \n");
	  exit_application();
	  break;
  default:
	  printf("Invalid Input:(, Please read the options in the  menu\n");
	  display_user_menu();
  }
  return 0;
}


int display_record(Student_Info_t *pBaseAddr, int max_record)
{
int i;
 for(i=0;i<max_record;i++)
 {
	printf("Roll Number of %d element =%d \n",i,(pBaseAddr+i)->rollnumber);
	printf("Student Name of %d element =%s \n",i,(pBaseAddr+i)->studentname);
	printf("Student Branch of %d element =%s \n",i,(pBaseAddr+i)->branch);
	printf("Student Semester of %d element =%d \n",i,(pBaseAddr+i)->semester);
	printf("Student DOB of %d element =%d \n",i,(pBaseAddr+i)->dob);
 }
 return 0;
}



int check_roll_number(int rollnumber, Student_Info_t *record, int max_record)
{
	int is_exist = 0;
	for(int i =0; i< max_record; i++)
	{
		if ((record+i)->rollnumber == rollnumber)
		{
			is_exist = 1;
			break;
		}
	}
	return is_exist;
}

int add_record(Student_Info_t *pBaseAddr, int max_record)
{
int add_status = 0;
int is_exist = 0;
int roll_number;
int i;
for(i=0;i<max_record;i++)
  {
  if (!(pBaseAddr+i)->rollnumber)
  {
	  // add a record
	  printf("Add a Record \n");
	  scanf("%d",&roll_number);
      is_exist = check_roll_number(roll_number,students,max_record);
	  if(!is_exist)
	  {
		  add_status =1; // adding a new record
		  (pBaseAddr+i)->rollnumber = roll_number;
		  printf("Enter the student semester: ");
		  scanf("%d",&(pBaseAddr[i]).semester);
		  printf("\nEnter the student dob: ");
		  scanf("%d",&(pBaseAddr[i]).dob);
		  getchar();
		  printf("\nEnter the student name: ");
		  scanf("%15[^\n]s",&(pBaseAddr[i].studentname));
		  getchar();
		  printf("\nEnter the student branch: ");
		  scanf("%15[^\n]s",&(pBaseAddr[i]).branch);
	  }
	  else
	  {
		  printf("Record already exist\n");
	  }
	  break;
  }
  if (i== max_record)
  {
	  printf("Record space max out, no space available\n");
  }
  }
return add_status;
}


int delete_record(Student_Info_t *pBaseAddr, int max_record)
{
	int roll_number;
	int8_t delete_flag =0;
	printf("Enter the roll number you wish to delete:");
	scanf("%d",&roll_number);
	for(int i=0; i < max_record;i++)
	{
		if(((pBaseAddr+i)->rollnumber)==roll_number)
		{
			delete_flag = 1;
			memset(&(pBaseAddr),0,sizeof(Student_Info_t));
			break;
		}
	}
	return delete_flag;
}


int exit_application()
{
 int exit_application_status;
 exit_application_status = 1;
 exit(0);
 return exit_application_status;
}





