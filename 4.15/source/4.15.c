#include<stdio.h>
#include<stdlib.h>
int investment1,investment2,investment3,rate,year,total;
int main()
{
	printf("請輸入你要投資多少:");
	scanf_s("%d", &investment1);
	for (rate = 0;rate <= 14; rate++)
	{
		year = rate + 1;
		investment2 = investment1 * (0.1 + (rate*0.005));
		investment1 = investment1 + investment2;
		printf("第%d年賺:%d元\n", year, investment2);
		total = total + investment2;
	}
	printf("總共賺:%d元",total);
	printf("\n");
	system("pause");
	return 0;
}