#include <stdio.h>

int main(void)
{
	char str[100];
	char reverse[100];

	scanf_s("%s", str, sizeof(str));

	int i = 0;
	while (str[i] != 0)
	{
		i++;
	}

	for (int k = 0; k < i / 2; k++)
	{
		char temp = str[k];
		str[k] = str[(i - k) - 1];
		str[(i - k) - 1] = temp;
	}

	printf("������ ���ڿ�: %s \n", str);
	return 0;
}