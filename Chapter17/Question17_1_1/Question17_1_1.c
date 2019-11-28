#include <stdio.h>

void MaxAndMin(int**, int**, int[], int);

int main(void)
{
	int* maxPtr;
	int* minPtr;
	int arr[5];

	for (int i = 0; i < 5; i++)
	{
		printf("정수 입력: ");
		scanf_s("%d", &arr[i]);
	}

	MaxAndMin(&maxPtr, &minPtr, arr, sizeof(arr)/sizeof(int));
	printf("최대값: %d, 최솟값: %d \n", *maxPtr, *minPtr);

	return 0;
}

void MaxAndMin(int** maxPtr, int** minPtr, int ary[], int len)
{
	int* max, * min;

	max = min = ary;
	for (int i = 0; i < len; i++)
	{
		if (*max < ary[i])
			max = ary + i;
		if (*min > ary[i])
			min = ary + i;
	}

	*maxPtr = max;
	*minPtr = min;
}