#include "Queue.h"

int main()
{
	int random, i;
	srand(time(NULL));
	queue* q = q = calloc(1, sizeof(queue));
	initQ(q); // init queue
	printf("=====enqueue=====\n\n");
	for (i = 0; i < 5; i++)
	{
		random = rand() % 100 + 1;
		enqueue(q, random);
		printqueue(q);
	}

	printf("\n\n=====dequeue=====\n\n");
	for (i = 0; i < 5; i++)
	{
		dequeue(q);
		printqueue(q);
	}
	free(q);
	puts("");
	system("pause");
	return 0;
}