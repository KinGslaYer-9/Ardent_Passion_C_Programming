#include <stdio.h>

int main(void)
{
	int arr[10] = { 0 }, result[10] = { 0 };

	int size = sizeof(arr) / sizeof(int);
	int start = 0, last = size - 1;

	printf("총 %d개의 숫자 입력 \n", size);
	for (int i = 0; i < size; i++)
	{
		printf("입력: ");
		scanf_s("%d", &arr[i]);

		if (arr[i] % 2 == 1)
			result[start++] = arr[i];
		else
			result[last--] = arr[i];
	}

	printf("배열 요소의 출력 : ");
	for (int i = 0; i < size; i++)
		printf("%d ", result[i]);

	return 0;
}