#include <stdio.h>
#include <math.h>

int InputSizeNum(void);
void SetSnailArray(int[][50], int);
void ShowSnailArray(int[][50], int);

int main(void)
{
	int snailArr[50][50] = { 0, };
	int inputSize = InputSizeNum();

	SetSnailArray(snailArr, inputSize);
	ShowSnailArray(snailArr, inputSize);

	return 0;
}

int InputSizeNum(void)
{
	int input;

	printf("���ڸ� �Է��Ͻÿ� : ");
	scanf_s("%d", &input);

	return input;
}

void SetSnailArray(int snail[][50], int inputSize)
{
	int count = 0;
	int r = 0, c = -1, incDec = 1, idx = inputSize;

	while (1)
	{
		// ���ι���
		for (int i = 0; i < idx; i++)
		{
			count++;

			c += incDec;
			snail[r][c] = count;
		}
		idx--;

		// Ż�� ����
		if (count == pow(inputSize, 2))
			break;

		// ���ι���
		for (int i = 0; i < idx; i++)
		{
			count++;

			r += incDec;
			snail[r][c] = count;
		}

		// ���� ����
		incDec *= -1;
	}
}

void ShowSnailArray(int snail[][50], int inputSize)
{
	for (int i = 0; i < inputSize; i++)
	{
		for (int j = 0; j < inputSize; j++)
		{
			printf("%d ", snail[i][j]);
		}
		putchar('\n');
	}
}