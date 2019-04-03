#include <stdio.h>

int findMax(int, int, int);

int main()
{
	int num1, num2, num3;
	printf("세개의 정수를 입력하시오 : ");
	scanf_s("%d%d%d", &num1, &num2, &num3);
	printf("최대값 : %d", findMax(num1, num2, num3));
}

int findMax(int num1, int num2, int num3) // 최대값 비교
{
	int max;
	if (num1 > num2)
	{
		max = num1;
	}
	else
	{
		max = num2;
	}
	if (max < num3)
	{
		max = num3;
	}
	return max;
}