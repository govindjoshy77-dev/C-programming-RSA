#include<stdio.h>
void main()
{
	int i,n,fact=1;
	printf("Enter the number to find factorial : ");
	scanf("%d",&n);
	if( n==0 || n==1 )
	{
		printf("factorial = 1 ");
	}
	else
	{
		for(i=1;i<n;i++)
		{
			fact=fact+fact*i;
		}
		printf("factorial of %d is : %d ",n,fact);
	}
}
