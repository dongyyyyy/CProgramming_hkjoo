#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void Start();
void inputString(char (*str)[100],int *);
void printString(char (*str)[100]);
void checkToken(char (*str)[100],int);
int main()
{

	Start();
	system("pause");
	return 0;
}

void Start()
{
	int size = 0;
	char str[10][100] = { "\0" };
	inputString(str,&size);
	printString(str);
	checkToken(str, size);
}

void inputString(char (*str)[100], int *size)
{
	int i = 0;
	printf("여러 줄에 원하는 입력하세요.\n입력이 다 되었으면 새로운 줄 처음에 ctrl+Z,그리고 Enter를 입력하세요.\n\n");
	while (gets(str[i++])) 
		(*size)++;
}

void printString(char (*str)[100])
{
	int i = 0;
	printf("<<입력한 문자열>>\n");
	while (1)
	{
		if (str[i][0] != '\0')
			puts(str[i++]);
		else
			break;
	}
}

void checkToken(char (*str)[100],int size)
{
	char *delimiter = " ,.!\t";
	char *ptoken;
	char* next_token;

	int i;

	for(i = 0 ; i < size ; i++){
		printf("<< %d줄에 입력한 단어(토큰) 출력>>\n", i + 1);
		ptoken = strtok(str[i], delimiter);
		// ptoken = strtok_s(next_token,delimiter,&next_token);
		while (ptoken != NULL)
		{
			printf("strlen(%s) = %d\n", ptoken,strlen(ptoken));
			ptoken = strtok(NULL, delimiter);
			//ptoken = strtok_s(NULL,delimiter,&next_token);
			// ptoken = strtok_s(next_token,delimiter,&next_token);
		}
	}
}