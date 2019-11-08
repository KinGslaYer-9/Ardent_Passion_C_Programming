#include <stdio.h>

int main(void)
{
	char str[100];
	int size = 0;

	scanf_s("%s", str, sizeof(str));

	while (str[size] != 0)
		size++;

	printf("입력한 단어의 길이: %d \n", size);
	return 0;
}