#include <stdio.h>

int main(void)
{
	int n, k = 0;

	printf("��� n�Է�: ");
	scanf_s("%d", &n);

	while (1)
	{ 
		if (2 << k >= n)
		{
			printf("������ �����ϴ� k�� �ִ��� %d \n", k + 1);
			break;
		}
		k++;
	}
}