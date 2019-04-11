#include <stdio.h>

int findMax(int, int[]);

int main()
{
	int i, n, num;
	int score[20];
	printf("입력 개수 N을 입력하시오 : ");
	scanf_s("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("정수를 입력하시오 : ");
		scanf_s("%d", &num);
		score[i] = num;
	}
	printf("최대값 : %d\n", findMax(n, score));

}

int findMax(int n, int score[])
{
	int m;
	if (n == 0)
	{
		return score[n];
	}
	m = findMax(n - 1, score);
	if (m < score[n])
		return score[n];
	else
		return m;
}
