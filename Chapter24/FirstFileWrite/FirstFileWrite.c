#include <stdio.h>

int main(void)
{
	FILE* fp;

	errno_t err;
	err = fopen_s(&fp, "data.txt", "wt");
	if (err && fp == NULL)
	{
		puts("���Ͽ��� ����!");
		return -1;		// �������� ���Ḧ �ǹ��ϱ� ���ؼ� -1�� ��ȯ
	}

	fputc('A', fp);
	fputc('B', fp);
	fputc('C', fp);
	fclose(fp);		// ��Ʈ���� ����

	return 0;
}