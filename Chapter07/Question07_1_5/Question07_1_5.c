#include <stdio.h>

int main(void)
{
	int inputNum, num, sum = 0;
	double avg;

	printf("�� ���� �Է��Ͻðڽ��ϱ�? ");
	scanf_s("%d", &inputNum);

	int i = 0;
	while (i < inputNum)
	{
		printf("������ �Է��ϼ��� : ");
		scanf_s("%d", &num);

		sum += num;
		i++;
	}

	avg = (double)sum / inputNum;
	printf("����� %f �Դϴ� \n", avg);
	return 0;
}