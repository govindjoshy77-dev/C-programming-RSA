#include<stdio.h>
#include<conio.h>
struct student
{
	int rollno;
	char name[30];
	float mark;
};
int main()
{
	struct student s;
	struct student *ptr;
	ptr=&s;
	printf("Enter the roll number :");
	scanf("%d",&ptr->rollno);
	printf("Enter the name : ");
	scanf("%s",&ptr->name);
	printf("Enter the mark : ");
	scanf("%f",&ptr->mark);
	printf("****Student Details****\n");
	printf("Name   : %s \n",ptr->name);
	printf("Rollno : %d \n",ptr->rollno);
	printf("Mark   : %.2f \n",ptr->mark);
	return 0;
}
