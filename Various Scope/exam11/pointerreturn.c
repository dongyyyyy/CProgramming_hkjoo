#include <stdio.h>

int * add(int *, int, int);
int * subtract(int *, int, int);
int * multiply(int, int);

int main()
{
	int m = 0, n = 0, sum = 0, diff = 0;

	printf("두 정수 입력 : ");
	scanf_s("%d %d", &m, &n);

	printf("두 정수 합(return) : %d", *add(&sum, m, n));
	printf("\t두 정수 합(sum) : %d\n", sum);
	printf("두 정수 차(return) : %d", *subtract(&diff, m, n));
	printf("\t두 정수 차(diff) : %d\n", diff);
	printf("두 정수 차 : %d\n", *multiply( m, n));

	system("pause");
	return 0;
}

int * add(int *result, int a, int b)
{
	*result = a + b;
	return result;
}
int * subtract(int *result, int a, int b)
{
	*result = a - b;
	return result;
}
int * multiply(int a, int b)
{
	int mult = a * b;
	return &mult;
}