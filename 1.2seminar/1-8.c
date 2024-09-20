#include <stdio.h>
int main()
{
    int a[1000];
    int n;
    int d[1000];

    scanf("%i", &n);
    for (int i = 0; i < n; ++i)
        scanf("%i", &a[i]);

    int k;
    scanf("%i", &k);

    for (int i = 0; i < n; ++i)
        d[(i + k)%n] = a[i];
    
    
    
    for (int i = 0; i < n ; ++i)
        {
        a[i] = d[i];
        }
    
    for (int i = 0; i < n; ++i)
        printf("%i ", d[i]);
    
    printf("\n");

}