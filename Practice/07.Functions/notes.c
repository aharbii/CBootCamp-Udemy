/**********************************************************
 * What are Functions:
 *      --> It's a block of code that performs a specific
 *          task.
 *      --> You can invoke that block of code by making a
 *          function call.
 *      --> A function can be used to execute an action, 
 *          e.g. printf("abc")
 *      --> A function can be used to obtain a result,
 *          e.g. letter = tolower('A')
 *      --> A function can be used to change somehting,
 *          e.g. increment(&count)
 *      --> Functions allow you to encapsulate pieces of 
 *          code, hiding them behind the function name.
**********************************************************/

/**********************************************************
 * Why use Functions:
 *      --> Dividing problem into smaller chunks.
 *      --> Simplify a problem with the black box approach.
 *      --> Improved code readability.
 *      --> Avoid code duplication.
 *      --> Only one place to make changes.
 *      --> Isolating code blocks means isolating bugs.
 *      --> Independent development, testing and debugging.
 *      --> Allow the reuse of already written code.
**********************************************************/


/**********************************************************
 * return_type function_name(type1 id1, type2 id2, ......) {
 *   * function body *
 *   return expression;
 * 
 *      --> Parameter list can be empty
 *      --> Each function must have a different name
 *      --> If return_type is void, the function does not
 *          return any values.
 *      --> Return expression is mandatory if return_type
 *          is not void.
 *      --> Expression is automatically casted to 
 *          return_type
**********************************************************/

/**********************************************************
 *      function_name(type1 id1, type2 id2, ......)
 * 
 *      --> Function call must match parameter list and
 *          return type.
 *      --> Same order of parameters.
 *      --> Return value can be ignored.
**********************************************************/

/**********************************************************
 * Functions Declaration:
 *      --> Tells the compiler how to call the function.
 *      --> Optional, but useful for:
 *             -> Exposing some functions in a header file.
 *             -> Calling a function before defining it.
**********************************************************/

/**********************************************************
 * Scope:
 *      --> Local Variables:  Block Scope, visibility
 *                            limited to the function.
 * 
 *      --> Parameters :      Block Scope, visibility
 *                            limited to the function.
 * 
 *      --> Global Variables: File Scope, visibility 
 *                            extended to the whole file.
 * 
 *      --> Rules: 
 *                -> A local variable hides a gloabl 
 *                   variable with the same name.
 *                -> A block variable hides local and 
 *                   global variables with the same name.
**********************************************************/


#include <stdlib.h>
#include <stdio.h>

int sum(int a, int b) {
    int result = a + b;
    return result;
}

void print_students(int students) {
    printf("students = %d\n", students);
}

int main() {

    int students, girls = 12, boys = 9;
    students = sum(girls, boys);
    print_students(students);

    return EXIT_SUCCESS;
}