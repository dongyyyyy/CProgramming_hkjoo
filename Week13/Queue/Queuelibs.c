#include "Queue.h"

void initQ(queue* q) // 큐 초기화
{
	q->front = NULL;
	q->back = NULL;
}
void enqueue(queue* q, int n)
{
	node* new = calloc(1, sizeof(node));
	new->data = n;
	new->next = NULL;
	if (q->front == NULL) // empty
	{
		q->front = new;
		q->back = new;
	}
	else
	{
		q->back->next = new;
		q->back = new;
	}
}
int dequeue(queue* q)
{
	if (q->front == NULL && q->back == NULL)
	{
		printf("Can't dequeue\n");
		return -1;
	}
	else if (q->front == q->back)
	{
		q->front = NULL;
		q->back = NULL;
		return 0;
	}
	else
	{
		q->front = q->front->next;
	}
}

void printqueue(queue* q)
{
	printf("====Queue 출력====\n");
	node* cur = q->front;
	if (cur == NULL)
	{
		printf("This queue is Empty!\n");
		return;
	}
	while (cur != NULL)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	puts("");
	free(cur);
}