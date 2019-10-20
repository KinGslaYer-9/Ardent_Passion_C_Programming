#include <stdio.h>

int main(void)
{
	int inputNum, num, sum = 0;
	double avg;

	printf("몇 개를 입력하시겠습니까? ");
	scanf_s("%d", &inputNum);

	int i = 0;
	while (i < inputNum)
	{
		printf("정수를 입력하세요 : ");
		scanf_s("%d", &num);

		sum += num;
		i++;
	}

	avg = (double)sum / inputNum;
	printf("평균은 %f 입니다 \n", avg);
	return 0;
}