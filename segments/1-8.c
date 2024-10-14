#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct book 
{
    char* title;
    int pages;
    float price;
};
typedef struct book Book;

void print_book(struct book b) 
{
    printf("Book info:\n");
    printf("Title: %s\nPages: %d\nPrice: %g\n\n", b.title, b.pages, b.price);
}

int main() 
{
    char* pb = (char*)malloc(sizeof(char) * 12);
    if(pb == NULL)
        printf("Error. Can't allocate memory!\n");
    Book* p = (Book*)malloc(sizeof(Book)*3);
    if(p == NULL)
        printf("Error. Can't allocate memory!\n");
    strcpy(pb, "Don Quixote");
    p->title = pb;
    p->pages = 1000;
    p->price = 750.00;
    print_book(*p);
    free(pb);
    free(p);
}