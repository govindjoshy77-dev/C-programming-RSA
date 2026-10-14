#include<stdio.h>
struct student
{
	int rollno;
	char name[30];
	float mark;
};
void main()
{
	struct student s[3];
	int i;
	for(i=0;i<=3;i++)
	{
		printf("\n Enter the details of the students \n");
		printf("Enter Roll number:\n");
		scanf("%d",&s[i].rollno);
		printf("Enter the name : \n");
		scanf("%s",&s[i].name);
		printf("Enter the mark : \n");
		scanf("%f",&s[i].mark);
	}
	printf("Student Details :");
	for(i=0;i<3;i++)
	{
		printf("Roll number : %d",s[i].rollno);
		printf("Name        : %s",s[i].name);
		printf("Mark        : %f",s[i].mark);	
	}
}
