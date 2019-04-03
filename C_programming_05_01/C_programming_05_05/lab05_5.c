#include <stdio.h>

int fibo(int);

int main()
{
	int n, i;
	printf("정수 n을 입력하시오 : ");
	scanf_s("%d", &n);
	for (i = 0; i <= n; i++)
	{
		printf("fiboncci(%d) = %d\n", i, fibo(i));
	}
	return 0;
}

int fibo(int n) // 피보나치 재귀함수
{
	if (n == 0) // n == 0일 경우 0을 리턴
		return 0;
	else if (n == 1 || n == 2) // n ==1 || n == 2 일경우 1 을 반환
		return 1; 
	/* 여기 까지 simplest case */
	else // 그외의 경우에는 n - 1 과 n - 2에 해당하는 매개변수를 가지는 피보나치 함수를 재귀 호출.
	{ 
		return fibo(n - 1) + fibo(n - 2); 
	}
}