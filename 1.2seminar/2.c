#include <stdio.h>

int main()
{
    int n, m;
    scanf("%i%i", &n, &m);

    int a[100][100];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
            scanf("%i", &a[i][j]);
    }

    int sums[100] = {0};
    
    for (int j = 0; j < m; ++j)
    {
        for (int i = 0; i < n; ++i)
            sums[j] += a[i][j];
    }

    for (int j = 0; j < m; ++j)
        printf("%i ", sums[j]);
}

