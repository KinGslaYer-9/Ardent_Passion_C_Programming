#include <stdio.h>

void EvenPrint(int[], int);
void OddPrint(int[], int);

int main(void)
{
	int arr[10] = { 0 };
	int size = sizeof(arr) / sizeof(int);

	printf("총 %d개의 숫자 입력 \n", size);

	for (int i = 0; i < size; i++)
	{
		printf("입력: ");
		scanf_s("%d", &arr[i]);
	}

	OddPrint(arr, size);
	EvenPrint(arr, size);

	return 0;
}

void EvenPrint(int arr[], int size)
{
	printf("짝수 출력: ");
	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 == 0)
			printf("%d, ", arr[i]);
	}

	putchar('\n');
}

void OddPrint(int arr[], int size)
{
	printf("홀수 출력: ");
	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 == 1)
			printf("%d, ", arr[i]);
	}

	putchar('\n');
}