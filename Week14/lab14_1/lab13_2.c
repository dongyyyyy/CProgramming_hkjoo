#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MAX 7

enum card { hearts, diamonds, clubs, spades };
enum number { ace = 1, two, three, four, five, six, seven, eight, nine, teen, jack, queen, king };

char *cardName[20] = { "Hearts","Diamonds","Clubs","Spades" };
char *cardChar[10] = { "♥","◆","♣","♠" };


typedef enum card card;
typedef enum number number;

typedef struct
{
	card card[7];
	number number[7];
}person;



void input();
void randCard(person *, int n);
void printCard(person *p, int n);
int checkStraight(person p);
int checkFlush(person p);
int checkFullhouse(person p);
void sort(person *p);


int main()
{
	input();
	system("pause");
	return 0;
}

void input()
{
	person *p;
	int i;
	int count;
	int *dostraight;
	int *doFlush;
	int *doFullhouse;
	printf("카드 게임에 몇 사람이 참가합니까?? >> ");
	scanf_s("%d", &count);
	getchar();
	p = malloc(sizeof(person)*count);
	dostraight = malloc(sizeof(int)*count);
	doFlush = malloc(sizeof(int)*count);
	doFullhouse = malloc(sizeof(int)*count);
	randCard(p, count);
	printCard(p, count);
	for (i = 0; i < count; i++)
	{
		dostraight[i] = checkStraight(p[i]);
		if (dostraight[i] == 1)
		{
			printf("사람 %d Straight 성공!\n", i + 1);
		}
	}
	for (i = 0; i < count; i++)
	{
		doFlush[i] = checkFlush(p[i]);
		if (doFlush[i] == 1)
		{
			printf("사람 %d Flush 성공!\n", i + 1);
		}
	}
	for (i = 0; i < count; i++)
	{
		doFullhouse[i] = checkFullhouse(p[i]);
		if (doFullhouse[i] == 1)
		{
			printf("사람 %d Fullhouse 성공!\n", i + 1);
		}
	}
	free(dostraight);
	free(doFlush);
	free(doFullhouse);
	free(p);
}

void randCard(person *p, int n)
{
	srand(time(NULL));
	int i = 0, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < MAX; j++)
		{
			p[i].card[j] = rand() % spades + 0;
			p[i].number[j] = rand() % king + ace;
		}
	}
}

void printCard(person *p, int n)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		printf("%15s%d\t", "사람", i + 1);
	}
	puts("");
	for (j = 0; j < MAX; j++)
	{
		for (i = 0; i < n; i++)
		{
			printf("%4d of %4s(%s)\t", p[i].number[j], cardChar[p[i].card[j]], cardName[p[i].card[j]]);
		}
		puts("");
	}
}

int checkStraight(person p) // check Straight
{
	sort(&p);
	int now, count = 0, true = 0;
	int i, j;
	for (i = 0; i < MAX; i++)
	{
		now = p.number[i];
		count = 1;
		for (j = i + 1; j < MAX; j++)
		{
			if (now == p.number[j] - 1)
			{
				count++;
				now = p.number[j];
			}
			else
			{
				break;
			}
			if (count == 5)
			{
				return 1;
			}
		}
	}
	return 0;
}

int checkFlush(person p) // checkFlush
{
	int check[4] = { 0 };
	int i;
	for (i = 0; i < MAX; i++)
	{
		check[p.card[i]]++;
	}
	for (i = 0; i < sizeof(check) / sizeof(int); i++)
	{
		if (check[i] >= 5)
		{
			return 1;
		}
	}
	return 0;
}

int checkFullhouse(person p) // check Fullhouse
{
	int i = 0;
	int check[king + 1] = { 0 };
	int checks[2] = { 0 };
	for (i = 0; i < MAX; i++)
	{
		check[p.number[i]]++;
	}
	for (i = 1; i < sizeof(check) / sizeof(int); i++)
	{
		if (checks[1] == 0 && check[i] >= 3)
		{
			checks[1] = 1;
		}
		else if (checks[1] == 1 && check[i] >= 3)
		{
			checks[0] = 1;
		}
		else if (checks[0] == 0 && check[i] == 2)
		{
			checks[0] = 1;
		}
		if (checks[0] == 1 && checks[1] == 1)
		{
			return 1;
		}
	}
	return 0;
}

void sort(person *p)
{
	int i, j;
	int swapnumber, swapcard;
	for (i = 0; i < MAX; i++)
	{
		for (j = i + 1; j < MAX; j++)
		{
			if (p->number[i] > p->number[j])
			{
				swapcard = p->card[i];
				swapnumber = p->number[i];
				p->card[i] = p->card[j];
				p->number[i] = p->number[j];
				p->card[j] = swapcard;
				p->number[j] = swapnumber;
			}
		}
	}
}