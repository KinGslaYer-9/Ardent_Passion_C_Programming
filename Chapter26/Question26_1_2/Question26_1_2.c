#include <stdio.h>
#define PI			3.141592
#define AREA(RAD)	(PI * ((RAD) * (RAD)))

int main(void)
{
	double rad;

	printf("원의 반지름: ");
	scanf_s("%lf", &rad);
	printf("원의 넓이: %g \n", AREA(rad));
	return 0;
}