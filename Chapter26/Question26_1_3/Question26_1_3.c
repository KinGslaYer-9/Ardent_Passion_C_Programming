#include <stdio.h>
#define MAX(NUM1, NUM2)		((NUM1) > (NUM2) ? (NUM1) : (NUM2))

int main(void)
{
	int num1, num2;
	printf("�� ���� ������ �Է�: ");
	scanf_s("%d %d", &num1, &num2);
	printf("%d�� %d�� ū ����? %d �Դϴ� \n", num1, num2, MAX(num1, num2));
	return 0;
}