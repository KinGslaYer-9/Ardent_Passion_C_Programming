#include <stdio.h>
#define PI			3.141592
#define AREA(RAD)	(PI * ((RAD) * (RAD)))

int main(void)
{
	double rad;

	printf("���� ������: ");
	scanf_s("%lf", &rad);
	printf("���� ����: %g \n", AREA(rad));
	return 0;
}