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

	printf("������ ��� : %d��, %d�� \n", win, draw);

	return 0;
}

int UserInput(void)
{
	int input;

	do
	{
		printf("������ 1, ������ 2, ���� 3: ");
		scanf_s("%d", &input);

		if (input < 1 || input > 3)
		{
			printf("��� ������ �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���! \n");
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
	char* rspArr[3] = { "����", "����", "��" };

	if (user == computer)
	{
		printf("����� %s ����, ��ǻ�ʹ� %s ����, �����ϴ�! \n", rspArr[user - 1], rspArr[computer - 1]);
		return 0;
	}
	else if ((user == 1 && computer == 2) || (user == 2 && computer == 3) || (user == 3 && computer == 1))
	{
		printf("����� %s ����, ��ǻ�ʹ� %s ����, �̰���ϴ�! \n", rspArr[user - 1], rspArr[computer - 1]);
		return 1;
	}
	else
	{
		printf("����� %s ����, ��ǻ�ʹ� %s ����, ����ϴ�! \n", rspArr[user - 1], rspArr[computer - 1]);
		return -1;
	}
}