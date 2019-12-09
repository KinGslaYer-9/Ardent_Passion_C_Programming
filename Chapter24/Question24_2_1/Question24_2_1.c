#include <stdio.h>

long GetFileSize(FILE*);

int main(void)
{
	long size = 0;
	FILE* fp;
	errno_t err = fopen_s(&fp, "test.txt", "rt");
	if (err && fp == NULL)
	{
		puts("���Ͽ��� ����!");
		return -1;
	}

	size = GetFileSize(fp);
	printf("������ ũ���? %ld �Դϴ�", size);
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