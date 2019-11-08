#include <stdio.h>

int Gcd(int, int);

int main(void)
{
	int inputNum1, inputNum2, gcd;

	printf("�� ���� ���� �Է�: ");
	scanf_s("%d %d", &inputNum1, &inputNum2);

	gcd = Gcd(inputNum1, inputNum2);

	printf("�� ���� �ִ�����: %d \n", gcd);
	return 0;
}

int Gcd(int num1, int num2)
{
	int remain;

	if (num1 > num2)
	{
		int temp = num1;
		num1 = num2;
		num2 = temp;
	}

	while (num2 != 0)
	{
		remain = num1 % num2;
		num1 = num2;
		num2 = remain;
	}

	return num1;
}