#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char** p = (char**)malloc(sizeof(char*) * 14);
    *p = (char*)malloc(sizeof(char) * 14);
    if(p == NULL)
      printf("Error. Can't allocate memory!\n");
    if(*p == NULL)
      printf("Error. Can't allocate memory!\n");
    strcpy( *p, "Cats and dogs");
    printf("%s\n", *p);
    free(*p);
    free(p);
}