#include <stdio.h>

int main(void)
{
	int n, k = 0;

	printf("상수 n입력: ");
	scanf_s("%d", &n);

	while (1)
	{ 
		if (2 << k >= n)
		{
			printf("공식을 만족하는 k의 최댓값은 %d \n", k + 1);
			break;
		}
		k++;
	}
}