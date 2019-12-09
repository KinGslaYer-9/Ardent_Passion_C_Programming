#include <stdio.h>

typedef struct student
{
	char name[20];		// �л� �̸�
	char stdnum[20];	// �л� ������ȣ
	char school[20];	// �б� �̸�
	char major[20];		// ���� ����
	int year;			// �г�
} Student;

void ShowStudentInfo(Student* sptr)
{
	printf("�л� �̸�: %s \n", sptr->name);
	printf("�л� ������ȣ: %s \n", sptr->stdnum);
	printf("�б� �̸�: %s \n", sptr->school);
	printf("���� ����: %s \n", sptr->major);
	printf("�г�: %d \n", sptr->year);
}

int main(void)
{
	Student arr[7];
	int i;

	for (i = 0; i < 7; i++)
	{
		printf("�̸�: "); scanf_s("%s", arr[i].name, sizeof(arr[i].name));
		printf("��ȣ: "); scanf_s("%s", arr[i].stdnum, sizeof(arr[i].stdnum));
		printf("�б�: "); scanf_s("%s", arr[i].school, sizeof(arr[i].school));
		printf("����: "); scanf_s("%s", arr[i].major, sizeof(arr[i].major));
		printf("�г�: "); scanf_s("%d", &arr[i].year);
	}

	for (i = 0; i < 7; i++)
		ShowStudentInfo(&arr[i]);
	return 0;
}