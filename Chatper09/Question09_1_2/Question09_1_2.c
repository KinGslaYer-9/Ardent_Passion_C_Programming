#include <stdio.h>
double CelToFah(double);
double FahToCel(double);

int main(void)
{
	int select;
	double degree, result;

	printf("1. ������ ȭ����\n2. ȭ���� ������ \n");
	printf("�޴��� �����ϼ���: ");
	scanf_s("%d", &select);

	if (select == 1)
	{
		printf("������ �Է��ϼ���: ");
		scanf_s("%lf", &degree);
		printf("ȭ���� ��ȯ�� ����Դϴ�.\n���: %f \n", CelToFah(degree));
	}
	else if (select == 2)
	{
		printf("ȭ���� �Է��ϼ���: ");
		scanf_s("%lf", &degree);
		printf("������ ��ȯ�� ����Դϴ�.\n���: %f \n", FahToCel(degree));
	}
	else
		printf("�߸��� �޴��� �����ϼ̽��ϴ�.");

	return 0;
}

double CelToFah(double cel)
{
	return 1.8 * cel + 32;
}

double FahToCel(double fah)
{
	return (fah - 32) / 1.8;
}