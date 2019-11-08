#include <stdio.h>

int main(void)
{
	int money;
	
	printf("현재 당신이 소유하고 있는 금액: ");
	scanf_s("%d", &money);

	for (int cream = 1; cream * 500 <= money; cream++)
		for (int snack = 1; snack * 700 <= money; snack++)
			for (int coke = 1; coke * 400 <= money; coke++)
			{
				if ((cream * 500) + (snack * 700) + (coke * 400) == money)
					printf("크림빵 %d개, 새우깡 %d개, 콜 라 %d개 \n", cream, snack, coke);
			}

	printf("어떻게 구입하시겠습니까?");

	return 0;
}