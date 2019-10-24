#include <stdio.h>
void fibo(int);

int main(void)
{
	int inputNum;

	printf("피보나치 수열을 출력할 개수를 입력하세요: ");
	scanf_s("%d", &inputNum);

	fibo(inputNum);

	return 0;
}

void fibo(int count)
{
	int prev = 0, next = 1, nextToNext;

	printf("%d %d ", prev, next);

	for (int i = 0; i < count - 2; i++)
	{
		nextToNext = prev + next;
		printf("%d ", nextToNext);
		prev = next;
		next = nextToNext;
	}
}