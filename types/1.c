#include <stdio.h>
unsigned long long fact(int n) 
{
    unsigned long long result = 1;
    for (unsigned long long i = 1; i <= n; ++i)
        result *= i;
    return result;
}

unsigned long long main() 
{
    int k;
    scanf("%i", &k);
    printf("%llu\n", fact(k));
}