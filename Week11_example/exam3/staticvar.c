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
	printf("���� �������� sindex : %2d,\t", sindex++);
	printf("�ڵ� �������� aindex : %2d\n", aindex++);
}