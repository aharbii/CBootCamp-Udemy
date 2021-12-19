/**
 * === Spaceship Thrust === 
 *
 * We are working on the man-machine interface of a revolutionary spaceship.
 * Define enumeration constants for different predefined thrust levels, these
 * levels will be used to communicate with the engine controller.
 * 
 * The thrust levels are:
 *  - none:     0
 *  - low:      5
 *  - medium:   9
 *  - high:     12
 *  - maximum:  20
 * 
 * Then launch the rocket!
 * We now want to log the thrust level in some critical points:
 *  - set thrust to none ---> log ready to go level
 *  - set thrust to maximum ---> log take off level
 *  - set thrust to medium ---> log entry into the ionosphere
 *  - set thrust to low ---> log traveling to deep space
 * 
 */

#include <stdio.h>
#include <stdlib.h>

typedef enum {
    none = 0,
    low = 5, 
    medium = 9,
    high = 12,
    maximum = 20
} thrust_level;



int main() {

    thrust_level spaceship_thrust = none;
    printf("Ready to go, thrust level is now %d\n", spaceship_thrust);

    spaceship_thrust = maximum;
    printf("Ready to take off, thrust level is now %d\n", spaceship_thrust);

    spaceship_thrust = medium;
    printf("Ready to enter the ionoshpere, thrust level is now %d\n", spaceship_thrust);

    spaceship_thrust = low;
    printf("We are now traveling to deep space, thrust level is now %d\n", spaceship_thrust);

    return EXIT_SUCCESS;
}