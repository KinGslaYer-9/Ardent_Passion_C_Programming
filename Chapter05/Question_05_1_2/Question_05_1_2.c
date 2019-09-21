#include <stdio.h>

int main(void)
{
	double num1, num2, resultAdd, resultSub, resultMul, resultDiv;

	scanf_s("%lf %lf", &num1, &num2);

	resultAdd = num1 + num2;
	resultSub = num1 - num2;
	resultMul = num1 * num2;
	resultDiv = num1 / num2;

	printf("%lf \n", resultAdd);
	printf("%lf \n", resultSub);
	printf("%lf \n", resultMul);
	printf("%lf \n", resultDiv);
	return 0;
}