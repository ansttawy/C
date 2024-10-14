#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char** get_test_strings()
{
    char** p = (char**)malloc(sizeof(char*) * 4);
    if(p == NULL)
      printf("Error. Can't allocate memory!\n");
    p[0] = (char*)malloc(sizeof(char)*4);
    p[1] = (char*)malloc(sizeof(char)*6);
    p[2] = (char*)malloc(sizeof(char)*9);
    p[3] = (char*)malloc(sizeof(char));
    
    strcpy(p[0], "Cat");
    strcpy(p[1], "Mouse");
    strcpy(p[2], "Elephant");
    p[3] = NULL;
    return p;
}

void print_strings(FILE* stream, char** string_array) 
{
    for (size_t i = 0; string_array[i] != NULL; ++i)
        fprintf(stream, "%s ", string_array[i]);
    fclose(stream);
}

void destroy_strings(char*** p_string_array)
{
    for (size_t i = 0; p_string_array[i] != NULL; ++i){
        free(*p_string_array[i]);
    }
    free(p_string_array);
    *p_string_array = NULL;

}

int main()
{
    char** p = get_test_strings();
    FILE* f=fopen("lala.txt", "w");
    print_strings(f, p);
    fclose(f);
    destroy_strings(&p);
}