#include <stdio.h>

int main(void)
{
	FILE* fp;
	errno_t err = fopen_s(&fp, "mystroy.txt", "at");

	if (err && fp == NULL)
	{
		puts("���Ͽ��� ����!");
		return -1;
	}

	fputs("#��ܸԴ� ����: «��, ������ \n", fp);
	fputs("#���: �౸ \n", fp);

	fclose(fp);
	return 0;
}