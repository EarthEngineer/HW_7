#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char* p = (char*)malloc(sizeof(char) * 8);

    strcpy(p, "Elephant");

    printf("%s\n", p);

    free(p);
}
