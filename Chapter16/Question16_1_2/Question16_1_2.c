#include <stdio.h>

int main(void)
{
	int arrA[2][4];
	int arrB[4][2];
	int count = 1;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			arrA[i][j] = count;
			count++;
			arrB[j][i] = arrA[i][j];
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("%d ", arrB[i][j]);
		}
		putchar('\n');
	}
	return 0;
}