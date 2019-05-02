#include <stdio.h>

void pointerExam();

int main()
{
	pointerExam();
	return 0;
}

void pointerExam()
{
	int ary[16]= { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16 };
	//int ary[][4] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16 };
	int *ptr[16];
	//int *ptr[4][4]; // 주소를 담는 배열
	//int(*ptrs)[4] = ary;
	//int(*ptrs)[4]; // 배열을 가리키는 포인터
	int i, j, num, row, col;
	for(i = 0 ; i < sizeof(ary)/sizeof(ary[0]) ; i++)
	{
		ptr[i] = &ary[i];
	}
	/*
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			ptr[i][j] = &ary[i][j];
			ptrs[i][j] = &ary[i][j]; //error
		}
	}
	*/
	printf("변경 전 *ptr[16]의 값\n");
	for (i = 0; i < sizeof(ary) / sizeof(ary[0]); i++)
	{
		printf("%d ", *(*(ptr + i)));
	}
	/*
	printf("변경 전 *ptr[4][4]의 값\n");

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++)
			printf("%d ", *(*(*(ptr + i) + j)));
		printf("\n");
	}
	*/

	/*
	printf("변경 전 (*ptrs)[4]의 값\n");

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++)
			printf("%d ", *(*(ptrs + i) + j)); // ptrs[i][j] // *(ptrs[i]+j);
		printf("\n");
	}
	*/

	puts("");

	while (1)
	{
		
		printf("변경할 인덱스의 값을 입력하시오 : (0 ~ 15)(-1 = 종료): ");
		scanf_s("%d", &row);
		if (row == -1)
		{
			break;
		}
		/*
		printf("col값을 입력하시오 (0 ~ 3사이)(-1 = 종료): ");
		scanf_s("%d", &col);
		if (col == -1)
		{
			break;
		}
		if ((row >= 0 && row <= 3) && (col >= 0 && col <= 3))
		{
			printf("ary[%d][%d]의 값을 입력하시오 : ", row, col);
			scanf_s("%d", &num);
			ary[row][col] = num;
		}
		*/
		if(row >=0 && row <=15)
		{
			printf("ptr[%d]의 값을 입력하시오 : ", row);
			scanf_s("%d", ptr[row]);
		}
		else
		{
			printf("확인할 수 있는 인덱스값을 초과 혹은 미만입니다\n");
		}
	}
	puts("");
	printf("변경 후 *ptr[16]의 값\n");
	for (i = 0; i < sizeof(ary) / sizeof(ary[0]); i++)
	{
		printf("%d ", *(*(ptr + i)));
	}
	puts("");
	printf("변경 후 ary[16]의 값\n");
	for (i = 0; i < sizeof(ary) / sizeof(ary[0]); i++)
	{
		printf("%d ", ary[i]);
	}

	/*
	printf("변경 후 *ptr[4][4]의 값\n");

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++)
			//printf("%d ", *(*(*(ptr + i) + j)));
		printf("\n");
	}

	printf("변경 후 (*ptrs)[4]의 값\n");

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++)
			//printf("%d ", *(*(ptrs + i) + j)); // ptrs[i][j] // *(ptrs[i]+j);
		printf("\n");
	}
	*/
}

