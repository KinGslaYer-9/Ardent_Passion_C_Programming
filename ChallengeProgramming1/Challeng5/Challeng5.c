#include <stdio.h>

int main(void)
{
	int cnt = 0;

	for (int i = 2; cnt < 10; i++)
	{
		for (int j = 2; j <= i; j++)
		{
			if (j == i)
			{
				printf("%d ", i);
				cnt++;
				break;
			}

			if (i % j == 0)
				break;
		}
	}

	return 0;
}