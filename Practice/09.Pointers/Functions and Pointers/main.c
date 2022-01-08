#include <stdio.h>  
#include <stdlib.h>

int sum(int a, int b)
{
    int result = a + b;
    return result;
}

/******************************************************************************
 * if value > 0 --> accumulate value in accumulator => return 0 (SUCCESS)
 * else --> do nothing => return -1 (FAIL)
******************************************************************************/
int accumulate(int *const accumulator, int value)
{
    if (value > 0)
    {
        *accumulator += value;
        return 0;
    }
    else
    {
        return -1;
    }
}

void accumulate_wrapper(int *const accumulator, int value) 
{
    if (accumulate(accumulator, value))
    {
        printf("Warning! value = %d\n", value);
    }
    
}

void print_students(int students)
{   
    printf("Students = %d\n", students);
}

int main()
{
    int girls = 12;
    int boys = 9;
    int students = sum(girls, boys);
    print_students(students);

    int class_1 = 28, class_2 = 19, class_3 = -1;
    int accumulator = 0;

    accumulate_wrapper(&accumulator, class_1);
    accumulate_wrapper(&accumulator, class_2);
    accumulate_wrapper(&accumulator, class_3);

    printf("Accumulator = %d\n", accumulator);

    return EXIT_SUCCESS;
}