#include <stdio.h>

int SquareByValue(int);
void SquareByReference(int*);

int main(void)
{
	int num = 5, result = 0;

	result = SquareByValue(num);
	printf("���: %d \n", result);
	SquareByReference(&num);
	printf("���: %d \n", num);
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