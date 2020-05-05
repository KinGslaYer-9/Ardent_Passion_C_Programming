#include <stdio.h>

void ShowArr(int[][4], int);
void RotateArr(int[][4], int);

int main(void)
{
	int arr[4][4] = {
		{ 1, 2, 3, 4 },
		{ 5, 6, 7, 8 },
		{ 9, 10, 11, 12 },
		{ 13, 14, 15, 16 }
	};

	// 1회전
	ShowArr(arr, 4);
	RotateArr(arr, 4);

	// 2회전
	ShowArr(arr, 4);
	RotateArr(arr, 4);

	// 3회전
	ShowArr(arr, 4);
	RotateArr(arr, 4);

	// 4회전
	ShowArr(arr, 4);
	RotateArr(arr, 4);

	return 0;
}

void ShowArr(int arr[][4], int column)
{
	for (int i = 0; i < column; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);
		}
		putchar('\n');
	}

	putchar('\n');
}

void RotateArr(int arr[][4], int column)
{
	int temp[4][4];

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			temp[j][3 - i] = arr[i][j];
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			arr[i][j] = temp[i][j];
		}
	}
}