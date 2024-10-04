#include <stdio.h>

int exchange(int* pa, int b)
{
    int l = *pa;
    *pa = b;
    return l;
    
}

int main() 
{
    int a = 10;
    printf("%i\n", exchange(&a, 20));
    printf("%i\n", a);                 
}