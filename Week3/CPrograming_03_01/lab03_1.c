#include <stdio.h>

int main()
{
	int month;
	printf("1~12월 중 한개를 입력하시오 : ");
	scanf_s("%d", &month);

	month <= 6 ? printf("상반기입니다.\n") : printf("하반기입니다.\n");
	return 0;
}
