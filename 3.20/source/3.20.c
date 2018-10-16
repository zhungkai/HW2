#include<stdio.h>
#include<stdlib.h>
float hour, every,salary;
int main()
{
	for( ; ; )
	{
		printf("Enter # of hours worked(-1 to end):");
		scanf_s("%f", &hour);
		if (hour == -1)
		{
			exit(0);
		}
		printf("Enter hourly rate of the worker ($00.00):");
		scanf_s("%f", &every);
		if (hour > 40)
		{
			salary = (hour - 40) * 1.5 * every + 40 * every;
		}
		salary = every * hour;
		printf("Salary is $%.2f\n\n", salary);
	}
	system("pause");
	return 0;
}