#include <stdio.h>
#include <math.h>

int main(void)
{
	int leftTopX, leftTopY, rightBottomX, rightBottomY, area;

	printf("좌 상단의 x, y 좌표: ");
	scanf_s("%d %d", &leftTopX, &leftTopY);
	printf("우 하단의 x, y 좌표: ");
	scanf_s("%d %d", &rightBottomX, &rightBottomY);
	
	area = (leftTopX - leftTopY) * (rightBottomX - rightBottomY);

	printf("두 점이 이루는 직사각형의 넓이는 %d입니다. \n", abs(area));
	return 0;
}