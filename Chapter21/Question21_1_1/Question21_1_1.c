#include <stdio.h>

int main(void)
{
	int ch;

	ch = getchar();

	// 소문자 -> 대문자
	if (ch >= 97 && ch <= 122)
		ch -= 32;
	// 대문자 -> 소문자
	else if (ch >= 65 && ch <= 90)
		ch += 32;
	else
		puts("대문자 또는 소문자로 변환할 수 없는 문자입니다. \n");

	putchar(ch);
	return 0;
}