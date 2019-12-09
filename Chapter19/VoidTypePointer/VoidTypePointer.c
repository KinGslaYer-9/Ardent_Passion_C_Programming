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

	ptr = &num;		// 변수 num의 주소 값 저장
	printf("%p \n", ptr);

	ptr = SoSimpleFunc;		// 함수 SoSimpleFunc의 주소 값 저장
	printf("%p \n", ptr);
	return 0;
}