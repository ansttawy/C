#include <stdio.h>

int trib(int x)
{   
    int a = 0, b = 0, c = 1; 

    for (int i = 1; i < x; ++i )
    {
       int temp = a + b + c;
       a = b;
       b = c;
       c = temp;

    }
    return b;
    
}

int main()
{
    int n;
    scanf("%i", &n);
    printf("%i", trib(n));
}