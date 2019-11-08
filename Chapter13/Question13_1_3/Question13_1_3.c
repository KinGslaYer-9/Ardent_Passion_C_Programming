#include <stdio.h>

int main(void)
{
	int arr[5] = { 1, 2, 3, 4, 5 }, sum = 0;
	int* ptr = &arr[4];

	for(int i = sizeof(arr) / sizeof(int) - 1; i >= 0; i--)
	{
		sum += *ptr;
		ptr--;
	}
	printf("°á°ú : %d \n", sum);
	return 0;
}