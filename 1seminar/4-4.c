#include <stdio.h>
#include <limits.h>
int main() 
{
    int n;
    scanf("%i", &n);

    n--;
    int b;
    scanf("%i", &b);
    int c = -1;

    for (int i = 0; i < n; ++i) 
    {
        int a;
        scanf("%i", &a);

        if (a > b && (c == 0 || c == -1))
        {
            c = 0;
        }
        else if (a < b && (c == 1 || c == -1))
        {
            c = 1;
        }
        else if (a == b && (c == 2 || c == -1))
        {
            c = 2;
        }
        else
        {
            c = 3;
        }
        b = a;
    }

    if (c == 0)
    {
        printf("Increasing");
    }
    else if (c == 1)
    {
        printf("Deccreasing");
    }
    else if (c == 2)
    {
        printf("Equal");
    }
    else
    {
        printf("None");
    }
}