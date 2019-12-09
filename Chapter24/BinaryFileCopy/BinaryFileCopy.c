#include <stdio.h>

int main(void)
{
	FILE* src;
	FILE* des;
	errno_t err = fopen_s(&src, "src.bin", "rb"), err1 = fopen_s(&des, "dst.bin", "wb");
	char buf[20];
	int readCnt;

	if ((err && src == NULL) || (err && des == NULL))
	{
		puts("파일오픈 실패!");
		return -1;
	}

	while (1)
	{
		readCnt = fread_s((void*)buf, sizeof(buf), 1, sizeof(buf), src);

		if (readCnt < sizeof(buf))
		{
			if (feof(src) != 0)
			{
				fwrite((void*)buf, 1, readCnt, des);
				puts("파일복사 완료");
				break;
			}
			else
				puts("파일복사 실패");

			break;
		}
		fwrite((void*)buf, 1, sizeof(buf), des);
	}

	fclose(src);
	fclose(des);
	return 0;
}