#include<stdio.h>
#include<stdlib.h>
int number1;
double balance1, balance2, charges, credits, limit;
int main()
{
	for (;;)
	{
		printf("Enter account number(-1 to end):");
		scanf_s("%d", &number1); 
		if (number1 == -1)
		{
			exit(0);
		}
		printf("Enter beginning balance:");
		scanf_s("%lf", &balance1);
		printf("Enter total charges:");
		scanf_s("%lf", &charges);
		printf("Enter total credits:");
		scanf_s("%lf", &credits);
		printf("Enter credit limit:");
		scanf_s("%lf", &limit);
		balance2 = balance1 + charges - credits;
		printf("Account:     %d\n", number1);
		printf("Credit limit:%.2lf\n", limit);
		printf("Balance:     %.2lf\n", balance2);
		if (balance2 > limit)
			printf("Credit Limit Exceeded.\n\n");
		else
			printf("Credit Limit not Exceeded.\n\n");
	}
		system("pause");
		return 0;
	
}