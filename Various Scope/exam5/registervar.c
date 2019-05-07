#include <stdio.h>

int main()
{
	register int count;
	for (count = 1; count <= 100; count++);
		//scanf_s("%d",&count); // error register변수는 주소를 사용할 수 없음.
		//printf("%u",&count); // error register변수는 주소를 사용할 수 없음.
	printf("%d\n", count);
	system("pause");
	return 0;
}