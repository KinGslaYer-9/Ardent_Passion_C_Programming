#include <stdio.h>

int main(void)
{
	int num, result;

	scanf_s("%d", &num);

	result = ~num + 1;

	printf("%d \n", result);
	return 0;
}