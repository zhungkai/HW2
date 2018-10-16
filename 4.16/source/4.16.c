#include<stdio.h>
#include<stdlib.h>
int a, b, c;
int main()
{
	printf("(A)");
	for (a = 1;a <= 15;a++)
	{
		printf(" ");
	}
	printf("(B)");
	for (a = 1;a <= 15;a++)
	{
		printf(" ");
	}
	printf("(C)");
	for (a = 1;a <= 15;a++)
	{
		printf(" ");
	}
	printf("(D)");
	for (a = 1;a <= 15;a++)
	{
		printf(" ");
	}
	printf("\n");
	for (a = 1;a <= 10;a++)
	{
		for (b = 1;b <= a;b++)
		{
			printf("*");
		}
		for (b = 1;b <= 15 - a;b++)
		{
			printf(" ");
		}
		for (b = 1;b <= 11 - a;b++)
		{
			printf("*");
		}
		for (b = 0;b <= 5 + a;b++)
		{
			printf(" ");
		}
		for (b = 1;b <= a;b++)
		{
			printf(" ");
		}
		for (b = 0;b <= 10 - a;b++)
		{
			printf("*");
		}
		for (b = 0;b <= 15 - a;b++)
		{
			printf(" ");
		}
		for (b = 1;b <= a;b++)
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}