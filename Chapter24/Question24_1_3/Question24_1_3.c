#include <stdio.h>

int main(void)
{
	FILE* fp;
	errno_t err = fopen_s(&fp, "mystroy.txt", "rt");
	char str[100] = { 0 };

	if (err && fp == NULL)
	{
		puts("파일오픈 실패!");
		return -1;
	}

	while (fgets(str, sizeof(str), fp) != NULL)
		fputs(str, stdout);

	fclose(fp);
	return 0;
}