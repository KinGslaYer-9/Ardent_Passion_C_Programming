#include <stdio.h>

int main(void)
{
	FILE* src;
	FILE* des;
	errno_t err = fopen_s(&src, "src.txt", "rt"), err1 = fopen_s(&des, "des.txt", "wt");
	char str[20];

	if ((err && src == NULL) || (err1 && des == NULL))
	{
		puts("���Ͽ��� ����!");
		return -1;
	}

	while (fgets(str, sizeof(str), src) != NULL)
		fputs(str, des);

	if (feof(src) != 0)
		puts("���Ϻ��� �Ϸ�!");
	else
		puts("���Ϻ��� ����!");

	fclose(src);
	fclose(des);
	return 0;
}