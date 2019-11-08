#include <stdio.h>

int SquareByValue(int);
void SquareByReference(int*);

int main(void)
{
	int num = 5, result = 0;

	result = SquareByValue(num);
	printf("결과: %d \n", result);
	SquareByReference(&num);
	printf("결과: %d \n", num);
	return 0;
}

int SquareByValue(int num)
{
	num *= num;

	return num;
}

void SquareByReference(int* ptr)
{
	*ptr *= *ptr;
}