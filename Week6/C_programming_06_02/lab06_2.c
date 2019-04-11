#include <stdio.h>

void printFirst(int n);

int main()
{
	int num;
	printf("양의 정수를 입력하시오 : ");
	scanf_s("%d", &num);
	printFirst(num);

}

void printFirst(int n)
{
	if (n < 10)
	{
		printf("%d\n", n);
	}
	else
	{
		printFirst(n / 10);
		printf("%d\n", n % 10);
	}
}