#include <stdio.h>

int main(void)
{
	int inputNum, result = 1;

	scanf_s("%d", &inputNum);

	for (int i = 1; i <= inputNum; i++)
		result *= i;

	printf("%d! = %d \n", inputNum, result);
	return 0;
}