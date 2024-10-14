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
  Book b = {"Don Quixote", 1000, 750.0};
  Book** p = (Book**)malloc(sizeof(Book*));
  if(p == NULL)
      printf("Error. Can't allocate memory!\n");
  *p = &b; 
  print_book(**p);
  free(p);
}