#include <stdio.h>

int main(void)
{
	int korScore, engScore, matScore, avg = 0;

	printf("����, ����, ���� ������ �Է��ϼ��� : ");
	scanf_s("%d %d %d", &korScore, &engScore, &matScore);
	avg = (korScore + engScore + matScore) / 3;

	if (avg >= 90)
		printf("A \n");
	else if (avg >= 80)
		printf("B \n");
	else if (avg >= 70)
		printf("C \n");
	else if (avg >= 50)
		printf("D \n");
	else
		printf("F \n");

	return 0;
}