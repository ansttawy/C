#include <stdio.h>
#include <math.h>

int main()
{   
    float x1,y1, r1;
    float x2, y2, r2;
    scanf("%f%f%f", &x1,&y1, &r1);
    scanf("%f%f%f", &x2,&y2, &r2);
    const double eps = 1e-5;
    float dist;
    dist = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    if (dist > r1 + r2) 
    {
    printf("Do not intersect\n");
    } 
    else if 
        (fabs(dist - (r1 + r2)) < eps)
    printf("Touch\n");
    else 
    printf("Intersect\n");
  
}