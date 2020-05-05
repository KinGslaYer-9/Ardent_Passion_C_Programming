#include <stdio.h>
#include <math.h>

int main(void)
{
	int num1, powResult;

	scanf_s("%d", &num1);

	powResult = pow(num1, 2);
	printf("%d \n", powResult);
	return 0;
}