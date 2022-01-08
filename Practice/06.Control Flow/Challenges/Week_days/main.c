#include <stdlib.h>
#include <stdio.h>

typedef enum {
    Monday = 1,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
} days;

int main() {

    printf("Monday value is %d\n", Monday);
    printf("Sunday value is %d\n", Sunday);

    days day;
    printf("Enter day: ");
    scanf("%u", &day);

    switch (day) {
        case Monday:
            printf("Monday\n");
            break;
        case Tuesday:
            printf("Tuesday\n");
            break;
        case Wednesday:
            printf("Wednesday\n");
            break;
        case Thursday:
            printf("Thursday\n");
            break;
        case Friday:
            printf("Friday\n");
            break;
        case Saturday:
            printf("Saturday\n");
            break;
        case Sunday:
            printf("Sunday\n");
            break;
        default:
            printf("Unvalid Input\n");
            break;
    }
    

    return EXIT_SUCCESS;
}