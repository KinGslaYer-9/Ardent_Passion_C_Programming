#include <stdio.h>

int main(void)
{
	char name[10];
	char sex;
	int age;

	FILE* fp;
	errno_t err = fopen_s(&fp, "friend.txt", "rt");
	int ret;

	while (1)
	{
		ret = fscanf_s(fp, "%s %c %d", name, sizeof(name), &sex, sizeof(sex), &age);
		if (ret == EOF)
			break;
		printf("%s %c %d \n", name, sex, age);
	}
	fclose(fp);
	return 0;
}