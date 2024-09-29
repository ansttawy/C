#include <stdio.h>

int main()
{
    char x;
    scanf("%c", &x);
    
    if ((x >= 97 && x <= 122) || (x >= 65 && x <= 90))
        printf("Letter");

    else if (x >= 48 && x <= 57)
        printf("Digit");
    else
        printf("Other");


}