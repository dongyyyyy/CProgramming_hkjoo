#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
typedef struct node
{
	int data;
	struct node* next;
}node;

typedef struct queue {
	node* front;
	node* back;
}queue;


void initQ(queue* q); // 큐 초기화
void enqueue(queue* q, int n); // 큐 추가
int dequeue(queue* q); // 큐 제거
void printqueue(queue* q);  // 큐 출력
