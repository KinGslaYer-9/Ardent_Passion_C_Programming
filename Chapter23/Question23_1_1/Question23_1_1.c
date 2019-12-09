#include <stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
} Point;

void SwapPoint(Point*, Point*);
void ShowPoint(Point, Point);

int main(void)
{
	Point pos1 = { 2, 4 };
	Point pos2 = { 5, 7 };

	puts("¹Ù²î±â Àü");
	ShowPoint(pos1, pos2);

	SwapPoint(&pos1, &pos2);

	puts("¹Ù²ï ÈÄ");
	ShowPoint(pos1, pos2);

	return 0;
}

void SwapPoint(Point* ptr1, Point* ptr2)
{
	Point temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

void ShowPoint(Point pos1, Point pos2)
{
	printf("pos1: [%d, %d] \n", pos1.xpos, pos1.ypos);
	printf("pos2: [%d, %d] \n", pos2.xpos, pos2.ypos);
}