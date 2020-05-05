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

	puts("도서 정보 입력");
	for (int i = 0; i < 3; i++)
	{
		printf("저자: ");
		fgets(books[i]->writer, sizeof(books[i]->writer), stdin);

		printf("제목: ");
		fgets(books[i]->title, sizeof(books[i]->title), stdin);

		printf("페이지 수: ");
		scanf_s("%d", &(books[i]->page));
		fseek(stdin, 0, SEEK_END);
	}
	putchar('\n');

	puts("도서 정보 출력");
	for (int i = 0; i < 3; i++)
	{
		printf("book %d \n", i + 1);
		printf("저자: %s", books[i]->writer);
		printf("제목: %s", books[i]->title);
		printf("페이지 수: %d \n", books[i]->page);
	}

	for (int i = 0; i < 3; i++)
		free(books[i]);

	return 0;
}