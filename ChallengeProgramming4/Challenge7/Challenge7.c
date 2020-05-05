#include <stdio.h>
#include <string.h>

#define MAX_USER		10
#define MAX_NAME_LEN	10
#define MAX_TEL_LEN		32

typedef struct teleDirectory
{
	char name[MAX_NAME_LEN];
	char telNumber[MAX_TEL_LEN];
} TeleDirectory;

void ShowMenu(void);
int SelectMenu(void);
void InsertInfo(TeleDirectory[], int*);
void RemoveInfo(TeleDirectory[], int*);
void SearchInfo(TeleDirectory[], int);
void PrintAllInfo(TeleDirectory[], int);
void LoadData(TeleDirectory[], int*);
void StoreData(TeleDirectory[], int);

int main(void)
{
	TeleDirectory tel[MAX_USER] = { 0 };
	int input;
	int userCount = 0;

	LoadData(tel, &userCount);

	do
	{
		ShowMenu();
		input = SelectMenu();

		switch (input)
		{
		case 1:
			InsertInfo(tel, &userCount);
			break;
		case 2:
			RemoveInfo(tel, &userCount);
			break;
		case 3:
			SearchInfo(tel, userCount);
			break;
		case 4:
			PrintAllInfo(tel, userCount);
			break;
		case 5:
			StoreData(tel, userCount);
			return 0;
			break;
		default :
			puts("Illegal selection... \n");
			break;
		}

	} while (1);

	return 0;
}

void ShowMenu(void)
{
	puts("***** MENU *****");
	puts("1. Insert");
	puts("2. Delete");
	puts("3. Search");
	puts("4. Print All");
	puts("5. Exit");
}

int SelectMenu(void)
{
	int select = 0;

	printf("Choose the item: ");
	scanf_s("%d", &select);
	fseek(stdin, 0, SEEK_END);

	return select;
}

void InsertInfo(TeleDirectory tel[], int* idx)
{
	puts("[INSERT]");
	printf("Input Name: ");
	fgets(tel[*idx].name, MAX_NAME_LEN, stdin);
	fseek(stdin, 0, SEEK_END);

	printf("Input Tel Number: ");
	fgets(tel[*idx].telNumber, MAX_TEL_LEN, stdin);
	fseek(stdin, 0, SEEK_END);

	int len = strlen(tel[*idx].name);
	tel[*idx].name[len - 1] = 0;
	len = strlen(tel[*idx].telNumber);
	tel[*idx].telNumber[len - 1] = 0;
	(*idx)++;

	puts("\t\tData Inserted \n");
}

void RemoveInfo(TeleDirectory tel[], int* idx)
{
	char name[MAX_NAME_LEN];

	puts("[REMOVE]");
	printf("Input Name: ");
	fgets(name, MAX_NAME_LEN, stdin);
	fseek(stdin, 0, SEEK_END);
	name[strlen(name) - 1] = 0;

	for (int i = 0; i < *idx; i++)
	{
		if (strcmp(name, tel[i].name) == 0)
		{
			for (int j = i + 1; j < *idx; j++)
			{
				strcpy_s(tel[j - 1].name, MAX_NAME_LEN, tel[j].name);
				strcpy_s(tel[j - 1].telNumber, MAX_TEL_LEN, tel[j].telNumber);
			}
			(*idx)--;
			return;
		}
	}
}

void SearchInfo(TeleDirectory tel[], int idx)
{
	char name[MAX_NAME_LEN];

	puts("[Search Data]");
	printf("Input Name: ");
	fgets(name, MAX_NAME_LEN, stdin);
	fseek(stdin, 0, SEEK_END);
	name[strlen(name) - 1] = 0;

	for (int i = 0; i < idx; i++)
	{
		if (strcmp(name, tel[i].name) == 0)
		{
			printf("Name: %s\tTel: %s\n", tel[i].name, tel[i].telNumber);
			return;
		}
	}

	puts("User Not Found");
}

void PrintAllInfo(TeleDirectory tel[], int idx)
{
	puts("[Print All Data]");
	for (int i = 0; i < idx; i++)
	{
		printf("Name: %s\tTel: %s\n", tel[i].name, tel[i].telNumber);
	}
}

void LoadData(TeleDirectory tel[], int* idx)
{
	FILE* fp;
	errno_t err = fopen_s(&fp, "TeleListFile.txt", "rt");
	if (err && fp == NULL)
	{
		return;
	}

	while (1)
	{
		fscanf_s(fp, "%s %s\n", tel[*idx].name, MAX_NAME_LEN, tel[*idx].telNumber, MAX_TEL_LEN);
		(*idx)++;
		if (feof(fp))
			break;
	}
}

void StoreData(TeleDirectory tel[], int idx)
{
	FILE* fp;
	errno_t err = fopen_s(&fp, "TeleListFile.txt", "wt");
	if (err && fp == NULL)
	{
		return;
	}

	for(int i = 0; i < idx; i++)
		fprintf(fp, "%s %s\n", tel[i].name, tel[i].telNumber);
}