#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],i,j,n,temp;
	printf("Enter the size of array :");
	scanf("%d",&n);
	printf("Enter the array elemnts : \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Array elements are:\n");
	printf("[ ");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf(" ]");
	
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\n");
	printf("Array elements after sorting : \n");
	printf("\n");
	printf("[ ");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf(" ]");
}
