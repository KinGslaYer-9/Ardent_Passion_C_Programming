#include <stdio.h>

int main(void)
{
	char str[100];
	int max;

	scanf_s("%s", str, sizeof(str));

	int len = 0;
	while (str[len] != 0)
	{
		len++;
	}

	max = str[0];
	for (int i = 1; i < len; i++)
	{
		if (max < str[i])
			max = str[i];
	}

	printf("문자열 중 아스키 코드 값이 가장 큰 문자는: %c \n", max);
	return 0;
}