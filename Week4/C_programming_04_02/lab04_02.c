#include <stdio.h>
//2번문제
main()
{
	int n, sum = 0;
	//while문 조건안에 scanf_s()를 사용해도 무관.
	while (1)//무한 반복
	{
		printf("정수n을 입력하시오 : ");
		scanf_s("%d", &n);
		if (n != -1) // -1이 입력되었을 때 종료
			sum += n;
		else
			break;

	}
	printf("SUM = %d", sum);
}