#include <stdio.h>
#include <limits.h>
int main() 
{
    int n;
    int b = 0;
    scanf("%i", &n);
    int max = INT_MIN;
    for (int i = 0; i < n; ++i) 
    {
        int a;
        scanf("%i", &a);

        if ( a > max )
        {
            max = a;
            b = 1;
        }
        else if ( a == max)
            b++;


    }

    printf("%i %i", max, b);
}

