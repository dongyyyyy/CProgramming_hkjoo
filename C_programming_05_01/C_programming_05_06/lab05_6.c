#include <stdio.h>

int GCD(int, int);

int main()
{
	int n1, n2;
	printf("두개의 정수를 입력하시오 : ");
	scanf_s("%d%d", &n1, &n2);
	printf("두 수의 최대공약수 = %d\n", GCD(n1, n2));
}

int GCD(int n1, int n2) // 최대 공약수 함수
{
	if (n2 == 0)
	{
		return n1; // 최대 공약수를 찾았기에 최대공약수 값을 리턴
	}
	return GCD(n2, n1%n2); // n2==0이 아닌 경우 해당 매개변수를 통해 재귀 호출
}