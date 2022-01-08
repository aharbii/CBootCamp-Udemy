/**
 * === Bunch Of Constants === 
 *
 * Define the following numeric constants:
 *  - moonLanding: 1969
 *  - speedOfLight: 299792458
 *  - pi: 3.142
 *  - hexaDead: 0xDEAD
 *  - hexaSecret: 51966
 * 
 * Print with following formats:
 *  - moonLanding:
 *      - integer, 10 characters width, padded with spaces
 *      - integer, 10 characters width, padded with zeroes
 *  - speedOfLight:
 *      - floating point without digits after decimal point
 *      - scientific notation with 3 digit of precision
 *  - pi:
 *      - floating point with 2 digits of precision
 *      - scientific notation with 1 digit of precision, sign forced
 *  - hexaDead:
 *      - unsigned hexadecimal integer, uppercase, leading 0x
 *      - unsigned integer, 6 characters width
 *  - hexaSecret:
 *      - unsigned hexadecimal integer, lowercase, no leading 0x
 * 
 */

#include <stdio.h>
#include <stdlib.h>

#define PI 3.142
#define MOON_LANDING 1969
#define SPEED_OF_LIGHT 299792458.0
#define HEXA_DEAD 0xDEADU
#define HEXA_SECRET 51966U

int main() {

    printf("Moon landing: %10d\n", MOON_LANDING);
    printf("Moon landing: %010d\n", MOON_LANDING);

    printf("Speed of light: %.0f\n", SPEED_OF_LIGHT);
    printf("Speed of light: %.3e\n", SPEED_OF_LIGHT);

    printf("PI: %.2f\n", PI);
    printf("PI: %+.1e\n", PI);

    printf("HexaDead: 0x%X\n", HEXA_DEAD);
    printf("HexaDEAD: %6u\n", HEXA_DEAD);

    printf("HexaSecret: %x\n", HEXA_SECRET);



    return EXIT_SUCCESS;
}