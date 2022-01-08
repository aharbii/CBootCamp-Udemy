/**********************************************************************************************************************
 * C Preprocessor:
 *      --> Not part of the compiler
 *      --> Separate step in the compilation process
 *      --> Perform simple text remplacements
 *      --> Pre-process the source files before the actual compilation
 *      --> Preprocessor commands are called directives
 *      --> All these directives begin with a hash symbol (#)
 * 
 *      C source code --> Preprocessor --> Compiler
 * 
 * Why Macros:
 *      --> Used to optimize code in order to save up on CPU time
 *      --> Don't take place during runtime
 * 
 * Preprocessor Directives:
 *      #define  --> Substitutes a preprocessor macro
 *      #include --> Inserts a particular header from another file
 *      #undef   --> Undefines a preprocessor macro
 *      #ifdef   --> Returns true if this macro is defined
 *      #ifndef  --> Returns true if the macro is not defined
 *      #if      --> Tests if a compile time condition is true
 *      #else    --> The alternative to the previous #if
 *      #elif    --> Abbreviation of #else and #if in one statement
 *      #endif   --> Ends preprocessor conditional
 *      #error   --> Prints error message on stderr
 *      #pragma  --> Issues special commands to the compiler
 * 
 * Predefined Macros
 *      __DATE__ --> The current date as a string literal in "MMM DD YYYY" format
 *      __TIME__ --> The current time as a string literal in "HH:MM:SS" fromat
 *      __FILE__ --> The current filename as a string literal
 *      __LINE__ --> The current line number as an integer
 *      __STDC__ --> The value is 1 when the compiler compiles with the ANSI standard
**********************************************************************************************************************/

