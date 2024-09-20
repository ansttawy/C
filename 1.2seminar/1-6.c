#include <stdio.h>
int main()
{
    int a[1000];
    int n;
    int d[1000];
    int c = 0;
    int e[1000];
    int f = 0;

    scanf("%i", &n);
    for (int i = 0; i < n; ++i)
        scanf("%i", &a[i]);

    for (int i = 0; i < n; ++i)
    {   
        if(a[i] % 2 != 0)
            {
                d[c] = a[i];
                ++c;
            }
    }

    for (int i = 0; i < n; ++i)
    {   
        if(a[i] % 2 == 0)
            {
                e[f] = a[i];
                ++f;
            }
    }

    for (int i = 0; i < c; ++i)
        a[i] = d[i];

    int temp1 = 0;
    for (int i = c; i < n; ++i)
        {
            a[i] = e[temp1];
            ++temp1;
        }


    for (int i = 0; i < n; ++i)
        printf("%i ", a[i]);
    
    printf("\n");

}