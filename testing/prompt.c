#include "main.h"

int main(void)
{
        char *buffer = NULL;
        size_t n;

        printf("$ ");
        getline(&buffer, &n, stdin);
        printf(">>>>>> %s\n", buffer);
}

