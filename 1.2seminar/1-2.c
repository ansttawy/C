#include <stdio.h>
int main()
{
    int a[1000];
    int n;
    scanf("%i", &n);
    for (int i = 0; i < n; ++i)
        scanf("%i", &a[i]);

    int b, c;
    scanf("%i %i", &b, &c);
    
    
    for (int i = n ; i > c + 1 ; --i)
    {
        a[i] = a[i-1];

    }

    a[c + 1] = b;
    n = n + 1;
    for (int i = 0; i < n; ++i)
        printf("%i ", a[i]);
    
    printf("\n");

}