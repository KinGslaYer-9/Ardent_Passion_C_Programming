#include <stdio.h>

// 1. 직사각형의 넓이를 계산해서 출력하는 함수
// 2. 직사각형을 이루는 네 점의 좌표정보를 출력하는 함수

typedef struct point
{
	int xpos;
	int ypos;
} Point;

typedef struct rectangle
{
	Point leftUpper;
	Point rightBottom;
} Rectangle;

void PrintPointInfo(Rectangle);
int CalcRectArea(Rectangle);

int main(void)
{
	Rectangle rect1 = { {1, 1}, {4, 4} };
	Rectangle rect2 = { {0, 0}, {7, 5} };
	
	PrintPointInfo(rect1);
	CalcRectArea(rect1);

	PrintPointInfo(rect2);
	CalcRectArea(rect2);

	return 0;
}

int CalcRectArea(Rectangle rect)
{
	int width = rect.rightBottom.xpos - rect.leftUpper.xpos;
	int height = rect.rightBottom.ypos - rect.leftUpper.ypos;
	int area = width * height;

	printf("넓이는 %d 입니다. \n", area);
}

void PrintPointInfo(Rectangle rect)
{
	printf("좌 상단: [%d, %d] \n", rect.leftUpper.xpos, rect.leftUpper.ypos);
	printf("좌 하단: [%d, %d] \n", rect.leftUpper.xpos, rect.rightBottom.ypos);
	printf("우 상단: [%d, %d] \n", rect.rightBottom.xpos, rect.leftUpper.ypos);
	printf("우 하단: [%d, %d] \n", rect.rightBottom.xpos, rect.rightBottom.ypos);
}