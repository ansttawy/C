#include <stdio.h>

float yearfrac(int year, int day)
{   
    float result;
    if (year % 4==0)
        result = (float)day/366;
    else
        result = (float)day/365;
    return result;
}

int main() 
{   
    int year, day;
    scanf("%i%i", &year, &day);
    printf("%.5f\n", yearfrac(year, day));
}