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


    for (int j = 0; j < m; ++j)
    {
        for (int i = 0; i < n; ++i)
        
        {   
            int min1 = i;
            for (int k = i + 1; k < n; ++k)

            {
                if (a[k][j] < a[min1][j])
                    min1 = k;
            }
        
            int temp = a[i][j];
            a[i][j] = a[min1][j];
            a[min1][j] = temp;
        }
    }


    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
            printf("%i ", a[i][j]);

        printf("\n");
    }

}
