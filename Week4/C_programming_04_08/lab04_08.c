#include <stdio.h>
#include <math.h>
//8번 문제
int main()
{
	int i, j, check, size;
	while (1)
	{
		printf("원하는 값을 입력하시오 : 삼각형(1) , 역삼각형(2) , 사다리꼴(3) ,  종료(0) : ");
		scanf_s("%d", &check);
		if (check == 0)
		{
			printf("프로그램을 종료합니다.\n");
			break;
		}
		else if (check == 1 || check == 2 || check == 3)
		{
			printf("삼각형의 크기를 입력하세요 : ");
			scanf_s("%d", &size);
			switch (check) {
			case 1:
				for (i = 0; i <= size; i++)
				{
					for (j = -size; j <= size; j++)
					{
						if (i >= abs(j))
							printf("*");
						else
							printf(" ");

					}
					puts("");
				}
				break;
			case 2:
				for (i = size; i >= 0; i--)
				{
					for (j = -size; j <= size; j++)
					{
						if (i >= abs(j))
							printf("*");
						else
							printf(" ");

					}
					puts("");
				}
				break;
			case 3:
				for (i = size / 2; i <= size; i++)
				{
					for (j = -size; j <= size; j++)
					{
						if (i >= abs(j))
							printf("*");
						else
							printf(" ");

					}
					puts("");
				}
				break;
			default:
				break;
			}
		}
		else
		{
			printf("잘못된 수를 입력하셨습니다.\n");
		}

	}
	return 0;
}