#include <stdio.h>

int main()
{
    int n;
    scanf("%i", &n);

    int a[1000];
    for (int i = 0; i < n; ++i)
    {
        scanf("%i", &a[i]);
    }

    int c[1000] = {0};

    for (int i = 0; i < n; ++i)
        {   
            int d = 0;
            int sum = 0;
            int num = a[i];
            while (num > 0)
            {
                d = num % 10;
                num = num / 10;
                sum = sum + d;
            }

            c[i] = sum;
        }

    for (int j = 0; j < n; ++j)
    {   
        
        int min_index = j;
        for (int i = j + 1; i < n; ++i)
        {
            if (c[i] < c[min_index])
                min_index = i;
        }

        int temp = c[j];
        int temp1 = a[j];
        c[j] = c[min_index];
        c[min_index] = temp;
        a[j] = a[min_index];
        a[min_index] = temp1; 
    }

    for (int i = 0; i < n; ++i)
        printf("%i ", a[i]);
    printf("\n");

}