#include <stdio.h>

double getArea(double);
double getCircum(double);

double PI = 3.14;
int gi;

int main()
{
	double r = 2;

	const double PI = 3.141592;
	gi = 10;

	printf("%8s %.6f\n", "면적 :", getArea(r));
	printf("%8s %.6f\n", "둘레1 :",getCircum(r));
	printf("%8s %.6f\n", "둘레2 :", getCircum(r));
	printf("%8s %.6f\n", "PI :",PI);
	printf("%8s %d\n", "gi :",gi);

	system("pause");
	return 0;

}

double getArea(double r)
{
	return r * r * PI;
}

double getCircum(double r)
{
	return 2 * r * PI;
}