#include <stdio.h>
#include "stdiv.h"
#include "intdiv3.h"

int main(void)
{
	Div val = IntDiv(5, 2);
	printf("��: %d \n", val.quotient);
	printf("������: %d \n", val.remainer);
	return 0;
}