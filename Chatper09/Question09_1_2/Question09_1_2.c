#include <stdio.h>
double CelToFah(double);
double FahToCel(double);

int main(void)
{
	int select;
	double degree, result;

	printf("1. 섭씨를 화씨로\n2. 화씨를 섭씨로 \n");
	printf("메뉴를 선택하세요: ");
	scanf_s("%d", &select);

	if (select == 1)
	{
		printf("섭씨를 입력하세요: ");
		scanf_s("%lf", &degree);
		printf("화씨로 변환된 결과입니다.\n결과: %f \n", CelToFah(degree));
	}
	else if (select == 2)
	{
		printf("화씨를 입력하세요: ");
		scanf_s("%lf", &degree);
		printf("섭씨로 변환된 결과입니다.\n결과: %f \n", FahToCel(degree));
	}
	else
		printf("잘못된 메뉴를 선택하셨습니다.");

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