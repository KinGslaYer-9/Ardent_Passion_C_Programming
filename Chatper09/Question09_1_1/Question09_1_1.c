#include <stdio.h>
int GetMaxWithThreeValue(int, int, int);

int main(void)
{
	int inputNum1, inputNum2, inputNum3, maxValue;

	printf("3���� ������ ���ؼ� �ִ��� ����մϴ�. 3���� ������ �Է��ϼ��� : ");
	scanf_s("%d %d %d", &inputNum1, &inputNum2, &inputNum3);

	maxValue = GetMaxWithThreeValue(inputNum1, inputNum2, inputNum3);
	printf("%d, %d, %d�߿� �ִ��� %d�Դϴ�. \n", inputNum1, inputNum2, inputNum3, maxValue);
	return 0;
}

int GetMaxWithThreeValue(int num1, int num2, int num3)
{
	int result = (num1 > num2) ? num1 : num2;
	result = (result > num3) ? result : num3;
	return result;
}