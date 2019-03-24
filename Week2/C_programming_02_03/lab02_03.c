#include <stdio.h>
//3번문제
int main()
{
	char ch; // 변수 선언
	printf("문자를 입력하세요 : ");
	scanf_s("%c", &ch); // char타입 변수 입력

	printf("문자 : %c , 8진수 코드값 : %o , 10진수 코드값 : %d , 16진수 코드값 : %x", ch, ch, ch, ch);
	//입력 문자에 대한 char형 / 8진수(0) / 10진수 / 16진수(0x) 값 출력
	return 0;
}
