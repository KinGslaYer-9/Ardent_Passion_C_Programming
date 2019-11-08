#include <stdio.h>

int main(void)
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int* ptr = arr;

	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		*ptr += 2;
		printf("%d ", *ptr);
		ptr++;
	}
	return 0;
}