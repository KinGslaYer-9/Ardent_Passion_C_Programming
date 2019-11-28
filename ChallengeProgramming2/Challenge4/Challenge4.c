#include <stdio.h>
#include <string.h>

void Palindrome(char[]);

int main(void)
{
	char inputStr[100];

	printf("문자열 입력: ");
	scanf_s("%s", inputStr, sizeof(inputStr));

	Palindrome(inputStr);

	return 0;
}

void Palindrome(char str[])
{
	int length = strlen(str);

	for (int i = 0; i < length / 2; i++)
	{
		if (str[i] != str[(length - 1) - i])
		{
			printf("회문이 아닙니다. \n");
			return;
		}
	}
	printf("회문 입니다. \n");
}