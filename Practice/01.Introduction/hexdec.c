#include <stdio.h>
#include <stdlib.h>

int main() {

    printf("===^^===\n");
    printf("Welcome to the Decimal to Hexadecimal Converter!\n");
    
    printf("Enter a number: ");
    int the_number;
    scanf("%d", &the_number);
    
    printf("Decimal representation: %9d\n", the_number);
    printf("Converted to hexadecimal: %9X\n", the_number);



    return EXIT_SUCCESS;
}