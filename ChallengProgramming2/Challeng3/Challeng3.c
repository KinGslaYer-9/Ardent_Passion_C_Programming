#include <stdio.h>

int main(void)
{
	int arr[10] = { 0 }, result[10] = { 0 };

	int size = sizeof(arr) / sizeof(int);
	int start = 0, last = size - 1;

	printf("�� %d���� ���� �Է� \n", size);
	for (int i = 0; i < size; i++)
	{
		printf("�Է�: ");
		scanf_s("%d", &arr[i]);

		if (arr[i] % 2 == 1)
			result[start++] = arr[i];
		else
			result[last--] = arr[i];
	}

	printf("�迭 ����� ��� : ");
	for (int i = 0; i < size; i++)
		printf("%d ", result[i]);

	return 0;
}