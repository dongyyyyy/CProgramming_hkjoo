#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct {
	int studentNumber; // 학번
	char *name; // 이름 
	char *tel; // 전화번호
	char *address; // 주소 
}person;

void input();
//void inputPerson(person*);
person inputPerson();
void printPerson(person);

int main()
{
	input();
	system("pause");
	return 0;
}

void input()
{
	person person;
	//memset(&person,0,sizeof(person));
	person = inputPerson();
	// inputperson(&person);
	printPerson(person);
}

//void inputPerson(person* person)
person inputPerson()
{
	int n;
	char *ch;
	person person;
	ch = malloc(sizeof(char) * 512);
	printf("학번을 입력하시오 : ");
	scanf_s("%d", &n);
	person.studentNumber = n;
	getchar();
	printf("이름을 입력하시오 : ");
	gets_s(ch, sizeof(char) * 512);
	person.name = (char *)malloc(sizeof(char)*strlen(ch));
	strcpy(person.name, ch);
	printf("전화번호를 입력하시오 : ");
	gets_s(ch, sizeof(char) * 512);
	person.tel = (char *)malloc(sizeof(char)*strlen(ch));
	strcpy(person.tel, ch);
	printf("주소를 입력하시오 : ");
	gets_s(ch, sizeof(char) * 512);
	person.address = (char *)malloc(sizeof(char)*strlen(ch));
	strcpy(person.address, ch);
	return person;
}

void printPerson(person person)
{
	printf("\n===================구조체 출력===================\n");
	printf("%10s = %d\n", "학번", person.studentNumber);
	printf("%10s = %s\n", "이름", person.name);
	printf("%10s = %s\n", "전화번호", person.tel);
	printf("%10s = %s\n", "주소", person.address);
}