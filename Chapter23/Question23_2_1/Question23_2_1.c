#include <stdio.h>

// 1. ���簢���� ���̸� ����ؼ� ����ϴ� �Լ�
// 2. ���簢���� �̷�� �� ���� ��ǥ������ ����ϴ� �Լ�

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

	printf("���̴� %d �Դϴ�. \n", area);
}

void PrintPointInfo(Rectangle rect)
{
	printf("�� ���: [%d, %d] \n", rect.leftUpper.xpos, rect.leftUpper.ypos);
	printf("�� �ϴ�: [%d, %d] \n", rect.leftUpper.xpos, rect.rightBottom.ypos);
	printf("�� ���: [%d, %d] \n", rect.rightBottom.xpos, rect.leftUpper.ypos);
	printf("�� �ϴ�: [%d, %d] \n", rect.rightBottom.xpos, rect.rightBottom.ypos);
}