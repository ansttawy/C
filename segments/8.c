#include <stdio.h>


int adder(int n) 
{
    static int sum = 0; 
    sum += n;
    return sum;
}

int main() 
{
    printf("%d\n", adder(10)); 
    printf("%d\n", adder(15));  
    printf("%d\n", adder(70));
}

