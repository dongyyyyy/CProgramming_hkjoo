#include <stdio.h>
//7번 문제
int main()
{
	int max, num1, num2, num3;
	printf("3개의 정수를 입력하시오 : ");
	scanf_s("%d%d%d", &num1, &num2, &num3);

	if (num1 > num2)
	{
		max = num1;
		if (max < num3)
			max = num3;
	}
	else
	{
		max = num2;
		if (max < num3)
			max = num3;
	}
	printf("최대값 = %d\n", max);
}