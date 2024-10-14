#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct book 
{
    char title[50];
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
  Book* p = (Book*)malloc(sizeof(Book)*3);
  if(p == NULL)
        printf("Error. Can't allocate memory!\n");
  strcpy(p[0].title, "Don Quixote");
  strcpy(p[1].title, "Oblomov");
  strcpy(p[2].title, "the Odyssey");
  (p[0]).pages = 1000;
  (p[1]).pages = 400;
  (p[2]).pages = 500;
  (p[0]).price = 750.0;
  (p[1]).price = 250.0;
  (p[2]).price = 500.0;
  print_book(p[0]);
  print_book(p[1]);
  print_book(p[2]);
  free(p);
}