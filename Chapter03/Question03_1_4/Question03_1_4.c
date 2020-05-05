#include <stdio.h>

int main(void)
{
	int num1, num2, remainResult, quotientResult;

	scanf_s("%d %d", &num1, &num2);

	remainResult = num1 % num2;
	quotientResult = num1 / num2;

	printf("%d\n%d\n", quotientResult, remainResult);
	return 0;
}