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
		printf("�̸� ���� ���� �� �Է�: ");
		scanf_s("%s %c %d", name, sizeof(name), &sex, sizeof(sex), &age);
		getchar();	// ���ۿ� �����ִ� \n�� �Ҹ��� ���ؼ�
		fprintf(fp, "%s %c %d", name, sex, age);
	}
	fclose(fp);
	return 0;
}