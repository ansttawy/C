#include <stdio.h>
#include <ctype.h>
#include <string.h>


int is_palindrom(char str[])
{   
    int r = 1;
    size_t len = strlen(str);
    for (int i = 0; i < len / 2; ++i ) 
    {
        if (str[i] != str[len - i -1])
        {
            r = 0;
            break;
        }
    }
    return r; 
}
int main() 
{
    char str[201];
    scanf("%s", str);

    if (is_palindrom(str))
        printf("Yes");
    else
        printf("No");
}