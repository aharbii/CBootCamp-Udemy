#include <stdio.h>
#include <stdlib.h>

/**********************************************************
 * goto identifier;
 *      --> Immediately jump to identifier label.
 *      --> Unconditional jump.
 * 
 * Uses: 
 *      --> Break out of nested loops.
 *      --> Error handling, cleanup resources at the
 *          end of a procedure.
**********************************************************/

int main()
{

    /* Break out of nested loops */
 
    // for (int i = 0; i < MAX_I; i++)
    // {
    //     for (int j = 0; j < MAX_J; j++)
    //     {
    //         for (int k = 0; k < MAX_K; k++)
    //         {
    //             if (break_condition)
    //             {
    //                 goto final; 
    //             }
                
    //         }
            
    //     }
    // }

    // final:
    //     /* resume here */

    printf("----------------------------------------\n");
    
    /* Error Handling */
    // status = do_something();
    // if (status == ERROR)
    // {
    //     goto cleanup;
    // }

    // /* do_something succeeded */
    // /* procedure code */

    // cleanup:
    //     /* cleanup code */
    
    return 0;
}