#include <stdio.h>
//3번문제
main()
{
	int n, sum, i;
	printf("정수 n 을 입력하시오 : ");
	scanf_s("%d", &n, sizeof(int));
	sum = 1;
	for (int i = 1; i <= n; i++)
	{
		sum *= i;
	}
	printf("n! = %d", sum);
}