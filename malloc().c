#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i;
	int *p;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	if(p==NULL)
	{
		printf("memory allocation failed!");
		return 1;
	}
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
	}
	printf("**************************\n");
	printf("Elements are\n");
	printf("**************************\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",p[i]);
	}
	free(p);
	return 0;
}
