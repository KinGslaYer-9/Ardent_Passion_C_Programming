#include <stdio.h>

int main(void)
{
	int ch, i;
	FILE* fp;

	errno_t err = fopen_s(&fp, "data.txt", "rt");

	if (err && fp == NULL)
	{
		puts("파일오픈 실패!");
		return -1;
	}

	for (i = 0; i < 3; i++)
	{
		ch = fgetc(fp);
		printf("%c \n", ch);
	}
	fclose(fp);

	return 0;
}