#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**********************************************************************************************************************
 *  === Move The Rock! ===
 * 
 * Print out the positions the rock can move in the chess game.
 * 
 * Goals:
 *      --> Create a function with there parameters as input:
 *              - The current position as a string (e.g. "d5")
 *              - An array of characters to store possible moves.
 *      --> Store the correct positions in the array, separated by space
 *      --> Implement at least to versions of the algorithm!
**********************************************************************************************************************/

void rock_poor(char current_position[2], char output_buffer[])
{
    
    const char cols[] = "abcdefgh";
    const char rows[] = "12345678";

    char cur_col = current_position[0];
    char cur_row = current_position[1];
    char *dst = output_buffer;

    for (const char *p = cols; *p; p++)
    {
        if (*p != cur_col)
        {
            *dst++ = *p;
            *dst++ = cur_row;
            *dst++ = ' ';
        }
    }

    for (const char *p = rows; *p; p++)
    {
        if (*p != cur_row)
        {
            *dst++ = cur_col;
            *dst++ = *p;
            *dst++ = ' ';
        }
    }

    *dst = '\0';
}

void rock_good(char current_position[], char output_buffer[])
{
    const char cols[] = "abcdefgh";
    const char rows[] = "12345678";

    char cur_col = current_position[0];
    char cur_row = current_position[1];
    char *dst = output_buffer;

    for (const char *c = cols, *r = rows; *c || *r; *c ? c++ : r++)
    {
        if ((*c != cur_col) && (*r != cur_row))
        {
            if ((*c != cur_col) && (*r != cur_row))
            {
                *dst++ = *c ? *c : cur_col;
                *dst++ = *c ? cur_row : *r;
                *dst++ = ' ';
            }
            
        }
    }

    *dst = '\0';
    

}



int main()
{
    char current_position[2];
    printf("Enter current position: ");
    scanf("%s", current_position);
    
    char buffer[100];

    rock_good(current_position, buffer);    

    printf("Current Position: %s\n", current_position);
    printf("You can move to:  %s\n", buffer);

    return 0;
}