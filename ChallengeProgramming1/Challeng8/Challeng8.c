#include <stdio.h>

int PowerRecursion(int);

int main(void)
{
	int inputNum, result;

	printf("���� �Է�: ");
	scanf_s("%d", &inputNum);

	result = PowerRecursion(inputNum);
	printf("2�� %d���� %d \n", inputNum, result);
	return 0;
}

int PowerRecursion(int num)
{
	if (num <= 1)
		return 2;
	else
		return 2 * PowerRecursion(num - 1);
}