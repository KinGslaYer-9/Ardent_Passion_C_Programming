#include <stdio.h>

int main(void)
{
	char str[100];
	int size = 0;

	scanf_s("%s", str, sizeof(str));

	while (str[size] != 0)
		size++;

	printf("�Է��� �ܾ��� ����: %d \n", size);
	return 0;
}