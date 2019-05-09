#include <stdio.h>

int main()
{
	int arr[][5] = { 1,2,3,4,5,6,7,8,9,10 };
	int(*ptr)[5] = arr;
	int row = sizeof(arr) / sizeof(arr[0]);
	int col = sizeof(arr[0]) / sizeof(arr[0][0]);
	int i,j;
	printf("arr배열 출력\n");
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("%d ", arr[i][j]);
		}
		puts("");
	}
	puts("배열 포인터만을 사용하여 모든 원소의 값을 5 증가 후 출력");
	puts("포인터만 사용하여 출력");
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++)
		{
			*(*(ptr + i) + j) += 5;
			printf("%d ", *(*(ptr + i) + j));
		}
		puts("");
	}
	puts("인덱스만을 사용하여 출력");
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++)
		{
			printf("%d ", ptr[i][j]);
		}
		puts("");
	}
	puts("포인터와 인덱스를 같이 사용하여 출력");
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++)
		{
			printf("%d ", *(ptr[i]+j));
		}
		puts("");
	}

	system("pause");
	return 0;
}