#include <stdio.h>
#include <string.h>

typedef struct
{
    char title[100];
    char author[100];
    int pages;
} book_t;

void printBook(book_t book)
{
    printf("\nBook Title: %s, Author: %s, Pages: %d\n",
           book.title, book.author, book.pages);
}

int main(void)
{
    book_t book;

    printf("Enter book title: ");
    fgets(book.title, sizeof(book.title), stdin);
    book.title[strcspn(book.title, "\n")] = '\0';

    printf("Enter author: ");
    fgets(book.author, sizeof(book.author), stdin);
    book.author[strcspn(book.author, "\n")] = '\0';

    printf("Enter number of pages: ");
    scanf("%d", &book.pages);

    printBook(book);

    return 0;
}
