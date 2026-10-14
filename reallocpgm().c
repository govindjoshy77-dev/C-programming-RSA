#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,newn;
	int *p;
	printf("Enter the number of elements:\n ");
	scanf("%d",&n);
	p=(int*)calloc(n,sizeof(int));
	if(p==NULL)
	{
		printf("Memory allocation Failed :");
		return 1;
	}
	printf("Enter the elements : \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
	}
	printf("elements are : \n");
		for(i=0;i<n;i++)
	{
		printf("%d ",p[i]);
	}
	p=(int*)realloc(p,newn* sizeof(int));
	if(p==NULL)
	{
		printf("Memory allocation failed !");
		return 1;
	}
	printf("/n");
	printf("Enter the new size :\n");
	scanf("%d",&newn);
	if(newn>n)
	{
		printf("Enter new element: \n");
	
		for(i=n;i<newn;i++)
		{
	
			scanf("%d",&p[i]);
		}
	printf("the elements are:\n");
	for(i=0;i<newn;i++)
	{
		printf("%d ",p[i]);
	}
	}
	free(p);
	return 0;
}
