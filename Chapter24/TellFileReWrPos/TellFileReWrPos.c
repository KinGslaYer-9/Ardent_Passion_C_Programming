#include <stdio.h>

int main(void)
{
	long fpos;
	int i;

	/* 颇老 积己 */
	FILE* fp;
	errno_t err = fopen_s(&fp, "text.txt", "wt");
	fputs("1234-", fp);
	fclose(fp);

	/* 颇老 俺规 */
	err = fopen_s(&fp, "text.txt", "rt");

	for (i = 0; i < 4; i++)
	{
		putchar(fgetc(fp));
		fpos = ftell(fp);
		fseek(fp, -1, SEEK_END);
		putchar(fgetc(fp));
		fseek(fp, fpos, SEEK_SET);
	}
	fclose(fp);
	return 0;
}