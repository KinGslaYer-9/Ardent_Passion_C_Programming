#include <stdio.h>

int main(void)
{
	int num1 = 10, num2 = 20;
	int* ptr1 = &num1;
	int* ptr2 = &num2;

	(*ptr1)++;
	(*ptr2)--;

	int* temp = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;

	printf("ptr1�� ����Ű�� ������ �� : %d \n", *ptr1);
	printf("ptr2�� ����Ű�� ������ �� : %d \n", *ptr2);
	return 0;
}