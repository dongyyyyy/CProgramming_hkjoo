#include <stdio.h>
//2번문제
#define PI 3.14
int main()
{
	float radius;
	float area;
	float round;
	// 변수 3개 반지름 , 면적, 둘레 선언
	printf("반지름을 입력하시오 : ");
	scanf_s("%f", &radius, 1);//반지름값 표준입력

	// 계산한 값을 각 변수에 저장
	area = radius * radius * PI;
	round = 2 * PI * radius;

	//변수에 저장된 값을 출력
	printf("원의 면적 : %f\n", area);
	printf("원의 둘레 : %f\n", round);

	return 0;
}
