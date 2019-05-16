#include <stdio.h>

void input();
void pascaltriangle(int(*p)[10], int size);
void triangleprint(int(*p)[10], int size);
int main()
{
	input();

	system("pause");
	return 0;
}

void input()
{
	int i, j;
	int p[10][10] = { 0 };
	int size = sizeof(p) / sizeof(p[0]);
	void(*fpary[2])(int(*p)[10], int size) = { pascaltriangle,triangleprint };

	for (i = 0; i < 2; i++)
		fpary[i](p, 10);
}


void pascaltriangle(int(*p)[10], int size)
{
	int i, j;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j || j == 0)
			{
				p[i][j] = 1;
			}
			else
			{
				p[i][j] = p[i - 1][j - 1] + p[i - 1][j];
			}
		}
	}
}


void triangleprint(int(*p)[10], int size)
{
	int i, j;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%d ", *(*(p + i) + j));
		}
		puts("");
	}
}