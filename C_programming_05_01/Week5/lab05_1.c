#include <stdio.h>

float inchToCm(float);

int main()
{
	float i;
	printf("inch값을 입력하시오 : ");
	scanf_s("%f", &i); // 표준 입력
	printf("%.2f(inch) = %.2f(cm)", i, inchToCm(i)); // 소수점 2번째 까지만 출력하기 위해서 %.2f를 사용.
}

float inchToCm(float i) // 계산하는 함수
{
	return i * 2.54;
}