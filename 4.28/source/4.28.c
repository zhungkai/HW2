#include<stdio.h>
#include<stdlib.h>
int code,case1,every,haha;
float hour,wage;
int main()
{
	for (;;)
	{
		printf("1.�g�z  2.�uŪ��  3.�~�Z�u  4.�p��u\n");
		printf("�п�J�N�X(1~4):");
		scanf_s("%d", &code);
		switch (code)
		{
		    case 1:
				printf("�п�J�@�P�T�w���~��:");
				scanf_s("%f", &wage);
				printf("�`�~��:%.2f\n", wage);
				break;
		    case 2:
			
				printf("�п�J�@�p�ɦh�ֿ�:");
				scanf_s("%f", &wage);
				printf("�п�J�@�g�u�@�X�p��:");
				scanf_s("%f", &hour);
				if (hour > 40)
					wage = (hour - 40) * 1.5 * wage + wage * 40;
				else
					wage = hour * wage;
				printf("�`�~��:%.2f\n", wage);
				break;
		    case 3:
			
				printf("�п�J�~�Z�h��:");
				scanf_s("%d", &case1);
				wage = 250 + (case1*0.057);
				printf("�`�~��:%.2f\n", wage);
				break;
		    case 4:
			
				printf("�@�󪫫~���~��:");
				scanf_s("%d", &every);
				printf("���F�X��:");
				scanf_s("%d", &haha);
				wage = every * haha;
				printf("�`�~��:%.2f\n", wage);
				break;
		}
		printf("\n");
	}
	system("pause");
	return 0;
}