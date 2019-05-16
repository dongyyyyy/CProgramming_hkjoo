#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <limits.h>

void input();
void setNumber(int *);
void printHead(int *, int *);
void printHigher(int *, int *);
void printLower(int *, int *);
void printAnswer(int *);
int checkNumber(int *, int *);
static int min = 0;
static int max = 0;


static int trycount = 0;

int main()
{
	input();
	system("pause");
	return 0;
}

void input()
{
	int number, answer;
	setNumber(&answer);
	printHead(&number, &answer);
}

void setNumber(int *answer)
{
	int i;
	srand(time(NULL));

	*answer = rand() % 100 + 1;

	printf("1에서 100까지의 하나의 정수가 결정되었습니다.\n");

}

void printHead(int *number, int *answer)
{
	printf("이 정수를 맞추어 보세요? (%d회차) > ", ++trycount);
	scanf_s("%d", number);
	checkNumber(number, answer);
}

void printHigher(int *number, int *answer)
{
	printf("맞추어야 할 정수가 입력한 정수 %d보다 큽니다.\n", *number);
	printf("%d에서 %d사이의 정수를 다시 입력하세요. (%d회차) > ", min, max, ++trycount);
	scanf_s("%d", number);
	checkNumber(number, answer);
}

void printLower(int *number, int *answer)
{
	printf("맞추어야 할 정수가 입력한 정수 %d보다 작습니다.\n", *number);
	printf("%d에서 %d사이의 정수를 다시 입력하세요. (%d회차) > ", min, max, ++trycount);
	scanf_s("%d", number);
	checkNumber(number, answer);
}

void printAnswer(int *number)
{
	printf("축하합니다! 정답은 %d입니다.\n", *number);

}
int checkNumber(int *number, int *answer)
{
	if (trycount < 5)
	{
		if (*number == *answer)
		{
			printAnswer(number);
		}
		else if (*number > *answer)
		{
			max = *number;
			printLower(number, answer);
		}
		else
		{
			min = *number;
			printHigher(number, answer);
		}
	}
	else
	{
		printf("주어준 횟수를 초과했습니다.\n");
	}
}