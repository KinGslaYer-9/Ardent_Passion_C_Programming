#include <stdio.h>

int main(void)
{
	int inputNum = 0, sum = 0;

	int i = 0;
	while (i < 5)
	{
		while (inputNum <= 0)
		{
			scanf_s("%d", &inputNum);
		}
		sum += inputNum;
		inputNum = 0;
		i++;
	}

	printf("�հ�� %d �Դϴ�. \n", sum);
	return 0;
}