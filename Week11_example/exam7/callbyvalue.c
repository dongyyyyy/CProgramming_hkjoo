#include <stdio.h>

void increase(int, int);

int main()
{
	int amount = 10;
	increase(amount, 20);
	printf("%d\n", amount);

	system("pause");
	return 0;

}

void  increase(int origin, int increment)
{
	origin += increment;
}