#include <stdio.h>
#include <stdlib.h>

typedef enum {
    JAN = 1,
    FEB,
    MAR,
    APR,
    MAY,
    JUN,
    JUL,
    AUG,
    SEP,
    OCT,
    NOV,
    DEC
} months;


int main() {

    months my_fav_month = JUL;
    months my_worst_month = DEC;

    printf("My favorite months: %d\n", my_fav_month);
    printf("My worst month: %d\n", my_worst_month);

    return EXIT_SUCCESS;
}