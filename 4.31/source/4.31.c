#include<stdio.h>
#include<stdlib.h>
int a, b, c;
int main()
{
	for (a = 1;a <= 5;a++)
	{
		for (b = 1;b <= 5 - a;b++)
		{
			printf(" ");
		}
		for (b = 1;b <= 2 * a - 1;b++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (a = 1;a <= 4;a++)
	{
		for (b = 1;b <= a;b++)
		{
			printf(" ");
		}
		for (b = 1;b <= 9-2*a;b++)
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}