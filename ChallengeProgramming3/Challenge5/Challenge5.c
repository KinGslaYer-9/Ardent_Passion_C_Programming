#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int UserInput(void);
void InitRandomize(void);
int SetRandomSelectToComputer(void);
int Judge(int, int);

int main(void)
{
	int win = 0, draw = 0, result = 0;

	InitRandomize();

	do
	{
		result = Judge(UserInput(), SetRandomSelectToComputer());

		if (result == -1)
			break;
		else if (result == 0)
		{
			draw++;
			continue;
		}
		else if (result == 1)
		{
			win++;
			continue;
		}

	} while (1);

	printf("게임의 결과 : %d승, %d무 \n", win, draw);

	return 0;
}

int UserInput(void)
{
	int input;

	do
	{
		printf("바위는 1, 가위는 2, 보는 3: ");
		scanf_s("%d", &input);

		if (input < 1 || input > 3)
		{
			printf("벗어난 범위를 입력하셨습니다. 다시 입력하세요! \n");
			continue;
		}
		else
			break;

	} while (1);

	return input;
}

void InitRandomize(void)
{
	srand((int)time(NULL));
}

int SetRandomSelectToComputer(void)
{
	return 1 + rand() % 3;
}

int Judge(int user, int computer)
{
	char* rspArr[3] = { "바위", "가위", "보" };

	if (user == computer)
	{
		printf("당신은 %s 선택, 컴퓨터는 %s 선택, 비겼습니다! \n", rspArr[user - 1], rspArr[computer - 1]);
		return 0;
	}
	else if ((user == 1 && computer == 2) || (user == 2 && computer == 3) || (user == 3 && computer == 1))
	{
		printf("당신은 %s 선택, 컴퓨터는 %s 선택, 이겼습니다! \n", rspArr[user - 1], rspArr[computer - 1]);
		return 1;
	}
	else
	{
		printf("당신은 %s 선택, 컴퓨터는 %s 선택, 겼습니다! \n", rspArr[user - 1], rspArr[computer - 1]);
		return -1;
	}
}