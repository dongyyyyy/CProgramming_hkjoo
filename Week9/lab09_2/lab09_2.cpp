#include <stdio.h>

int main()
{
	int a;
	int *p;
	p = &a;
	printf("*p의 값을 입력하시오 : ");
	scanf_s("%d", p);
	printf("*p = %d / a = %d\n", *p, a);

	printf("a의 값을 입력하시오 : ");
	scanf_s("%d", &a);
	printf("*p = %d / a = %d\n", *p, a);

}