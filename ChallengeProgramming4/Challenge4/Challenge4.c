#include <stdio.h>

int main(int argc, char* argv[])
{
	FILE* fp;
	char word[50];
	int aCount = 0, pCount = 0;

	errno_t err;

	err = fopen_s(&fp, argv[1], "rt");
	if (err && fp == NULL)
	{
		puts("파일을 여는데 실패 했습니다.");
		return -1;
	}

	while (1)
	{
		fscanf_s(fp, "%s", word, sizeof(word));

		if (word[0] == 'A')
			aCount++;

		if (word[0] == 'P')
			pCount++;

		if (feof(fp) != 0)
			break;
	}

	printf("A로 시작하는 단어의 수: %d \n", aCount);
	printf("P로 시작하는 단어의 수: %d \n", pCount);

	fclose(fp);

	return 0;
}