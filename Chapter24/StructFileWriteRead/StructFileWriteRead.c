#include <stdio.h>

typedef struct fren
{
	char name[10];
	char sex;
	int age;
} Friend;

int main(void)
{
	FILE* fp;
	Friend myfren1;
	Friend myfren2;

	// VS���� �����ϴ� �پ��� �Լ��� ��ȯ�� �뵵
	// 0�̸� ����, 0�� �ƴ� ���� ������ �߻��Ͽ� �ش� �Լ��� ���������� �ǹ��Ѵ�.
	errno_t err;

	/*** file write ***/
	err = fopen_s(&fp, "friend.bin", "wb");
	// err�� ���� fp�� �� �� �� Ȯ���ؾ� fwrite���� ��� ��Ÿ���� �ʴ´�.
	if (!err && fp != NULL)
	{
		printf("�̸�, ����, ���� �� �Է�: ");
		scanf_s("%s %c %d", myfren1.name, sizeof(myfren1.name), &(myfren1.sex), sizeof(myfren1.sex), &(myfren1.age));
		fwrite((void*)&myfren1, sizeof(myfren1), 1, fp);
		fclose(fp);
	}

	/*** file read ***/
	err = fopen_s(&fp, "friend.bin", "rb");
	if (!err && fp != NULL)
	{
		fread((void*)&myfren2, sizeof(myfren2), 1, fp);
		printf("%s %c %d \n", myfren2.name, myfren2.sex, myfren2.age);
		fclose(fp);
	}
	return 0;
}