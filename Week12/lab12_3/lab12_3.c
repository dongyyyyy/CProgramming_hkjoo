#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void input();
void inputString(char* str);
void reverseToken(char * str);
main()
{
	input();
	system("pause");
}

void input()
{
	char s[1000];
	inputString(s);
	reverseToken(s);
}

void inputString(char *str)
{
	printf("�� ���� ������ �Է��ϼ���. ->\n");
	gets(str);
}

void reverseToken(char *str)
{
	printf("\n�Է��� ������ �ܾ �ݴ�� ����մϴ�. ->\n");
	int i;
	char *delimiter = " ,!.\t";
	char *ptoken;

	ptoken = strtok(str, delimiter);
	while (ptoken != NULL)
	{
		for (i = strlen(ptoken) - 1; i >= 0; i--)
		{
			putchar(ptoken[i]);
		}
		printf(" ");
		ptoken = strtok(NULL, delimiter);
	}
	puts("");
}