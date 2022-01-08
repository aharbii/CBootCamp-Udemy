#include <stdio.h>
#include <stdlib.h>

int main() 
{

    int *ptr = NULL;

    if (ptr) // if (ptr != NULL)
    {
        printf(" 1 | Pointed value: %d\n", *ptr);
    }

    int some_value = 123;

    /* Execute only if ptr is null */
    if (!ptr)  // if (ptr == NULL)
    {
        ptr = &some_value;
    }

    /* Execute only if ptr isn't null */    
    if (ptr) // if (ptr != NULL)
    {
        printf(" 2 | Pointed value: %d\n", *ptr);
    }
    
    return 0;
}