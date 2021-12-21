#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[] = {9, 8, 7, 6, 5};
    for (int i = 0; i < (sizeof(x) / sizeof(x[9])); i++)
    {
        printf("x[%d]: %d\n", i, x[i]);
    }
    
    /*******************************************************************
     * Let's recall:
     * --> and array is an ordered collection of items of the same type.
     * --> a pointer holds the address of other data.
     *
     *
     * Can we access the elements of an array through pointers? yes!
    ********************************************************************/
    printf("Access an element of x through the pointer:\n");
    int *p = &x[2];
    printf("x[2]: %d, *p: %d\n", x[2], *p);

    *p = 0;
    printf("x[2]: %d, *p: %d\n", x[2], *p);

    printf("Array address:\n");
    printf("&x[0]: 0x%llX\n", (uint64_t) &x[0]);
    printf("x:     0x%llX\n", (uint64_t) x);

    printf("&x[1]: 0x%llX\n", (uint64_t) &x[1]);
    printf("x:     0x%llX\n", (uint64_t) x + sizeof(int));
    
    // int *alias = x;
    // int *allias = &x[0];

    p = x;

    printf("Display x through the pointer:\n");
    for (int i = 0; i < (sizeof(x) / sizeof(x[0])); i++)
    {
        printf("x[%d]: %d, p[%d]: %d\n", i, x[i], i, p[i]);
    }

    printf("Set x to 0, 1, 2, 3, 4 through the pointer:\n");
    for (int i = 0; i < (sizeof(x) / sizeof(x[0])); i++)
    {
        p[i] = i;
        printf("x[%d]: %d, p[%d]: %d\n", i, x[i], i, p[i]);
    }
    
    

    return 0;
}