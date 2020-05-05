#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void PrintReverseStr(char*);

int main(void)
{
	int len;

	printf("입력할 문자열의 최대길이: ");
	scanf_s("%d", &len);
	fseek(stdin, 0, SEEK_END);

	char* str = (char*)malloc(sizeof(len));

	printf("역으로 출력할 문자열: ");
	fgets(str, len + 1, stdin);
	PrintReverseStr(str);

	free(str);
	return 0;
}

void PrintReverseStr(char* str)
{
	int len = strlen(str);

	for (int i = len; i > 0; i--)
	{
		if (str[i] == ' ')
		{
			printf("%s ", &str[i + 1]);
			str[i] = 0;
		}
	}
	printf("%s", &str[0]);
}