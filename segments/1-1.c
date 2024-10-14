#include <stdio.h>
#include <stdlib.h>
int main()
{
    int* p = (int*)malloc(sizeof(int));
    if(p == NULL)
      printf("Error. Can't allocate memory!\n");
    *p = 123;
    printf("%i\n", *p);
    free(p);
}