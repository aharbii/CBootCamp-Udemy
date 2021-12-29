#include <stdio.h>
#include <stdlib.h>

int main() {

    char operator;
    double first_number;
    double second_number;

    printf("Enter operation (+, -, *, /): ");
    scanf("%c", &operator);
    
    printf("Enter first number: ");
    scanf("%lf", &first_number);

    printf("Enter second number: ");
    scanf("%lf", &second_number);
    
    double result;
    switch (operator) {
        case '+':
            result =  first_number + second_number;
            break;
        case '-':
            result = first_number - second_number;
            break;
        case '*':
            result = first_number * second_number;
            break;
        case '/':
            result =  first_number / second_number;
            break;
        default:
            printf("Unvalid Operation\n");
            break;
    }

    printf("%.2lf %c %.2lf = %.2lf\n", first_number, operator, second_number, result);

    return EXIT_SUCCESS;
}