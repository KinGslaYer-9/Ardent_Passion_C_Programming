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

	// VS에서 지원하는 다양한 함수의 반환값 용도
	// 0이면 성공, 0이 아닐 때는 오류가 발생하여 해당 함수가 실패했음을 의미한다.
	errno_t err;

	/*** file write ***/
	err = fopen_s(&fp, "friend.bin", "wb");
	// err의 값과 fp의 값 둘 다 확인해야 fwrite에서 경고가 나타나지 않는다.
	if (!err && fp != NULL)
	{
		printf("이름, 성별, 나이 순 입력: ");
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