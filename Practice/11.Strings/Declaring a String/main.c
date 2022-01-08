#include <stdio.h>
#include <stdlib.h>

/******************************************************************************
 * --> A string is nothing more than an array of characters.
 * --> So, there are no built-in operators in C for processing strings.
 * --> The standard library provides many functions for strings.
 * --> Also remember about the null character!
******************************************************************************/

int main() 
{

    char str[7] = "Hello!";
    str[0] = 'Y'; // Yello!

    // str = "Another string"; --> Error

    const char string[] = "Hello!";
    // str[0] = 'Y'; --> Error (compilation)

    char *string_ptr = "Hello!"; // --> constant string by default
    // string_ptr[0] = 'Y' --> Error (runtime)
    string_ptr = "Another string"; // Allowed
    printf("%s\n", string_ptr); // --> Another string
    printf("%s\n", &string_ptr[8]); // --> string

    return 0;
}