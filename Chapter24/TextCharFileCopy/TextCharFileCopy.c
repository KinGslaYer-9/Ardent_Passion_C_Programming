#include <stdio.h>

int main(void)
{
	FILE* src;
	FILE* des;
	int ch;

	errno_t err = fopen_s(&src, "src.txt", "rt"), err1 = fopen_s(&des, "dst.txt", "wt");

	if ((err && src == NULL) || (err1 && des == NULL))
	{
		puts("���Ͽ��� ����!");
		return -1;
	}

	while ((ch = fgetc(src)) != EOF)
		fputc(ch, des);

	if (feof(src) != 0)
		puts("���Ϻ��� �Ϸ�!");
	else
		puts("���Ϻ��� ����!");

	fclose(src);
	fclose(des);
	return 0;
}