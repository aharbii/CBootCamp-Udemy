#include <stdio.h>
#include <stdlib.h>

/**********************************************************
 * Bitwise Bitmask:
 * 
 * & --> Bit Clearing --> Mask is 1 -> input pass 
 * & --> Bit Clearing --> Mask is 0 -> result is 0
 * 
 * & --> Bit Testing  --> Mask is 1 -> input pass 
 * & --> Bit Testing  --> Mask is 0 -> result is 0 
 * 
 * | --> Bit Setting  --> Mask is 1 -> result is 1
 * | --> Bit Setting  --> Mask is 0 -> input pass
 * 
 * ^ --> Bit Toggling --> Mask is 1 -> input toggle
 * ^ --> Bit Toggling --> Mask is 0 -> input pass
**********************************************************/


int main() {

    // Setting Nth Bit
    // e.g. set bit [6] 

    // method 1
    uint8_t data = 0b10101010;
    uint8_t mask = 0b01000000;
    uint8_t result;
    result = data | mask;

    // method 2
    uint8_t data = 0b10101010;
    uint8_t mask = (1 << 6);
    uint8_t result;
    result = data | mask;
    // ================================================ //
    // Clearing Nth Bit
    // e.g. clear bit [5]

    // method 1
    uint8_t data = 0b10101010;
    uint8_t mask = 0b11011111;
    uint8_t result;
    result = data & mask;

    // method 2
    uint8_t data = 0b10101010;
    uint8_t mask = (1 << 5);
    uint8_t result;
    result = data & mask;
    // ================================================ //
    // Selecting Nth Bit
    // e.g. sel bits [3:5]
    uint8_t data = 0b11101001;
    uint8_t shifted = data >> 3;
    uint8_t mask = 0b00000111;
    uint8_t result;
    result = shifted & mask;


    return EXIT_SUCCESS;
}