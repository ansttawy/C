#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float* get_geometric_progression(float a, float r, int n)
{
    float* pr = (float*)malloc(sizeof(float) * n);
    if(pr == NULL)
      printf("Error. Can't allocate memory!\n");
    for (int i = 0; i < n; ++i) 
        pr[i] = a * pow(r, i);
    

    return pr;
}

int main()
{
    float a = 3.0;
    float r = 3.0;
    int n = 10;

    float* progr = get_geometric_progression(a, r, n);
    for (int i = 0; i < n; ++i) 
        printf("%f ", progr[i]);
    free(progr);
}

