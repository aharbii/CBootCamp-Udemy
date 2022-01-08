#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    char my_string[] = "I love programming in C!";

    /* String length */
    int len = sizeof(my_string) - 1; // 1 --> \0 null char
    printf("String len from sizeof:  %d\n", len);

    int str_len = strlen(my_string);
    printf("String len from strlen:  %d\n", str_len);

    int i;
    for (i = 0; my_string[i] != '\0'; i++) {}
    printf("String len from forloop: %d\n", i);

    /************************************************************************** 
     * String Copy: 1.strcpy --> does not run a check up on the number of 
     *                           characters of the source which is going to
     *                           copy inside the destination string.
     *                       --> if this string is much bigger than the destination
     *                           strcpy is going to write outside the destination.
     *                       --> this will crash the program.
     * 
     *              2.strncpy --> Specified length and check before copying.
    **************************************************************************/
    
    /* strcpy */
    char another_string[] = "Programming is funny";
    printf("Before copy: \"%s\" \n", my_string);
    printf("After copy:  \"%s\" \n", strcpy(my_string, another_string));

    /* strncpy */
    char another_long_string[] = "This is a dummy very very very long string .....";
    printf("Before copy: \"%s\" \n", my_string);
    printf("After copy:  \"%s\" \n", strncpy(my_string, "Hello", sizeof(my_string)));

    printf("Before copy: \"%s\" \n", my_string);
    strncpy(my_string, another_long_string, sizeof(my_string));
    my_string[sizeof(my_string) - 1] = '\0';
    printf("After copy:  \"%s\" \n", my_string);

    /************************************************************************** 
     * String Compare: 1.strcmp  --> compare until it finds different characters
     *                           --> if all string characters are equal it
     *                               will return 0.
     *                           --> if second string character is bigger it
     *                               will return negative value.
     *                           --> if first string character is bigger it
     *                               will return positive value.
     *                 2.strncmp --> determined number of characters
    **************************************************************************/

    char str_1[] = "abcx";
    char str_2[] = "abcy";
    printf("strcmp %s, %s: %d\n",str_1, str_2, strcmp(str_1, str_2));
    printf("strcmp %s, %s: %d\n",str_1, str_2, strncmp(str_1, str_2, 3));

    return 0;
}