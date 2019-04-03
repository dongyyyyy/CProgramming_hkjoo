#include <stdio.h>
#include <time.h>
#include <stdlib.h>

main()
{
	int count = 0, number, guess;
	srand((long)time(NULL)); // 시드값을 설정하여 프로그램을 돌릴 때 마다 임의의 수를 얻기 위한 srand()
	guess = rand() % 100 + 1; // 1에서부터 100개의 정수를 ( 1 ~ 100 ) 임의로 guess에 저장한다.
	printf("1~100까지 중 임의의 수가 정해졌습니다. 해당 수를 7번 안에 맞추시오.\n");
	for (count = 0; count < 7; count++) // 7번만 반복하기 위한 초기화 ; 조건식 ; 증감식
	{
		printf("정수를 입력하시오 : ");
		scanf_s("%d", &number); // 정수를 입력 받는다.
		if (number > guess) // 입력 받은 정수가 임의의 값보다 큰 경우
		{
			printf("정답보다 큰 수를 입력했습니다.\n");
		}
		else if (number < guess) // 입력 받은 정수가 임의의 값보다 작은 경우
		{
			printf("정답보다 작은 수를 입력했습니다.\n");
		}
		else // 정답인 경우
		{
			printf("정답입니다.\n");
			return; // 정답 출력 후 바로 종료
		}
	}
	printf("모든 기회를 쓰셨습니다.\n"); // 정답이 아닐 경우에는 프로그램이 종료되지않고 해당 프린트문까지 출력한다.
	return 0;
}