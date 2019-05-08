#include <stdio.h>

void infunction(void);
void outfunction(void);
int global = 10;
static int sglobal = 20;

int main()
{
	int x = 100;
	
	printf("%d, %d, %d\n", global, sglobal, x);
	infunction(); outfunction();
	infunction(); outfunction();
	infunction(); outfunction();
	printf("%d, %d, %d\n", global, sglobal, x);

	system("pause");
	return 0;

}

void infunction()
{
	auto int fa = 1;
	static int fs;
	printf("%d, %d, %d, %d\n", ++global, ++sglobal, fa++, ++fs);
}