#include <stdio.h>
#include <ctype.h>


void encrypt(char* str, int k)
{   
    for(int i = 0; str[i] != '\0'; ++i)
    {  
        char x = str[i];
        if(isupper(x))
        {   

            if ((x+k) <= 90 && (x+k)>=65)
            {
                str[i] = x + k;
            }
            else if ((x+k) > 90 && (x+k)>=65)
            {
                str[i] = 65 - (90 - x) + (k - 1);
            }
        }
        if(islower(x))
        {   

            if ((x+k) <= 122 && (x+k)>=97)
            {
                str[i] = x + k;
            }
            else if ((x+k) > 122 && (x+k)>=97)
            {
                str[i] = 97 - (122 - x) + (k - 1);
            }
        }

    }

}

int main()
{   
    int k;
    scanf("%i", &k);
    char str[201];
    scanf("%200[^\n]", str);
    encrypt(str, k);
    printf("%s", str);

}