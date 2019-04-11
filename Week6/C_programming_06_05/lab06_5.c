#include <stdio.h>
#include <limits.h>

void input();
double checkAverage(int, int, int);

int main()
{
	input();
	return 0;
}

void input()
{
	int i, maxValue, minValue, maxNum, minNum, dif;
	int score[6];
	printf("점수입력\n");
	printf("=======================================================================================\n");
	printf("JAVA1 / JAVA2 / C_PROGRAMMING1 / C_PROGRAMMING2 / PYTHON1 / PYTHON2 순으로 입력\n==>");
	scanf_s("%d %d %d %d %d %d", &score[0], &score[1], &score[2], &score[3], &score[4], &score[5]);
	printf("=======================================================================================\n");
	printf("JAVA1,C_PROGRAMMING1,PYTHON1의 평균 = %lf\n", checkAverage(score[0], score[2], score[4]));
	printf("JAVA2,C_PROGRAMMING2,PYTHON2의 평균 = %lf\n", checkAverage(score[1], score[3], score[5]));
	printf("=======================================================================================\n");
	for (i = 0; i < sizeof(score) / sizeof(int); i++)
	{
		switch (i)
		{
		case 0: case 1:
			printf("%13s%d = %d\n", "JAVA", (i + 1), score[i]);
			break;
		case 2: case 3:
			printf("%13s%d = %d\n", "C_PROGRAMMING", (i + 1) / 2, score[i]);
			break;
		case 4: case 5:
			printf("%13s%d = %d\n", "PYTHON", (i + 1) / 3, score[i]);
			break;
		default:
			break;
		}
	}
	printf("=======================================================================================\n");
	maxValue = 0, minValue = INT_MAX;
	for (int i = 0; i < sizeof(score) / sizeof(int); i++)
	{
		if (score[i] > maxValue)
		{
			maxNum = i;
			maxValue = score[i];
		}
		if (score[i] < minValue)
		{
			minNum = i;
			minValue = score[i];
		}
	}

	printf("가장 높은 점수 받은 과목 %15s 의 점수 = %d\n", (maxNum == 0 ? "JAVA1" : maxNum == 1 ? "JAVA2" : maxNum == 2 ? "C_PROGRAMMING1" : maxNum == 3 ? "C_PROGRAMMING2"
		: maxNum == 4 ? "PYTHON1" : maxNum == 5 ? "PYTHON2" : ""), maxValue);
	printf("가장 낮은 점수 받은 과목 %15s 의 점수 = %d\n", (minNum == 0 ? "JAVA1" : minNum == 1 ? "JAVA2" : minNum == 2 ? "C_PROGRAMMING1" : minNum == 3 ? "C_PROGRAMMING2"
		: minNum == 4 ? "PYTHON1" : minNum == 5 ? "PYTHON2" : ""), minValue);
	printf("=======================================================================================\n");

}

double checkAverage(int a, int b, int c)
{
	return ((double)a + b + c) / 3;
}
