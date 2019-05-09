#include <stdio.h>
#define ROW 2
#define COL 3

void addMatrix(double(*result)[3], double(*ary1)[3], double(*ary2)[3], int, int);
void subtractMatrix(double(*result)[3], double(*ary1)[3], double(*ary2)[2], int, int);

int main()
{
	int i, j, z;
	int row = 2;
	int col = 3;
	double ary1[][3] = { {4.2,4.3,3.8},{3.7,1.5,0.7} };
	double ary2[][3] = { {5.2,2.1,1.8},{3.7,1.5,0.7 } };
	double result[2][3];
	void(*fpary[2])(double(*result)[3], double(*ary1)[3], double(*ary2)[3], int, int) = { addMatrix , subtractMatrix };

	for (z = 0; z < 2; z++)
	{
		fpary[z](result, ary1, ary2, row, col);
		if (z == 0)
		{
			printf("행렬 합\n");
		}
		else
		{
			printf("행렬 차\n");
		}
		for (i = 0; i < row; i++)
		{
			for (j = 0; j < col; j++)
			{
				printf("%5.2lf ", *(*(result + i) + j));
			}
			puts("");
		}
	}
	system("pause");
	return 0;
}


void addMatrix(double(*result)[3], double(*ary1)[3], double(*ary2)[3], int row, int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			*(*(result + i) + j) = *(ary1[i] + j) + ary2[i][j];
		}
	}
}


void subtractMatrix(double(*result)[3], double(*ary1)[3], double(*ary2)[3], int row, int col)
{
	int i, j;

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			*(*(result + i) + j) = *(ary1[i] + j) - ary2[i][j];
		}
	}
}
