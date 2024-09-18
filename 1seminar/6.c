#include <stdio.h>
#include <limits.h>
int main() 
{
    int a;
    int b;
    scanf("%i %i", &a, &b);

    int max = INT_MIN;
    int max_n = INT_MIN;

    for (int i = a; i <= b; i++)
    {
        int n = i;
        int c = 1;
        while (n!= 1)
        {   
            c++;

            if ( n % 2 == 0)

                n = n/ 2;

            else 

                n = 3*n + 1;


            
        }

        if ( c > max )
            {
                max = c;
                max_n = i;
            }
    }
    printf("%i %i", max_n, max );
}