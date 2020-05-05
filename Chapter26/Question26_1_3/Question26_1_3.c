#include <stdio.h>
#define MAX(NUM1, NUM2)		((NUM1) > (NUM2) ? (NUM1) : (NUM2))

int main(void)
{
	int num1, num2;
	printf("두 개의 정수를 입력: ");
	scanf_s("%d %d", &num1, &num2);
	printf("%d와 %d중 큰 값은? %d 입니다 \n", num1, num2, MAX(num1, num2));
	return 0;
}