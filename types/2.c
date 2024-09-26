#include <stdio.h>
unsigned long long placements(unsigned int n, unsigned int k) 
{
    unsigned long long result = 1;
    for (unsigned int i = n - k + 1; i <= n; ++i)
    {
        result *= i;
    }
    return result;
}

int main() 
{   
    unsigned int n;
    scanf("%u", &n);
    unsigned int k;
    scanf("%u", &k);
    printf("%llu\n", placements(n, k));
}