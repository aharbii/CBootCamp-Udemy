#include <stdio.h>
#include <stdlib.h>

int main() {


    int a, b = 3;
    printf("b = %d\n", b);

    a = b;
    printf("a = b --> a = %d\n", a);

    a += b;
    printf("a += b --> a = %d\n", a);

    a -= b;
    printf("a -= b --> a = %d\n", a);

    a *= b;
    printf("a *= b --> a = %d\n", a);

    a /= b;
    printf("a /= b --> a = %d\n", a);

    a %= b;
    printf("a %%= b --> a = %d\n", a);

    return EXIT_SUCCESS;
}