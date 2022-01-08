#include <stdio.h>
#include <stdlib.h>

#define LEN 5

void array_maker(int len) 
{
    int variable_lenght_array[len];

    for (int i = 0; i < len; i++)
    {
        variable_lenght_array[i] = i;
    }
    
    for (int i = 0; i < len; i++)
    {
        printf("%d ", variable_lenght_array[i]);
    }
}

int main()
{

    /* Error */
    // const int LEN = 5;
    // it must be a macro 

    int x[LEN] = {1, 2, 3};
    for (int i = 0; i < LEN; i++)
    {
        printf("%d ", x[i]);
    }

    while (1)
    {
        int len;
        printf("\nEnter the length: ");
        scanf("%d", &len);
        if (len < 1)
        {
            break;
        }

        array_maker(len);
        
    }

    
    
    return 0;
}