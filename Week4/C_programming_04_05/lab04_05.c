#include <stdio.h>
//5번문제
main()
{
	int n, i = 0, fibo1 = 0, fibo2 = 0;
	printf("정수 n의 값을 입력하시오 : ");
	scanf_s("%d", &n, sizeof(n));
	while (i <= n)
	{
		if (n == 1 || n == 2)
		{
			printf("fiboncci(%d) = %d\n", n, 1);
			break;
		}
		else
		{
			// i == 1 & 2일 경우는 simplest case
			if (i == 1)
			{
				fibo1 = 0;
				fibo2 = 1;
			}
			else if (i == 2)
			{
				fibo1 = 1;
				fibo2 = 1;
			}
			else
			{
				fibo2 = fibo1 + fibo2;
				fibo1 = fibo2 - fibo1;
			}
			printf("fiboncci(%d) = %d\n", i, fibo2);
		}
		i++;
	}
}
}