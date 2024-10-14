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
    char* pc = (char*)malloc(sizeof(char) * 8);
    if(pc == NULL)
        printf("Error. Can't allocate memory!\n");
    char* pd = (char*)malloc(sizeof(char) * 12);
    if(pd == NULL)
        printf("Error. Can't allocate memory!\n");
    Book* p = (Book*)malloc(sizeof(Book)*3);
    if(p == NULL)
        printf("Error. Can't allocate memory!\n");
    strcpy(pb, "Don Quixote");
    strcpy(pc, "Oblomov");
    strcpy(pd, "the Odyssey");
    p[0].title = pb;
    p[1].title = pc;
    p[2].title = pd;
    (p[0]).pages = 1000;
    (p[1]).pages = 400;
    (p[2]).pages = 500;
    (p[0]).price = 750.0;
    (p[1]).price = 250.0;
    (p[2]).price = 500.0;
    p->pages = 1000;
    p->price = 750.00;
    print_book(p[0]);
    print_book(p[1]);
    print_book(p[2]);
    free(pb);
    free(pc);
    free(pd);
    free(p);
}