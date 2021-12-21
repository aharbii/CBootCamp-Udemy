#include <stdio.h>
#include <stdlib.h>

// Array: an ordered collection of items if the same type.

int main()
{

    float io_1, io_2, io_3, io_4, io_5;
    int io_count = 0;
    const int max_io_count = 5;

    while ((io_count >= 0) && (io_count < max_io_count))
    {
        float value;
        printf("Insert an amount of money (0 to end):\n");
        printf("[%d/%d]", io_count + 1, max_io_count);
        scanf("%f", &value);

        if (value == 0)
        {
            break;
        }

        io_count++;

        switch (io_count)
        {
        case 1:
            io_1 = value;
            break;
        case 2:
            io_2 = value;
            break;
        case 3:
            io_3 = value;
            break;
        case 4:
            io_4 = value;
            break;
        case 5:
            io_5 = value;
            break;
        default:
            printf("Unexpected io_count value!\n");
            break;
        }
        
    }

    printf("---------------------------------------\n");
    switch (io_count)
    {
    case 5:
        printf(" 5 | %9.2f $\n", io_5);
    case 4:
        printf(" 4 | %9.2f $\n", io_4);
    case 3:
        printf(" 3 | %9.2f $\n", io_3);
    case 2:
        printf(" 2 | %9.2f $\n", io_2);
    case 1:
        printf(" 1 | %9.2f $\n", io_1);
        break;
    default:
        printf("Nothing to print!\n");
        break;
    }
    /* print the total */
    


    return EXIT_SUCCESS;
}