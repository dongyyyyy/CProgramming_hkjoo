#include <stdio.h>
#include <math.h>
float pita(int, int);

int main()
{
	int a, b;
	printf("밑변 , 높이 값을 입력하시오 : ");
	scanf_s("%d %d", &a, &b);
	printf("c의 값 : %.2f", pita(a, b));
	return 0;
}

float pita(int a, int b) // 대각선의 값은 피타고라스의 정리를 통하여 C^2 = A^2 + B^2임을 성립
{
	return sqrt(pow(a, 2) + pow(b, 2)); // 대각선 (C)값은 A^2 + B^2값의 제곱근을 통하여 구할 수 있다.
}