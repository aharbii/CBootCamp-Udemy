#include <stdio.h>
#include <stdlib.h>

#define ARRAY_LEN 100
#define CALC_ARRAY_LEN(x) (sizeof((x)) / sizeof((x)[0]))
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main()
{
    double array[ARRAY_LEN];
    printf("Array Length: %d\n", ARRAY_LEN);

#undef ARRAY_LEN
#define ARRAY_LEN 999

    printf("New array len: %d\n", ARRAY_LEN);

    printf("Source file: \"%s\", %d\n", __FILE__, __LINE__);
    printf("Comilation time: %s\n", __TIME__);

    int array_len =  sizeof(array) / sizeof(array[0]);
    printf("array len: %d\n", array_len);

    array_len = CALC_ARRAY_LEN(array);
    printf("array len: %d\n", array_len); 

    int a = -1;
    int b = 5;
    printf("MAX(%d, %d): %d\n", a, b, MAX(a, b));

    int b_before = b;
    printf("MAX(%d, %d): %d\n", a, b, MAX(a, b++));
    printf("b before increment: %d\n", b_before);
    printf("b after increment: %d\n", b);
    
    return 0;
}