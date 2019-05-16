#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <limits.h>


void input();
void setNumber(int *, int);
void printNumber(int *, int);
void checkNumber(int *, int *, int, int);
void checkPrintNumber(int *, int);
void checkOftenNumber(int *, int);

static int totalCount;
int main()
{
	input();
	system("pause");
	return 0;
}

void input()
{
	int number[100] = { 0 };
	int count[20] = { 0 };
	int numbersize, countsize;
	numbersize = sizeof(number) / sizeof(int);
	countsize = sizeof(count) / sizeof(int);
	setNumber(number, numbersize);
	printNumber(number, numbersize);
	checkNumber(number, count, numbersize, countsize);
	checkPrintNumber(count, countsize);
	checkOftenNumber(count, countsize);
}

void setNumber(int *number, int numbersize)
{
	int i;
	srand(time(NULL));
	for (i = 0; i < numbersize; i++)
	{
		*(number + i) = rand() % 20 + 1;
	}
}

void printNumber(int *number, int numbersize)
{
	printf("1에서 20 사이의 난수 100개 \n");
	int i, j, count = 0;
	for (i = 0; i < numbersize / 20; i++)
	{
		for (j = 0; j < numbersize / 5; j++)
		{
			printf("%3d", number[count++]);
		}
		puts("");
	}
}

void checkNumber(int *number, int *count, int numbersize, int countsize)
{
	int i;
	for (i = 0; i < numbersize; i++)
	{
		if (number[i] <= countsize)
		{
			count[*(number + i) - 1] += 1;
			totalCount++;
		}
	}
}

void checkPrintNumber(int *count, int countsize)
{
	int i;
	printf("======================================================================================\n");
	printf("번호  ");
	for (i = 0; i < countsize; i++)
	{
		printf("%4d", i + 1);
	}
	puts("");
	printf("======================================================================================\n");
	printf("횟수  ");
	for (i = 0; i < countsize; i++)
	{
		printf("%4d", *(count + i));
	}
	puts("");
	printf("======================================================================================\n");
}

void checkOftenNumber(int *count, int countsize)
{
	printf("\n총 출현 빈도수는 %d 입니다.\n\n", totalCount);
	int max = 0;
	int i;
	for (i = 0; i < countsize; i++)
	{
		if (count[i] > max)
		{
			max = i;
		}
	}
	printf("1 ~ 20 중 가장 많이 나온 수는 %d이고, %d번 나왔습니다.\n\n", max + 1, count[max]);
}