#include <stdio.h>

#define SIZE 6

void checkAverage();
void sortScore();
void print();
void checkGrade();

int count = 0;
int score[100]; // 함수를 반환하지 못하기 때문에 (포인터공부 이후 가능)
				// 만약 함수를 전역변수로 사용하지 않고 메인에서 정의 후 이용한다면
				// 리턴값을 배열로 하지 않는 선에서 함수의 매개변수로 배열을 전달하여 사용가능
				// 그렇다면 배열을 입력받는 부분을 함수로 빼지 않고 main문 안에서 실행해야함

void main(void) {

	int size, i;

	checkAverage();
	printf("\t%s\n", "정렬 전");
	print();
	sortScore();
	printf("\t%s\n", "내림차순 정렬 후");
	print();
	checkGrade();
	return 0;

}

//평균 확인 함수
void checkAverage()
{
	int i, num = 0;
	float avg = 0.0;
	for (count = 0; ; count++)
	{
		printf("값을 입력하시오 : (음수 입력시 종료) ");
		scanf_s("%d", &num);
		if (num >= 0)
		{
			score[count] = num;
		}
		else
		{
			printf("입력 종료\n");
			puts("");
			break;
		}
	}
	for (i = 0; i < count; i++)
	{
		printf("%d ", score[i]);
		avg += (float)score[i];
	}
	printf("평균 = %.2f\n", avg / count);
}

//내림차순 정렬 함수
void sortScore()
{
	int max = 0, i, j, tmp;
	for (i = 0; i < count - 1; i++)
	{
		max = 0;
		for (j = i; j < count; j++)
		{
			if (max < score[j])
			{
				max = score[j];
				tmp = j;
			}
		}
		score[tmp] = score[i];
		score[i] = max;
	}
}

//배열 출력 함수
void print()
{
	for (int i = 0; i < count; i++)
	{
		printf(" %d ", score[i]);
	}
	puts("");
}

//등수 확인 함수
void checkGrade()
{
	int num, i, check;
	while (1)
	{
		printf("등수를 확인하고 싶은 점수를 입력하시오 : (음수 입력시 종료) ");
		scanf_s("%d", &num);
		if (num >= 0)
		{
			check = 0;
			for (i = 0; i < count; i++)
			{
				if (num == score[i])
				{
					printf("%d의 등수 = %d등\n", score[i], i + 1);
					break;
				}
				else
				{
					check++;
				}
			}
			if (check == count)
			{
				printf("기록된 점수가 아닙니다.\n");
			}
		}
		else
		{
			printf("확인 종료\n");
			puts("");
			break;
		}
	}
}