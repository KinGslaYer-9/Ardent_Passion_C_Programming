#include <stdio.h>

int main(void)
{
	int inputCount = 0;

	scanf_s("%d", &inputCount);

	int i = 1;
	while (i <= inputCount)
	{
		printf("%d ", i * 3);
		i++;
	}
	return 0;
}