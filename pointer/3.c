#include <stdio.h>
#include <math.h>
void cube(float* px)
{
    *px = pow(*px, 3);
}
int main() 
{
    float a;
    scanf("%f", &a);
    cube(&a);
    printf("%f", a);
}