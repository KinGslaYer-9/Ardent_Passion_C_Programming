#include <stdio.h>

int main(void)
{
	char name[10];
	char sex;
	int age;

	FILE* fp;
	errno_t err = fopen_s(&fp, "friend.txt", "wt");
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("이름 성별 나이 순 입력: ");
		scanf_s("%s %c %d", name, sizeof(name), &sex, sizeof(sex), &age);
		getchar();	// 버퍼에 남아있는 \n의 소멸을 위해서
		fprintf(fp, "%s %c %d", name, sex, age);
	}
	fclose(fp);
	return 0;
}