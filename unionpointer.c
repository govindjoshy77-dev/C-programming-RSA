#include<stdio.h>
#include<conio.h>
union student
{
	int rollno;
	char name[30];
	float mark;
};
int main()
{
	union student s;
	union student *ptr;
	ptr=&s;
	printf("Enter the roll number :");
	scanf("%d",&ptr->rollno);
	printf("Rollno : %d \n",ptr->rollno);
	printf("Enter the name : ");
	scanf("%s",&ptr->name);
	printf("Name   : %s \n",ptr->name);
	printf("Enter the mark : ");
	scanf("%f",&ptr->mark);
	printf("Mark   : %.2f \n",ptr->mark);
	return 0;
}
