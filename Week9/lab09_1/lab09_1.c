#include <stdio.h>

int main()
{
	int ary[] = { 1,2,3,4,5,6,7,8,9,10 };
	int *ptr[10];
	int i;
	for (i = 0; i < 10; i++)
		ptr[i] = &ary[i];

	for (i = 0; i < 10; i++)
		printf("%d ", *(*(ptr + i)));
	printf("\n");
	puts("포인터 배열을 사용하여 모든 원소의 값을 5 증가 후 출력");
	for (i = 0; i < 10; i++) {
		*ptr[i] += 5;
		printf("%d ", *ptr[i]);
	}
	puts("\n배열을 직접 사용하여 모든 원소값을 5 증가 후 출력");
	for (i = 0; i < 10; i++) {
		ary[i] += 5;
		printf("%d ", ary[i]);
	}
}