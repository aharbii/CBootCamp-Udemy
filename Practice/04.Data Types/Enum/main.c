#include <stdio.h>
#include <stdlib.h>

enum months {
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
};


int main() {

    enum months my_fav_month = JUL;
    enum months my_worst_month = DEC;

    printf("My favorite months: %d\n", my_fav_month);
    printf("My worst month: %d\n", my_worst_month);

    return EXIT_SUCCESS;
}