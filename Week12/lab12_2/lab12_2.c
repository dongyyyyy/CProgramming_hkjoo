#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

void input();
void inputNumber(int*);
void printIntToString(int);

int main()
{
	input();
	system("pause");
	return 0;
}

void input()
{
	int number;
	inputNumber(&number);
	printIntToString(number);
}

void inputNumber(int* number)
{
	printf("10000보다 작은 정수 하나를 입력하세요. -> ");
	scanf_s("%d", number);
}

void printIntToString(int number)
{
	char result[100] = { '\0' };
	int i = 0;
	int bool = 0;
	int num;
	char* str[10] = { "일","이","삼","사","오","육","칠","팔","구" };
	char* counter[10] = { "","십","백","천" };
	for (i = 4; i >= 1; i--)
	{
		if ((num = (number / (int)pow(10.0, (double)i - 1))) > 0)
		{
			if (bool == 0)
			{
				strcpy(result, str[num - 1]);
				strcat(result, counter[i - 1]);
				bool++;
			}
			else {
				strcat(result, " ");
				strcat(result, str[num - 1]);
				strcat(result, counter[i - 1]);
			}
			number = number % (int)pow(10.0, (double)i - 1);
		}
	}
	printf("입력한 정수는 [%s]입니다.\n", result);
}