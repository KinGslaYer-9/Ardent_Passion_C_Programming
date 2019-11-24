#include <stdio.h>

void EvenPrint(int[], int);
void OddPrint(int[], int);

int main(void)
{
	int arr[10] = { 0 };
	int size = sizeof(arr) / sizeof(int);

	printf("�� %d���� ���� �Է� \n", size);

	for (int i = 0; i < size; i++)
	{
		printf("�Է�: ");
		scanf_s("%d", &arr[i]);
	}

	OddPrint(arr, size);
	EvenPrint(arr, size);

	return 0;
}

void EvenPrint(int arr[], int size)
{
	printf("¦�� ���: ");
	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 == 0)
			printf("%d, ", arr[i]);
	}

	putchar('\n');
}

void OddPrint(int arr[], int size)
{
	printf("Ȧ�� ���: ");
	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 == 1)
			printf("%d, ", arr[i]);
	}

	putchar('\n');
}