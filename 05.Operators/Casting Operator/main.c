#include <stdio.h>
#include <stdlib.h>

/**********************************************************
 * Implicit Conversions:                                  
 *                                                        
 *      - Integer Promotion:  --> char --> short int      
 *              || get promoted to int in memory during   
 *                 performing an operation                
 *      - Wider Promotion:                                
 *              --> Arithmetic Conversion Hierarchy:      
 *                          + int                         
 *                          + unsigned int                
 *                          + long int                    
 *                          + unsigned long int           
 *                          + long long int               
 *                          + unsigned long long int      
 *                          ==========================    
 *                          + float                       
 *                          + double                      
 *                          + long double                 
**********************************************************/


int main() {

    // Integer Promotion Example
    // example 1
    char a = 100, b = 5, c = 10;
    char d = (a * b) / c;       // --> PS: note that (a * b) result is 500 which is larger than maximum char values
                                //         but because of integer promption we had not faced a problem.
    printf("d = %d\n", d);

    // example 2
    char a = 0xFF;               // -1
    unsigned char b = 0xFF;      // 255
    printf("a == b --> %d\n", a == b); // --> PS: note that because of integer promotion the values of a and b converted into
                                       //         thier actucal values, then (a == b) is false.  

    // Wider data types
    // exmaple 1
    short int a = 123;
    long int b;
    b = a; // implicit conversion
    printf("a: %d\n", a);
    printf("b: %ld\n", b);

    // example 2
    int a = 1;
    long int b = 2;
    double c = 3.3;

    b = b + a; // implicit conversion: a is promoted to long int
    c = c * b; // implicit conversion: b is promoted to double
    
    return EXIT_SUCCESS;
}