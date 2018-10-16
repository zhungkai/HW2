#include<stdio.h>
#include<stdlib.h>
int code,case1,every,haha;
float hour,wage;
int main()
{
	for (;;)
	{
		printf("1.經理  2.工讀生  3.業績工  4.計件工\n");
		printf("請輸入代碼(1~4):");
		scanf_s("%d", &code);
		switch (code)
		{
		    case 1:
				printf("請輸入一周固定的薪資:");
				scanf_s("%f", &wage);
				printf("總薪資:%.2f\n", wage);
				break;
		    case 2:
			
				printf("請輸入一小時多少錢:");
				scanf_s("%f", &wage);
				printf("請輸入一週工作幾小時:");
				scanf_s("%f", &hour);
				if (hour > 40)
					wage = (hour - 40) * 1.5 * wage + wage * 40;
				else
					wage = hour * wage;
				printf("總薪資:%.2f\n", wage);
				break;
		    case 3:
			
				printf("請輸入業績多少:");
				scanf_s("%d", &case1);
				wage = 250 + (case1*0.057);
				printf("總薪資:%.2f\n", wage);
				break;
		    case 4:
			
				printf("一件物品的薪資:");
				scanf_s("%d", &every);
				printf("做了幾件:");
				scanf_s("%d", &haha);
				wage = every * haha;
				printf("總薪資:%.2f\n", wage);
				break;
		}
		printf("\n");
	}
	system("pause");
	return 0;
}