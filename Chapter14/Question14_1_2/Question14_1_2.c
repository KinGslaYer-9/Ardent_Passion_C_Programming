#include <stdio.h>

void Swap3(int*, int*, int*);

int main(void)
{
	int num1 = 10, num2 = 20, num3 = 30;

	printf("Swap3 Àü: %d %d %d \n", num1, num2, num3);
	Swap3(&num1, &num2, &num3);
	printf("Swap3 ÈÄ: %d %d %d \n", num1, num2, num3);
	return 0;
}

void Swap3(int* ptr1, int* ptr2, int* ptr3)
{
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = *ptr3;
	*ptr3 = temp;
}