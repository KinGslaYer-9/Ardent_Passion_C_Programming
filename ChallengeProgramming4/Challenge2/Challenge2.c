#include <stdio.h>
#include <stdlib.h>

typedef struct book
{
	char title[32];
	char writer[10];
	int page;
} Book;

int main(void)
{
	Book* books[3];

	for (int i = 0; i < 3; i++)
		books[i] = (Book*)malloc(sizeof(Book) * 3);

	puts("���� ���� �Է�");
	for (int i = 0; i < 3; i++)
	{
		printf("����: ");
		fgets(books[i]->writer, sizeof(books[i]->writer), stdin);

		printf("����: ");
		fgets(books[i]->title, sizeof(books[i]->title), stdin);

		printf("������ ��: ");
		scanf_s("%d", &(books[i]->page));
		fseek(stdin, 0, SEEK_END);
	}
	putchar('\n');

	puts("���� ���� ���");
	for (int i = 0; i < 3; i++)
	{
		printf("book %d \n", i + 1);
		printf("����: %s", books[i]->writer);
		printf("����: %s", books[i]->title);
		printf("������ ��: %d \n", books[i]->page);
	}

	for (int i = 0; i < 3; i++)
		free(books[i]);

	return 0;
}