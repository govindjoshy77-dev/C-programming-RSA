#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],i,key,n;
	printf("enter the number of elements: ");
	scanf("%d",&n);
	printf("Enter the elements :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("elements :\n");
	printf("[ ");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf(" ]");
	printf("\n");
	printf("Enter the element you want to search : \n");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(key==a[i])
		{
			printf("Element %d found at %d th position ",key,i+1);
		}
	break;
	}
	if(key!=a[i])
	{
		printf("not found!");
	}
}
