#include <stdio.h>

int main(void)
{
	int sum = 0, i = 0;

	do
	{
		sum += i;
		i += 2;
	} while (i <= 100);
	printf("�հ�: %d \n", sum);
	return 0;
}