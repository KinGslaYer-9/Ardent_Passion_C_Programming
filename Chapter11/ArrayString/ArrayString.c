#include <stdio.h>

int main(void)
{
	char str[] = "Good morning!";
	printf("�迭 str�� ũ��: %d \n", sizeof(str));
	printf("�� ���� ������ ���: %c \n", str[13]);
	printf("�� ���� ������ ���: %d \n", str[13]);

	str[12] = '?';		// �迭 str�� ����� ���ڿ� �����ʹ� ���� ����!
	printf("���ڿ� ���: %s \n", str);

	char nu = '\0';		// �� ���� ����
	char sp = ' ';		// ���� ���� ����
	printf("%d %d", nu, sp);	// 0�� 32 ���
	return 0;
}