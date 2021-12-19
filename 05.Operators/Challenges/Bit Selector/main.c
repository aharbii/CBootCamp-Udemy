/**
 * === Bit Selector === 
 * 
 * data: 0xABCD
 * 
 * Goal:
 *  - N, M design variables
 *  - make a selector that selects the bits [N:M] included
 *  - print data and result in hexadecimal format, 4 digits wide, zero padding
 *  - check these selection ranges
 *    - [0:3] expected result 0x000D
 *    - [4:7] expected result 0x000C
 *    - [8:11] expected result 0x000B
 *    - [12:15] expected result 0x000A
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

    // [0:3]
    int data = 0xABCD;
    int mask = 0b0000000000001111;
    int result = data & mask;
    printf("result[0:3]:   0x%04X\t --> ", result);
    if (result == 0x000D) {
        printf("Correct\n");
    }
    else {
        printf("False\n");
    }

    // [4:7]
    data = 0xABCD;
    int n = 4;
    int shift = data >> n;
    mask = 0b0000000000001111;
    result = shift & mask;
    printf("result[4:7]:   0x%04X\t --> ", result);
    if (result == 0x000C) {
        printf("Correct\n");
    }
    else {
        printf("False\n");
    }

    // [8:11]
    data = 0xABCD;
    n = 8;
    shift = data >> n;
    mask = 0b0000000000001111;
    result = shift & mask;
    printf("result[8:11]:  0x%04X\t --> ", result);
    if (result == 0x000B) {
        printf("Correct\n");
    }
    else {
        printf("False\n");
    }

    // [12:15]
    data = 0xABCD;
    n = 12;
    shift = data >> n;
    mask = 0b0000000000001111;
    result = shift & mask;
    printf("result[12:15]: 0x%04X\t --> ", result);
    if (result == 0x000A) {
        printf("Correct\n");
    }
    else {
        printf("False\n");
    }


}