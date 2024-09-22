#include <stdio.h>


int is_even(int a)
{   
    int result = 0;
    if(a % 2 == 0)
        {
            result = 1;
        }
    return result;
}

int main()
{   
    printf("%i\n", is_even(90));
    printf("%i\n", is_even(91));
}