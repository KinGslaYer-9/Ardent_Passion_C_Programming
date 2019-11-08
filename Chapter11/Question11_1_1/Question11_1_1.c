#include <stdio.h>

int main(void)
{
	int arr[5], max, min, sum = 0;

	scanf_s("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);

	max = arr[0];
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
		if (max < arr[i])
			max = arr[i];
	printf("ÃÖ´ñ°ª : %d \n", max);
	putchar('\n');

	min = arr[0];
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
		if (min > arr[i])
			min = arr[i];
	printf("ÃÖ¼Ú°ª : %d \n", min);
	putchar('\n');
	
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
		sum += arr[i];
	printf("ÇÕ°è : %d \n", sum);

	return 0;
}