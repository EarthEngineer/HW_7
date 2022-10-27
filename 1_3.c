#include <stdio.h>
#include <stdlib.h>

int main()
{
    char** p = (char**)malloc(sizeof(char*));

    *p = (char*)malloc(sizeof(char)*14);

    strcpy(*p, "Cats and dogs");;

    printf("%s\n", *p);

    free(*p);
    free(p);
}
