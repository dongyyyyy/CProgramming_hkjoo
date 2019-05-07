#include <stdio.h>

void outfunction()
{
	extern int global, sglobal;
	printf("%d\n", ++global);
	//printf("%d\n", ++sglobal); //error 
}