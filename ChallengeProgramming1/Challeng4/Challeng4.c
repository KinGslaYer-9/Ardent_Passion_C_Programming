#include <stdio.h>

int main(void)
{
	int money;
	
	printf("���� ����� �����ϰ� �ִ� �ݾ�: ");
	scanf_s("%d", &money);

	for (int cream = 1; cream * 500 <= money; cream++)
		for (int snack = 1; snack * 700 <= money; snack++)
			for (int coke = 1; coke * 400 <= money; coke++)
			{
				if ((cream * 500) + (snack * 700) + (coke * 400) == money)
					printf("ũ���� %d��, ����� %d��, �� �� %d�� \n", cream, snack, coke);
			}

	printf("��� �����Ͻðڽ��ϱ�?");

	return 0;
}