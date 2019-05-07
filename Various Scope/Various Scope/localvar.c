#include <stdio.h>

int main()
{
	int m = 5;
	int n = 10;

	printf("%d %d\n", m, n);
	for (m = 0; m < 3; m++)
	{
		auto int sum = 0;
		sum += m;
		printf("%d %d\n", m, sum);
	}
	//printf("%d %d\n",m,sum); // 주석 지운 후 실행해 보기

	system("pause");
	return 0;
}