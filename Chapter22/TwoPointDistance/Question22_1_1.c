#include <stdio.h>

struct employee
{
	char name[20];
	char personNum[16];
	int salary;
};

int main(void)
{
	struct employee emp;

	puts("������ ������ �Է� �ϼ���");
	printf("������ �̸�: ");
	scanf_s("%s", emp.name, sizeof(emp.name));
	printf("�ֹε�Ϲ�ȣ: ");
	scanf_s("%s", emp.personNum, sizeof(emp.personNum));
	printf("�޿�����: ");
	scanf_s("%d", &(emp.salary));

	puts("���");
	printf("������ �̸�: %s \n", emp.name);
	printf("�ֹε�Ϲ�ȣ: %s \n", emp.personNum);
	printf("�޿�����: %d \n", emp.salary);
	return 0;
}
