
#include <stdio.h>

int main(void)
{
	int inputNum, count = 0;
	int binary[8];

	printf("10���� ���� �Է�: ");
	scanf_s("%d", &inputNum);

	while (inputNum > 0)
	{
		binary[count++] = inputNum % 2;
		inputNum /= 2;
	}

	while (count > 0)
	{
		printf("%d", binary[--count]);
	}

	return 0;
}