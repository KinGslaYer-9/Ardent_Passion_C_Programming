#include <stdio.h>

int main(void)
{
	int arr[6] = { 1, 2, 3, 4, 5, 6 }, temp;
	int* firstPtr = &arr[0];
	int* lastPtr = &arr[5];

	for (int i = 0; i < (sizeof(arr) / sizeof(int)) / 2; i++)
	{
		temp = *firstPtr;
		*firstPtr = *lastPtr;
		*lastPtr = temp;
		firstPtr++;
		lastPtr--;
	}

	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
		printf("%d ", arr[i]);

	return 0;
}