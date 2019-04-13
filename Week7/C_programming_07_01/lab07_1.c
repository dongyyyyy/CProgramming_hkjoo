#include <stdio.h>

void inputData(int data[][5], int, int);
void printArray(int[][5], int, int);
void findAvgTop(int[][5], int, int);
void findMaxSub(int[][5], int, int);

int main()
{
	int i, j, data[3][5], colsize, rowsize;
	rowsize = sizeof(data) / sizeof(data[0]), colsize = sizeof(data[0]) / sizeof(data[0][0]); // 콤마 연산자
	/* 사용할 함수 호출 */
	inputData(data, rowsize, colsize);
	printArray(data, rowsize, colsize);
	findAvgTop(data, rowsize, colsize);
	findMaxSub(data, rowsize, colsize);
}
/*사용자 입력을 하는 함수*/
void inputData(int data[][5], int rowsize, int colsize)
{
	int i, j;
	printf("총 3명의 학생의 국,영,수,과,사 성적입력\n");
	for (i = 0; i < rowsize; i++)
	{
		printf("==%d번 학생 성적 입력==\n", i + 1);
		for (j = 0; j < colsize; j++)
		{
			printf(j == 0 ? "국어 = " : j == 1 ? " 수학 = " : j == 2 ? " 영어 = " : j == 3 ? " 과학 = " : j == 4 ? " 사회 = " : "");
			scanf_s("%d", &data[i][j]);
		}
	}
}
/* 배열을 출력하는 함수 */
void printArray(int data[][5], int rowsize, int colsize)
{
	int i, j;
	for (i = 0; i < rowsize; i++)
	{
		printf("%d번 학생 점수 : ", i + 1);
		for (j = 0; j < colsize; j++)
		{
			printf(j == 0 ? "국어 = " : j == 1 ? " 수학 = " : j == 2 ? " 영어 = " : j == 3 ? " 과학 = " : j == 4 ? " 사회 = " : "");
			printf("%d", data[i][j]);
		}
		puts("");
	}
}
/* 평균값중 가장 큰 학생을 찾는 함수 */
void findAvgTop(int data[][5], int rowsize, int colsize)
{
	int i, j, z;
	double max = 0;
	double avg[] = { 0.0,0.0,0.0 };
	for (i = 0; i < rowsize; i++)
	{
		for (j = 0; j < colsize; j++)
		{
			avg[i] += (double)data[i][j];
		}
		avg[i] /= colsize;
	}
	for (i = 0; i < 3; i++)
	{
		if (avg[i] > max)
		{
			max = avg[i];
			z = i + 1;
		}
	}

	printf("제일 좋은 평균 성적을 얻은 %d번 학생의 평균 점수 = %lf\n", z, max);
}

/* 각각의 과목에서 가장 높은 점수를 받은 학생의 번호와 점수를 찾는 함수 */
void findMaxSub(int data[][5], int rowsize, int colsize)
{
	int i, j;
	int max[] = { 0,0,0,0,0 }; // 최대 점수를 저장하는 배열
	int count[5]; // 최대 점수를 얻는 학생의 번호를 저장하는 배열
	for (j = 0; j < colsize; j++)
	{
		for (i = 0; i < rowsize; i++)
		{
			if (data[i][j] > max[j]) {
				max[j] = data[i][j];
				count[j] = i + 1;
			}
		}
	}
	for (j = 0; j < colsize; j++)
	{
		printf(j == 0 ? "국어 : " : j == 1 ? "수학 : " : j == 2 ? "영어 : " : j == 3 ? "과학 : " : j == 4 ? "사회 : " : ""); //위의 switch문과 같이 if문 혹은 switch문으로도 사용 가능!
		printf("%d번 학생의 점수 = %d\n", count[j], max[j]);
	}
}