#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	printf("Enter a and b : ");
	scanf("%d%d",&a,&b);
	printf("Bitwise AND %d\n",a&b);
	printf("Bitwise OR  %d\n",a|b);
	printf("Bitwise XOR %d\n",a^b);
	printf("Bitwise NOT %d\n",~a);
	printf("Bitwise Left shift  %d\n",a<<1);
	printf("Bitwise right shift %d\n",a>>1);
}
