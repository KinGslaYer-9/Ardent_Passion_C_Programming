#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int input = 0, count = 0, idx = 5;
	int* dynamicIntArr = (int*)calloc(idx, sizeof(int));

	while (1)
	{
		printf("정수 입력: ");
		scanf_s("%d", &input);

		if (input == -1)
			break;

		if (count >= idx - 1)
			dynamicIntArr = (int*)realloc(dynamicIntArr, ++idx * sizeof(int));

		dynamicIntArr[count++] = input;
	}

	for (int i = 0; i < count; i++)
		printf("%d ", dynamicIntArr[i]);

	free(dynamicIntArr);
	return 0;
}