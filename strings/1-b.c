#include <stdio.h>

int main()
{
    char x;
    scanf("%c", &x);
    
    if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'))
        printf("Letter");

    else if (x >= '0' && x <= '9')
        printf("Digit");
    else
        printf("Other");

}