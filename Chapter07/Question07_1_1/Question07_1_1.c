#include <stdio.h>

int main(void)
{
	int inputCount = 0;

	scanf_s("%d", &inputCount);

	int i = 0;
	while (i < inputCount)
	{
		printf("Hello world! \n");
		i++;
	}
	return 0;
}