#include <stdio.h>

void printGuGu(int, int);

int main(void)
{
	int inputNum1, inputNum2;

	scanf_s("%d %d", &inputNum1, &inputNum2);

	printGuGu(inputNum1, inputNum2);

	return 0;
}

void printGuGu(int num1, int num2)
{
	if (num1 > num2)
	{
		int temp = num1;
		num1 = num2;
		num2 = temp;
	}

	for (int i = num1; i <= num2; i++)
	{
		for (int k = 1; k <= 9; k++)
			printf("%d x %d = %d \n", i, k, i * k);
		putchar('\n');
	}
}