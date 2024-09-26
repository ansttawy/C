#include <stdio.h>
#include <math.h>

double num(int n)
{   
    double result;
    for(int i = 1; i <= n ; ++i)
    {
        result += pow(-1, i + 1)/(double)(2 * i -1);
    }
    
    return 4*result;
}

int main() 
{   
    int n;
    scanf("%i", &n);
    printf("%lf\n", num(n));
}