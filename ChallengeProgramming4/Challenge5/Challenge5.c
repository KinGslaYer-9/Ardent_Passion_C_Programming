#include <stdio.h>

int main(int argc, char* argv[])
{
	FILE* fp1;
	FILE* fp2;
	char c1, c2;
	int isSame = 0;

	errno_t err;

	err = fopen_s(&fp1, argv[1], "rt");
	if (err && fp1 == NULL)
	{
		puts("파일을 여는데 실패했습니다.");
		return -1;
	}

	err = fopen_s(&fp2, argv[2], "rt");
	if (err && fp2 == NULL)
	{
		puts("파일을 여는데 실패했습니다.");
		return -1;
	}

	while (1)
	{
		c1 = fgetc(fp1);
		c2 = fgetc(fp2);

		if (c1 != c2)
		{
			isSame = 0;
			break;
		}

		if (feof(fp1) != 0 && feof(fp2) != 0)
		{
			isSame = 1;
			break;
		}
	}

	if(isSame)
		puts("두 개의 파일은 완전히 일치 파일입니다.");
	else
		puts("두 개의 파일은 다른 파일입니다.");

	fclose(fp1);
	fclose(fp2);

	return 0;
}