#include <stdio.h>

int main(void)
{
	int num1, num2, num3, result;

	scanf_s("%d %d %d", &num1, &num2, &num3);

	result = (num1 - num2) * (num2 + num3) * (num3 % num1);

	printf("(%d-%d)x(%d+%d)x(%d%%%d)=%d \n", num1, num2, num2, num3, num3, num1, result);
}