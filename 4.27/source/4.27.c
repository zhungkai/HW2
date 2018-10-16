#include<stdio.h>
#include<stdlib.h>
int side1, side2, hyp;
int main()
{
	printf("please input side1:");
	scanf_s("%d", &side1);
	printf("please input side2:");
	scanf_s("%d", &side2);
	printf("please input hypotenuse:");
	scanf_s("%d", &hyp);
	if ((hyp * hyp == side1 * side1 + side2 * side2) && (hyp <= 500))
	{
		printf("This is a right triangle.\n");
	}
	else if ((hyp * hyp != side1 * side1 + side2 * side2) && (hyp <= 500))
	{
		printf("This is not a right triangle.\n");
	}
	else
	{
		printf("The hypotenuse is out of range.\n");
	}
	system("pause");
	return 0;
}