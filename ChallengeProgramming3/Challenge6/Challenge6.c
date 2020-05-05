#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ComputerSelectThreeNumber(int[], int);
void UserSelectThreeNumber(int[]);
int Judge(int[], int[]);

int main(void)
{
	int user[3], computer[3];
	int tryCount = 0, isGameOver = 0;

	ComputerSelectThreeNumber(computer, 3);

	puts("Start Game!");

	while (!isGameOver)
	{
		UserSelectThreeNumber(user, 3);
		isGameOver = Judge(user, computer);
	}

	puts("Game Over!");

	return 0;
}

void ComputerSelectThreeNumber(int computer[], int size)
{
	srand((int)time(NULL));

	for (int i = 0; i < size; i++)
	{
		computer[i] = rand() % 9;

		printf("%d ", computer[i]);
	}
}

void UserSelectThreeNumber(int user[])
{
	while (1)
	{
		printf("3개의 숫자 선택: ");
		scanf_s("%d %d %d", &user[0], &user[1], &user[2]);

		if ((user[0] < 0 || user[0] > 9) || (user[1] < 0 || user[1] > 9) || (user[2] < 0 || user[2] > 9))
		{
			printf("범위에서 벗어나는 숫자를 입력하셨습니다(범위: 0 ~ 9). 다시 입력하세요! \n");
			continue;
		}
		else
		{
			break;
		}
	}
}

int Judge(int user[], int computer[])
{
	static int tryCount = 0;
	int strike = 0, ball = 0;
	int isGameOver = 0;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (user[i] == computer[j])
			{
				if (i == j)
					strike++;
				else
					ball++;
				break;
			}
		}
	}

	tryCount++;
	printf("%d번째 도전 결과: %dstrike, %dball!! \n", tryCount, strike, ball);

	if (strike == 3)
		return isGameOver = 1;
	else
		return isGameOver = 0;
}