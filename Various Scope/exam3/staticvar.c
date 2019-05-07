#include <stdio.h>

void increment(void);

int main()
{
	int count = 0;
	for (; count < 3; count++)
		increment();

	system("pause");
	return 0;

}

void increment()
{
	static int sindex = 1;
	auto int aindex = 1;
	printf("정적 지역변수 sindex : %2d,\t", sindex++);
	printf("자동 지역변수 aindex : %2d\n", aindex++);
}