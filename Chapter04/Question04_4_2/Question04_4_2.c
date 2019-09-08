#include <stdio.h>

int main(void)
{
	int result;

	result = 3 << 3;
	result = result >> 2;

	printf("%d \n", result);
	return 0;
}