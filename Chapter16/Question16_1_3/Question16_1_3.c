#include <stdio.h>

int main(void)
{
	int score[5][5], sum;

	for (int i = 0; i < 4; i++)
	{
		sum = 0;
		for (int j = 0; j < 4; j++)
		{
			printf("%d�� �л��� %d�� ������ �Է��ϼ���: ", i + 1, j + 1);
			scanf_s("%d", &score[i][j]);
			sum += score[i][j];
		}
		putchar('\n');
		score[i][4] = sum;
		score[4][4] += sum;
	}

	for (int i = 0; i < 5; i++)
	{
		sum = 0;
		for (int j = 0; j < 4; j++)
		{
			sum += score[j][i];
		}
		score[4][i] = sum;
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
			printf("%d \t", score[i][j]);
		putchar('\n');
	}
	return 0;
}