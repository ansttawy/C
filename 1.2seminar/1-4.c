#include <stdio.h>
int main()
{
    int a[1000];
    int n;
    int b = 0;
    scanf("%i", &n);
    for (int i = 0; i < n; ++i)
        scanf("%i", &a[i]);

    int left, right;
    scanf("%i%i", &left, &right);

    for (int i = left; i < right; ++i)
    {   
        b++;
    }
    n = n - b;

    for (int i = left ; i < right ; ++i)
    {
        a[i] = a[i+b];

    }

    for (int i = 0; i < n; ++i)
        printf("%i ", a[i]);
    
    printf("\n");

}