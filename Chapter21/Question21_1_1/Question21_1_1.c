#include <stdio.h>

int main(void)
{
	int ch;

	ch = getchar();

	// �ҹ��� -> �빮��
	if (ch >= 97 && ch <= 122)
		ch -= 32;
	// �빮�� -> �ҹ���
	else if (ch >= 65 && ch <= 90)
		ch += 32;
	else
		puts("�빮�� �Ǵ� �ҹ��ڷ� ��ȯ�� �� ���� �����Դϴ�. \n");

	putchar(ch);
	return 0;
}