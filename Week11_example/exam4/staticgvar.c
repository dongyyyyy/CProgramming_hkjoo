#include <stdio.h>

static int svar ;
void increment();

int main()
{
	int count = 1;
	for (; count <= 5; count++)
		increment();

	printf("함수 increment()가 총 %d번 호출되었습니다.\n", svar);
	system("pause");
	return 0;
}

void increment()
{
	svar++;
}