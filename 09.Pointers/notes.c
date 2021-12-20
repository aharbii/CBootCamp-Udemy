/******************************************************************************
 * What are Pointers:
 *      --> Reference to the data by address.
 *      --> The strength and fear of the C programming language.
 *      --> Widely used in the embedded field to refer peripheral registers.
 *      --> Widely used in system programming in general.
 * 
 * Declaration: 
 *      --> int *ptr_1
 *      --> char *ptr_2
 *      --> float *ptr_3
 * 
 * Why declare the pointer type?
 *      --> Pointers arithmetic -> see array section.
 *      --> Type checking: you can only assign the correct data-type.
 * 
 * Pointers Operations:
 *      --> casting
 *      --> void pointers 
 * 
 * Definition:
 *      --> int *some_ptr = NULL
 *         --> NULL is equivalent to zero.
 *         --> NULL is guaranteed not point to any memory location.
 *         --> Defined in stddef.h but included also in stdio.h and stdlib.h
 * 
 * Assignment: 
 *      --> int *some_ptr = &data
 *      --> The unaray address-of operator & gives the address of its operand.
 *      --> The data address type should be the same as the pointer type.
 * 
 * Pointer casting:
 *      --> int *some_ptr = (int *) &data
 *      --> uint32_t *some_ptr = (uint32_t *) 0x100C
 *      --> Useful with registers! Embedded Systems
 * 
 * Void pointer:
 *      --> void *some_ptr = &data
 *      --> Can point to any data-type.
 *      --> No type checking, use with care!
 * 
 * Indirection:
 *      --> A pointer provides an indirect, means of accessing the value of
 *          a particular data item.
 * 
 *      --> The operation we use to access the data stored in the memory
 *          address stored in the pointer.
 * 
 *      --> int apples = 12;
 *          int *ptr = &apple;
 * 
 *      --> Indirection:
 *                      --> int num_1 = *ptr;      // num_1 = 12
 *                      --> int num_2 = *ptr + 8;  // num_2 = 20
 * 
 *                      --> *ptr = 99;             // => apples = 99
 *                      --> (*ptr)++;              // => apples = 100
 * 
 * 
 *      --> Indirection & void pointers:
 *                      --> int apples = 12;
 *                      --> void *ptr = &apples;
 *                      --> int num_1 = *ptr;   --------------> error
 *                      --> int num_1 = *((int *) ptr);     // => num_1 = 12
******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() {

    char a = 'A';
    char *ptr = &a;
    
    printf("1 | %c , %c, %llu\n", a, *ptr, (uint64_t) ptr);

    char b = 'B';
    ptr = &b;

    printf("2 | %c , %c, %llu\n", b, *ptr, (uint64_t) ptr);

    *ptr = 'C';
    printf("3 | %c , %c, %llu\n", b, *ptr, (uint64_t) ptr);

    (*ptr)++;
    printf("4 | %c , %c, %llu\n", b, *ptr, (uint64_t) ptr);


    unsigned int x = 'A';
    ptr = (char *) &x;
    printf("5 | %u, %c, %llu\n", x, *ptr, (uint64_t) &x);

    unsigned int y = 'B';
    ptr = (char *) &y;
    printf("6 | %u, %c, %llu\n", y, *ptr, (uint64_t) &y);

    *ptr = 'C';
    printf("7 | %u, %c, %llu\n", y, *ptr, (uint64_t) &y);

    (*ptr)++;
    printf("8 | %u, %c, %llu\n", y, *ptr, (uint64_t) &y);

    x = 0xABCD1234;
    ptr = (char *) &x;      // overflow --> turc
    printf("9 | %X, %X, %c\n", x, *ptr, *ptr);

    *ptr = 'C';
    printf("10 | %u, %X, %X, %c\n", x, x, *ptr, *ptr);
    
    unsigned *uint_ptr = (unsigned *)ptr;
    *uint_ptr = 'C';
    printf("11 | %u, %X, %X, %c\n", x, x, *ptr, *ptr);


    return 0;

}