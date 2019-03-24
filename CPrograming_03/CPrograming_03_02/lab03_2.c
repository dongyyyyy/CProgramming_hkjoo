#include <stdio.h>

int main()
{
	int money;
	printf("지불할 금액을 입력하시오(최소 천원단위) : ");
	scanf_s("%d", &money);
	/*
	money / 50000 >= 1 ? printf("50000원권 %d개,", money / 50000), money %=50000 : printf("50000원권 0개,");
	money / 10000 >= 1 ? printf("10000원권 %d개,", money / 10000), money %= 10000 : printf("10000원권 0개,");
	money / 5000 >= 1 ? printf("5000원권 %d개,", money / 5000), money %= 5000 : printf("5000원권 0개,");
	money / 1000 >= 1 ? printf("1000원권 %d개,", money / 1000), money %= 1000 : printf("1000원권 0개\n");
	*/
	(money / 50000 >= 1 ? (printf("50000원권 %d개,", money / 50000), money %= 50000) : printf("50000원권 0개,")),
		(money / 10000 >= 1 ? (printf("10000원권 %d개,", money / 10000), money %= 10000) : printf("10000원권 0개,")),
		(money / 5000 >= 1 ? (printf("5000원권 %d개,", money / 5000), money %= 5000) : printf("5000원권 0개,")),
		(money / 1000 >= 1 ? (printf("1000원권 %d개,", money / 1000), money %= 1000) : printf("1000원권 0개\n"));
	return 0;
}
