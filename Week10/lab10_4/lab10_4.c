#include <stdio.h>

void arraymerge(int *a, int an, int *b, int bn, int *c);
void pointArrayarraymerge(int *a[11], int an, int *b, int bn, int *c);

int main()
{
	int an, bn;
	int a[] = { 1,2,5,7,9,14 };
	int b[] = { 2,3,6,8,13 };
	int *c[11], i;
	int *d;
	an = sizeof(a) / sizeof(int);
	bn = sizeof(b) / sizeof(int);
	d = (int *)malloc(sizeof(int)*(an + bn));
	printf("int a[] = {");
	for (i = 0; i < an; i++)
		printf("%d%s", a[i], i == an - 1 ? "}\n" : ", ");
	printf("int b[] = {");

	for (i = 0; i < bn; i++)
		printf("%d%s", *(b + i), i == bn - 1 ? "}\n" : ", ");

	pointArrayarraymerge(a, an, b, bn, c);
	printf("%30s", "포인터배열 int c[] = {");
	for (i = 0; i < an + bn; i++)
		printf("%d%s", *(c[i]), i == (an + bn) - 1 ? "}\n" : ", ");

	arraymerge(a, an, b, bn, d);

	printf("%30s", "동적할당 포인터 int c[] = {");
	for (i = 0; i < an + bn; i++)
		printf("%d%s", *(d + i), i == (an + bn) - 1 ? "}\n" : ", ");
	system("pause");
	return 0;
}

/*동적할당한 배열에 대해서 문제해결 (아직 배우지 않음) */
void arraymerge(int *a, int an, int *b, int bn, int *c)
{
	int i, num1 = 0, num2 = 0;
	for (i = 0; i < an + bn; i++)
	{
		if (num1 == an)
		{
			c[i] = b[num2++];
		}
		else if (num2 == bn)
		{
			c[i] = a[num1++];
		}
		else {
			if (a[num1] < b[num2])
			{
				c[i] = a[num1++];
			}
			else
			{
				c[i] = b[num2++];
			}
		}
	}
}

/*포인터배열을 사용하여 해당 문제 해결*/
void pointArrayarraymerge(int *a[11], int an, int *b, int bn, int *c)
{
	int i, num1 = 0, num2 = 0;
	for (i = 0; i < an + bn; i++)
	{
		if (num1 == an)
		{
			c[i] = &b[num2++];
		}
		else if (num2 == bn)
		{
			c[i] = &a[num1++];
		}
		else {
			if (a[num1] < b[num2])
			{
				c[i] = &a[num1++];
			}
			else
			{
				c[i] = &b[num2++];
			}
		}
	}
}