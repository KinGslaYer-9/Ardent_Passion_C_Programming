#include <stdio.h>
#include <math.h>

int main(void)
{
	int leftTopX, leftTopY, rightBottomX, rightBottomY, area;

	printf("�� ����� x, y ��ǥ: ");
	scanf_s("%d %d", &leftTopX, &leftTopY);
	printf("�� �ϴ��� x, y ��ǥ: ");
	scanf_s("%d %d", &rightBottomX, &rightBottomY);
	
	area = (leftTopX - leftTopY) * (rightBottomX - rightBottomY);

	printf("�� ���� �̷�� ���簢���� ���̴� %d�Դϴ�. \n", abs(area));
	return 0;
}