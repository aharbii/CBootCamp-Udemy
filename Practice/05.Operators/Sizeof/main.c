#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() 
{
    int variable = 0;
    printf("%lu\n", sizeof(variable));
    printf("%lu\n", sizeof(int));
    printf("%lu\n", sizeof(long int));
    printf("%lu\n", sizeof(long long int));
    printf("%lu\n", sizeof(char));

    printf("--------------------\n");

    printf("%lu\n", sizeof(int16_t));
    printf("%lu\n", sizeof(int32_t));
    printf("%lu\n", sizeof(int64_t));

    printf("--------------------\n");

    printf("%lu\n", sizeof(123 & 456));
    printf("%lu\n", sizeof(123LL & 456LL));
    return 0;
}