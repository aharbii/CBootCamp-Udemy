/********************************************************************
 * What can be declared constant:
 *      --> The value of the pointer (the address stored in it).
 *      --> The value pointed to by the pointer.
 *      --> Both.
********************************************************************/


#include <stdio.h>
#include <stdlib.h>

int main()
{

    /* Constant Pointers --> The address stored in the pointer cannot be changed */
    int some_data = 123;
    int *const my_ptr = &some_data;

    /* Pointers to Constants --> The value pointed to must not be changed by the pointer */
    int another_data = 123;
    const int *another_ptr = &another_data;

    /* Everything Constant --> Neither the pointer nor the value it points to can be changed */
    int final_data = 123;
    const int *const final_ptr = &final_data;

    return EXIT_SUCCESS;
}