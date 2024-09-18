#include <stdio.h>
#include <limits.h>
int main() 
{
    int n;
    int c = 1;
    scanf("%i", &n);

    int max = INT_MIN;

    while (n!= 1)
    {   
        c++;

        if ( n > max )
        {
            max = n;
        
        }
        printf("%i ", n);

        if ( n % 2 == 0)

            n = n/ 2;

        else 

            n = 3*n + 1;


        
    }

    printf("1\nLength = %i Max = %i", c , max);
}