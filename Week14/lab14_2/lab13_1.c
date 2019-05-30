#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX 3

typedef struct
{
	char name[20];
	char tel[20];
	char address[100];
}person;

typedef struct
{
	person person;
	char school_num[40];
	float avg;
	char major[40];
	char going[100];
}student;

typedef struct
{
	person person;
	char major[40];
	char mine[40];
	char subject[40];
}professor;

void input();
void inputStudent(student *st, int i);;
void inputProfessor(professor *professor);
void printStudent(student *studnet);
void printProfessor(professor *professor);

int main()
{
	input();
	system("pause");
	return 0;
}

void input()
{
	student st[3];
	professor pro[3];
	int i;
	printf("==============학생 정보 입력==============\n");
	for (i = 0; i < MAX; i++)
	{
		inputStudent(&st[i], i);
	}
	printf("==============교수 정보 입력==============\n");
	inputProfessor(pro);
	printStudent(st);
	printProfessor(pro);
}
void inputStudent(student *st, int i)
{
	printf("%d%20s", i + 1, "번 학생 이름 입력 : ");
	gets(st->person.name);
	printf("%d%20s", i + 1, "번 학생 전화번호 입력 : ");
	gets(st->person.tel);
	printf("%d%20s", i + 1, "번 학생 주소 입력 : ");
	gets(st->person.address);
	printf("%d%20s", i + 1, "번 학생 학번 입력 : ");
	gets(st->school_num);
	printf("%d%20s", i + 1, "번 학생 평균학점 입력 : ");
	scanf_s("%f", &st->avg);
	getchar();
	printf("%d%20s", i + 1, "번 학생 학과 입력 : ");
	gets(st->major);
	printf("%d%20s", i + 1, "번 학생 진로 입력 : ");
	gets(st->going);
}


void inputProfessor(professor *professor)
{
	int i = 0;
	for (i = 0; i < MAX; i++)
	{
		printf("%d%20s", i + 1, "번 교수 이름 입력 : ");
		gets(professor[i].person.name);
		printf("%d%20s", i + 1, "번 교수 전화번호 입력 : ");
		gets(professor[i].person.tel);
		printf("%d%20s", i + 1, "번 교수 주소 입력 : ");
		gets(professor[i].person.address);
		printf("%d%20s", i + 1, "번 교수 힉과 입력 : ");
		gets(professor[i].major);
		printf("%d%20s", i + 1, "번 교수 담당 입력 : ");
		gets(professor[i].mine);
		printf("%d%20s", i + 1, "번 교수 과목 입력 : ");
		gets(professor[i].subject);
	}
}

void printStudent(student *student)
{
	int i = 0;
	printf("==============학생 정보 출력==============\n");
	printf("%10s %20s %20s %10s %10s %10s %10s\n", "이 름", "전 화 번 호", "주 소", "학 번", "평 균 평 점", "학 과", "진 로");
	for (i = 0; i < MAX; i++)
	{
		printf("%10s %20s %20s %10s %10.2f %10s %10s\n", student[i].person.name, student[i].person.tel, student[i].person.address, student[i].school_num, student[i].avg, student[i].major, student[i].going);
	}
}

void printProfessor(professor *professor)
{
	int i = 0;
	printf("==============교수 정보 출력==============\n");
	printf("%10s %20s %20s %10s %10s %10s\n", "이 름", "전 화 번 호", "주 소", "학 과", "담 당", "과 목");
	for (i = 0; i < MAX; i++)
	{
		printf("%10s %20s %20s %10s  %10s %10s\n", professor[i].person.name, professor[i].person.tel, professor[i].person.address, professor[i].major, professor[i].mine, professor[i].subject);
	}
}