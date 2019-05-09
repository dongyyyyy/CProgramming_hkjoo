#include <stdio.h>
#define ROW 2
#define COL 3

void multiplyMatrix(double(*result)[2], double(*ary1)[3], double(*ary2)[2], int, int);

int main()
{
	int i, j;
	double ary1[][3] = { {4.2,4.3,3.8},{3.7,1.5,0.7} };
	double ary2[][2] = { {5.2,2.1},{3.2,1.4},{1.5,3.6} };
	double result[2][2];

	multiplyMatrix(result, ary1, ary2, ROW, COL);
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < ROW; j++)
		{
			printf("%.2lf ", *(*(result + i) + j));
		}
		puts("");
	}

	system("pause");
	return 0;
}


void multiplyMatrix(double(*result)[2], double(*ary1)[3], double(*ary2)[2], int row, int col)
{
	int i, j, k;

	//3중 for문
	for (i = 0; i < ROW; i++) // 행탐색 -> ary1의 행
	{
		for (j = 0; j < ROW; j++) // 열탐색 -> ary2의 열
		{
			for (k = 0; k < COL; k++) // 계산시 ary1에서는 열 ary2에서는 행
			{
				result[i][j] += ary1[i][k] * ary2[k][j];
			}
		}
	}
	//2중 for문
	//double multi1 = 0, multi2 = 0;
	/*
	for (i = 0; i < row; i++)
	{
		multi1 = 0;
		multi2 = 0;
		for (j = 0; j < col; j++)
		{
			multi1 += ary1[i][j] * ary2[j][0];
			multi2 += ary1[i][j] * ary2[j][1];
		}
		result[i][0] = multi1;
		result[i][1] = multi2;
	}
	*/

}
