#include <stdio.h>

int main(void)
{
	int inputNum1, inputNum2, result;

	scanf_s("%d %d", &inputNum1, &inputNum2);

	if (inputNum1 > inputNum2)
		result = inputNum1 - inputNum2;
	else
		result = inputNum2 - inputNum1;

	printf("두 수의 차 결과 : %d \n", result);
	return 0;
}