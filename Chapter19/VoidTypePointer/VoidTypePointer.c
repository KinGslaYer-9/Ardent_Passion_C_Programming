#include <stdio.h>

void SoSimpleFunc(void)
{
	printf("I'm so simple");
}

void SoSimpleFunc2(int n1, int n2)
{
	printf("Simple2");
}

int main(void)
{
	int num = 20;
	void* ptr;

	ptr = &num;		// ���� num�� �ּ� �� ����
	printf("%p \n", ptr);

	ptr = SoSimpleFunc;		// �Լ� SoSimpleFunc�� �ּ� �� ����
	printf("%p \n", ptr);
	return 0;
}