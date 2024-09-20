#include <stdio.h>
int main()
{
    int a[1000];
    int n;
    int b = 0;
    int c = 0;
    scanf("%i", &n);
    for (int i = 0; i < n; ++i)
        scanf("%i", &a[i]);

    for (int i = 0; i < n; ++i)
    {   
        if ( a[i] < 0 )
            b++;
    }

    for (int i = 0; i < n ; ++i)
    {   
        if ( a[i] >= 0 )
        {
            a[c] = a[i];
            ++c;
        }
    }

    n = n - b;

    for (int i = 0; i < n; ++i)
        printf("%i ", a[i]);
    
    printf("\n");

}