#include <stdio.h>

int main(void)
{
	int inputNum1, inputNum2, sum = 0;

	scanf_s("%d %d", &inputNum1, &inputNum2);

	for (int i = inputNum1; i <= inputNum2; i++)
		sum += i;

	printf("ÇÕ°è: %d \n", sum);
	return 0;
}