#include <stdio.h>
#include <stdlib.h>

/**********************************************************
 * Bitwise Operators:
 * 
 * & --> Bitwise AND
 * | --> Bitwise OR
 * ^ --> Bitwise XOR
 * ~ --> Bitwise NOT
 * << --> shift left
 *        --> A << N
 *        --> A x (2^n)
 * >> --> shift write
 *        --> A >> N
 *        --> A / (2^n)
 * 
 * PS: Logical: boolean operation on the whole number.
 *     Bitwise: boolean operation on each raw bit.
 *              --> CPU uses one single clock cycle to do
 *                  this.
**********************************************************/

/**********************************************************
 * Type uint8_t
 * 
 *      A = 12 ----> 0000 1100
 *      B = 5  ----> 0000 0101
 * 
 *      A & B  ----> 0000 0100  =  4
 *      A | B  ----> 0000 1101  =  13
 *      A ^ B  ----> 0000 1001  =  9
 *      A << 1 ----> 0001 1000  =  24
 *      A >> 1 ----> 0000 0110  =  6
**********************************************************/

int main() {

    uint8_t a = 12;
    uint8_t b = 5;

    printf("A = %u\n", a);
    printf("B = %u\n", b);

    printf("A & B = %u\n", a & b);
    printf("A | B = %u\n", a | b);
    printf("A ^ B = %u\n", a ^ b);
    printf("A << 1 = %u\n", a << 1);
    printf("A >> 1 = %u\n", a >> 1);

    return EXIT_SUCCESS;
}