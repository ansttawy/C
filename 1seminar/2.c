#include <stdio.h>

int main()
{
    int a , b , c ;

    scanf("%i %i %i", &a, &b, &c);

    if ( b == a + 1 && c == a + 2)

        printf("Consecultive Increasing\n");

    else if ( b == a - 1 && c == a - 2)

        printf("Consecultive Decreasing\n");

    else if ( a < b  && b < c )

        printf("Incresing\n");

    else if (a < b && b < c)

        printf("Decreasing\n");

    else if ( a == b && b == c)

        printf("Equal\n");

    else

        printf("None\n");
}