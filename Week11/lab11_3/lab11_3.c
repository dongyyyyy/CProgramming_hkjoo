#include <stdio.h>

void input();

void copyarray(double *, double *, int);
void printarray(double *, int);
int main()
{
	input();

	system("pause");
	return 0;
}

void input()
{
	double ary[5] = { 3.12 , 5.14 , 7.25 , 7.48 , 5.91 };
	double target[5];
	int size = sizeof(ary) / sizeof(ary[0]);
	copyarray(ary, target, size);
	printf("복사할 배열 : ");
	printarray(ary, size);
	puts("");
	printf("복사된 배열 : ");
	printarray(target, size);
	puts("");
}

void copyarray(double *source, double *target, int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		*(target + i) = source[i];
	}
}

void printarray(double *ary, int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("%s%.2lf%s", i == 0 ? "{" : ", ", ary[i], i == size - 1 ? "}" : "");
	}
}