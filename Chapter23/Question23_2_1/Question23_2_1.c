#include <stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
} Point;

typedef struct rectangle
{
	Point point1;
	Point point2;
} Rectangle;

int CalcRectArea(Point, Point);

int main(void)
{
	Rectangle rect1 = { {1, 1}, {4, 4} };
	Rectangle rect2 = { {0, 0}, {7, 5} };
	int result;

	return 0;
}

int CalcRectArea(Point point1, Point point2)
{

}