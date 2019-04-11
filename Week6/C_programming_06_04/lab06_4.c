#include <stdio.h>

void inputNumber();
void printToX(int, int);
int main()
{
	inputNumber();
	return 0;
}

void inputNumber()
{
	int number, changeNumber;
	printf("10진수 값을 입력하시오 : ");
	scanf_s("%d", &number);
	printf("변경할 진수를 입력하시오 : ");
	scanf_s("%d", &changeNumber);
	printf("======================================\n");
	printf("10진수 -> %d진수 = ", changeNumber);
	printToX(number, changeNumber);
	puts("");
}

void printToX(int number, int changeNumber)
{
	if (changeNumber == 2 || changeNumber == 8 || changeNumber == 16)
	{
		if (number < changeNumber)
		{
			if (number < 10)
			{
				printf("%d", number);
			}
			else
			{
				printf("%c", (number + 55));
			}
		}
		else
		{
			printToX(number / changeNumber, changeNumber);
			if (number%changeNumber < 10)
			{
				printf("%d", number%changeNumber);
			}
			else
			{
				printf("%c", (number%changeNumber + 55));
			}
		}
	}
	else
		printf("지원하지 않는 진수변환을 입력하셨습니다.\n");

}