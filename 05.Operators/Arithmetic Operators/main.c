#include <stdio.h>
#include <stdlib.h>

int main() {

    float a;
    float b;
    float c;

    printf("Enter A operand (float): ");
    scanf("%f", &a);

    printf("Enter B operand (float): ");
    scanf("%f", &b);

    printf("\n");

    c = a + b;
    printf("c = a + b --> %9.3f\n", c);
    
    c = a - b;
    printf("c = a - b --> %9.3f\n", c);
    
    c = a * b;
    printf("c = a * b --> %9.3f\n", c);
    
    c = a / b;
    printf("c = a / b --> %9.3f\n", c);
    
    // c = a % b;
    // printf("c = a %% b --> %9.3f\n", c);
    

    return EXIT_SUCCESS;
}