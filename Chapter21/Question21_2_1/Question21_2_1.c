#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	int ch, sum = 0;

	while (1)
	{
		ch = getchar();
		if (ch == '\n')
			break;

		if (ch >= 48 && ch <= 57)
			sum += ch - 48;
	}

	printf("���ڿ� ���� �����ϴ� ������ ��: %d \n", sum);
	return 0;
}