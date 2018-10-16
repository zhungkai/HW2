#include<stdio.h>
#include<stdlib.h>
int i;
float salary;
int main()
{
	for (; ; )
	{
		printf("Enter sales in dollars(-1 to end):");
		scanf_s("%f", &salary);
		if (salary == -1)
		{
			exit(0);
		}
		salary = (salary * 0.09) + 200;
		printf("Salary is :%.2f\n\n", salary);
	}
	system("pause");
	return 0;
}