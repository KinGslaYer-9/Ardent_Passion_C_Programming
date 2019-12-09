#include <stdio.h>

int main(void)
{
	FILE* fp;
	errno_t err = fopen_s(&fp, "mystroy.txt", "at");

	if (err && fp == NULL)
	{
		puts("ÆÄÀÏ¿ÀÇÂ ½ÇÆĞ!");
		return -1;
	}

	fputs("#Áñ°Ü¸Ô´Â À½½Ä: Â«»Í, ÅÁ¼öÀ° \n", fp);
	fputs("#Ãë¹Ì: Ãà±¸ \n", fp);

	fclose(fp);
	return 0;
}