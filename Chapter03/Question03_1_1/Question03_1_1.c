#include <stdio.h>

int main(void)
{
	int num1, num2, subResult, mulResult;

	scanf_s("%d %d", &num1, &num2);
	subResult = num1 - num2;
	mulResult = num1 * num2;

	printf("%d - %d = %d \n", num1, num2, subResult);
	printf("%d * %d = %d \n", num1, num2, mulResult);
	return 0;
}