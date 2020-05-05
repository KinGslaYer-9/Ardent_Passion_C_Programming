#include <stdio.h>
#define ADD(NUM1, NUM2, NUM3)	((NUM1) + (NUM2) + (NUM3))
#define MUL(NUM1, NUM2, NUM3)	((NUM1) * (NUM2) * (NUM3))

int main(void)
{
	printf("3 + 4 + 5 = %d \n", ADD(3, 4, 5));
	printf("3 * 4 * 5 = %d \n", MUL(3, 4, 5));
	return 0;
}