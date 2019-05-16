#include <stdio.h>

void input();
double add(double num1, double num2);
double subtract(double num1, double num2);
double multi(double num1, double num2);
double divide(double num1, double num2);

int main()
{
	input();
	system("pause");
	return 0;
}

void input()
{
	int input;
	double num1, num2, result;
	double(*fpary[4])(double, double) = { add , subtract, multi, divide };
	printf("사칙연산을 위하여 각 연산에 대한 번호를 입력하시오. >> \n");
	while (1)
	{
		printf("[더하기] : 0, [빼기] : 1, [곱하기] : 2, [나누기] : 3 , [종료] : -1 >> ");
		scanf_s("%d", &input);
		if (input == -1)
		{
			printf("프로그램 종료\n");
			break;
		}
		if (input >= 0 && input <= 3) {
			printf("사칙연산을 수행할 실수 2개를 입력하시오. >> ");
			scanf_s("%lf %lf", &num1, &num2);
			result = fpary[input](num1, num2);

			printf("%s 수행 : %.2lf %s %.2lf == %.2lf\n", input == 0 ? "더하기" : input == 1 ? "빼기" : input == 2 ? "곱하기" : "나누기", num1, input == 0 ? "+" : input == 1 ? "-" : input == 2 ? "*" : "/", num2, result);
		}
		else
		{
			printf("정해지지않은 수가 입력되었습니다.\n");
		}
	}


}

double add(double num1, double num2)
{
	return num1 + num2;
}

double subtract(double num1, double num2)
{
	return num1 - num2;
}

double multi(double num1, double num2)
{
	return num1 * num2;
}

double divide(double num1, double num2)
{
	return num1 / num2;
}