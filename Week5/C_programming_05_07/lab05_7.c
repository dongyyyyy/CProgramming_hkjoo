#include <stdio.h>

void writeBinary(int);

int main()
{
	int n;
	printf("십진수 값을 입력하시오 : ");
	scanf_s("%d", &n);
	printf("십진수 -> 2진수 : ");
	writeBinary(n);
	puts("");
}

void writeBinary(int n) // 이진수 값을 출력하기 위한 재귀 함수
{
	if (n <= 1) // simplest case
	{
		printf("%d", n); // 0 또는 1을 출력함
	}
	else // 그외의 경우에는 나머지한 몫의 값을 매개변수로 재귀 호출
	{
		writeBinary(n / 2);
		printf("%d", n % 2); // 맨처음의 나머지 값이 가장 마지막에 나오기 때문에 재귀호출 이후 나머지값을 출력
	}

}