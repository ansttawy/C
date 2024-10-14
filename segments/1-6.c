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
  Book** p = (Book**)malloc(sizeof(Book*));
  *p = (Book*)malloc(sizeof(Book));
  if(*p == NULL)
      printf("Error. Can't allocate memory!\n");
  if(p == NULL)
      printf("Error. Can't allocate memory!\n");
  strcpy((**p).title, "Don Quixote");
  (**p).pages = 1000;
  (**p).price = 750.0;
  print_book(**p);
  free(*p);
  free(p);
}
