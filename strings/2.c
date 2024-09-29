#include <stdio.h>
#include <string.h>

int main() 
{
    char str1[201];
    char str2[201];
    scanf("%s%s", str1, str2);
    size_t len1 = strlen(str1);
    size_t len2 = strlen(str2);
    
    if (len1 == len2)
    {
        for(int i = 0; str1[i] != '\0'; ++i)
        {
            printf("%c%c",str1[i], str2[i]);
        }
    }
    if (len1<len2)
    {
        for(int i = 0; i < len1 ; ++i)
        {
            printf("%c%c",str1[i], str2[i]);
        }
        for(int i = len1; str2[i] != '\0'; ++i)
        {
            printf("%c",str2[i]);
        }
    }
    if (len1>len2)
    {
        for(int i = 0; i < len2 ; ++i)
        {
            printf("%c%c",str1[i], str2[i]);
        }
        for(int i = len2; str1[i] != '\0'; ++i)
        {
            printf("%c",str1[i]);
        }
    }

}
