#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int x[] = {1, 2, 3, 4, 5};
    printf("sizeof(x): %lu\n", sizeof(x));
    printf("sizeof(x[0]): %lu\n", sizeof(x[0]));
    printf("sizeof(int): %lu\n", sizeof(int));
    printf("array length: %lu\n\n", (sizeof(x) / sizeof(x[0])));

    int8_t y[] = {1, 2, 3, 4, 5};
    printf("sizeof(y): %lu\n", sizeof(y));
    printf("sizeof(y[0]): %lu\n", sizeof(y[0]));
    printf("sizeof(int8_t): %lu\n", sizeof(int8_t));
    printf("array length: %lu\n", (sizeof(y) / sizeof(y[0])));

    

    return 0;
}