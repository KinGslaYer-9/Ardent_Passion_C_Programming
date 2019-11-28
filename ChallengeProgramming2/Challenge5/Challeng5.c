#include <stdio.h>

void DesSort(int[], int);

int main(void)
{
	int inputDataArray[7] = { 0 };
	int inputData;

	for (int i = 0; i < sizeof(inputDataArray) / sizeof(int); i++)
	{
		printf("ют╥б: ");
		scanf_s("%d", &inputData);
		inputDataArray[i] = inputData;
	}

	DesSort(inputDataArray, sizeof(inputDataArray) / sizeof(int));

	for (int i = 0; i < sizeof(inputDataArray) / sizeof(int); i++)
		printf("%d ", inputDataArray[i]);
	putchar('\n');

	return 0;
}

void DesSort(int nDataArray[], int len)
{
	int temp;

	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < (len - i) - 1; j++)
		{
			if (nDataArray[j] < nDataArray[j + 1])
			{
				temp = nDataArray[j];
				nDataArray[j] = nDataArray[j + 1];
				nDataArray[j + 1] = temp;
			}
		}
	}
}