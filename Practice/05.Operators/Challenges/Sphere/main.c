#include <stdio.h>
#include <stdlib.h>

/**
 * === Sphere === 
 *
 * Calculate surface and volume of a sphere
 * 
 * Goals:
 *  - prompt user to enter the radius
 *  - calculate the surface area
 *  - calculate the enclosed volume
 *  - print the radius and the results in decimal format (2 digit of precision)
 *  - print the radius and the results in scientific notation (3 digits of precision)
 *  - check the results
 */

#define PI 3.14159265359

int main() {

    double radius;
    printf("Enter radius: ");
    scanf("%lf", &radius);

    double area;
    area = 4 * PI * radius * radius;
    double volume;
    volume = (4.0/3) * PI * radius * radius * radius;

    printf("=================\n");

    printf("radius = %.2lf cm\n", radius);
    printf("area   = %.2lf cm\n", area);
    printf("volume = %.2lf cm\n", volume);

    printf("=================\n");

    printf("radius = %.3e cm\n", radius);
    printf("area   = %.3e cm\n", area);
    printf("volume = %.3e cm\n", volume);

    return EXIT_SUCCESS;
}