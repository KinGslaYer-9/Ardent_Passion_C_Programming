#include <stdio.h>

int main(void)
{
	int inputNum;

	scanf_s("%d", &inputNum);

	int i = 9;
	while (i > 0)
	{
		printf("%d x %d = %d \n", inputNum, i, inputNum * i);
		i--;
	}
	return 0;
}