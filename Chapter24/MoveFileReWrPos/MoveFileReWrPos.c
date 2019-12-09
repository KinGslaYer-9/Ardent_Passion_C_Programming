#include <stdio.h>

int main(void)
{
	/* 颇老 积己 */
	FILE* fp;
	errno_t err = fopen_s(&fp, "text.txt", "wt");
	fputs("123456789", fp);
	fclose(fp);

	/* 颇老 俺规 */
	err = fopen_s(&fp, "text.txt", "rt");

	/* SEEK_END test */
	fseek(fp, -2, SEEK_END);
	putchar(fgetc(fp));

	/* SEEK_SET test */
	fseek(fp, 2, SEEK_SET);
	putchar(fgetc(fp));

	/* SEEK_CUR test */
	fseek(fp, 2, SEEK_CUR);
	putchar(fgetc(fp));

	fclose(fp);
	return 0;
}