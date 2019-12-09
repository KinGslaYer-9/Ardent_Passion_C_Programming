#include <stdio.h>

long GetFileSize(FILE*);

int main(void)
{
	long size = 0;
	FILE* fp;
	errno_t err = fopen_s(&fp, "test.txt", "rt");
	if (err && fp == NULL)
	{
		puts("파일오픈 실패!");
		return -1;
	}

	size = GetFileSize(fp);
	printf("파일의 크기는? %ld 입니다", size);
	fclose(fp);
	return 0;
}

long GetFileSize(FILE* fp)
{
	long fpos;
	long fsize;
	fpos = ftell(fp);

	fseek(fp, 0, SEEK_END);
	fsize = ftell(fp);
	fseek(fp, fpos, SEEK_SET);
	return fsize;
}