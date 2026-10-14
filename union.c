#include<stdio.h>
#include<conio.h>
union Data
{
	int number;
	float decimal;
	char character;
};
int main()
{
	union Data d;
	d.number=25;
	printf("Integer value : %d\n",d.number);
	d.decimal=15.5;
	printf("Float Value : %.2f\n",d.decimal);
	d.character='A';
	printf("Character value :%c\n",d.character);
	return 0;
}
