#include <stdio.h>

int main(void)
{
	int accumulateValue = 0, input = 1;

	while (input != 0)
	{
		scanf_s("%d", &input);
		accumulateValue += input;
	}

	printf("�հ� ��� : %d \n", accumulateValue);
	return 0;
}