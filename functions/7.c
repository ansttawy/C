#include <stdio.h>

int count_even( int array[], int size)
{   
    int sum = 0;
    for(int i = 0; i < size ;++i)
    {
        if (array[i] % 2==0)
            ++sum;

    }
    return sum;
}

int main()
{
    int n;
    scanf("%i", &n);
    int a[1000];
    for(int i = 0; i < n ;++i)
        scanf("%i", &a[i]);

    printf("%i", count_even(a, n));
}
