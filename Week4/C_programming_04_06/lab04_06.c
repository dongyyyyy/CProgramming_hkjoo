#include <stdio.h>
//6번 문제
main()
{
	int n, i, sum = 0;
	printf("정수 n을 입력하시오 : ");
	scanf_s("%d", &n, sizeof(int));
	for (i = 1; i <= n; i++)
	{
		if (i % 3 != 0)
		{
			sum += i;
		}
	}
	printf("1 ~ n까지 3의 배수를 제외한 합 = %d", sum);

}