#include <stdio.h>
#include <ctype.h>

int main()
{
    char x;
    scanf("%c", &x);
    
    if (isalpha(x))
        printf("Letter");

    else if (isdigit(x))
        printf("Digit");
    else
        printf("Other");

}
