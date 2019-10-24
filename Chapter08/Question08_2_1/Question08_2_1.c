#include <stdio.h>

int main(void)
{
	int num = 0;
	
	for (int i = 1; i <= 9; i++)
	{
		if (i % 2 == 1)
			continue;

		for (int j = 1; j <= i; j++)
		{
			printf("%d x %d = %d \n", i, j, i * j);
		}
		putchar('\n');
	}
}