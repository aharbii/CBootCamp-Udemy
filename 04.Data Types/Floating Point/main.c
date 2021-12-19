#include <stdio.h>
#include <stdlib.h>

int main() {

    double decimal_digits = 1.23456789;

    double world_population = 7.891E9;

    double plank_constant = 6.626E-34;

    printf("%12.1f | 1 decimal digit\n", decimal_digits);
    printf("%12.3f | 3 decimal digits\n", decimal_digits);
    printf("%12.1f | world_population, decimal, 1 digit of precision\n", world_population);
    printf("%12.1e | world_population, scientific, 1 digit of precision\n", world_population);
    printf("%12.3e | world_population, scientific, 3 digit of precision\n", world_population);
    printf("%12.1E | plank_constant, scientific, 1 digit of precision\n", plank_constant);
    printf("%12.3E | plank_constant, scientific, 3 digit of precision\n", plank_constant);

    return EXIT_SUCCESS;
}