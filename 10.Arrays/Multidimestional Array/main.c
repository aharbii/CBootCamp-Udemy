#include <stdio.h>
#include <stdlib.h>

#define LEN 5
#define N_ROWS 3
#define N_COLS 4
#define N_LAYERS 5

int main() 
{   
    int array[LEN] = {1, 2, 3, 4, 5};                       // 1-D Array
    int matrix[N_ROWS][N_COLS] = 
    {
        {11, 12, 13, 14},
        {21, 22, 23, 24},
        {31, 32, 33, 34}
    };                                    // 2-D Array n = N_ROWS * N_COLS
    int tensor[N_LAYERS][N_ROWS][N_COLS] = 
    {
        {
            {111, 112, 113, 114},
            {121, 122, 123, 124},
            {131, 132, 133, 134},
        },
        {
            {211, 212, 213, 214},
            {221, 222, 223, 224},
            {231, 232, 233, 234},
        },
        {
            {311, 312, 313, 314},
            {321, 322, 323, 324},
            {331, 332, 333, 334},
        },
        {
            {411, 412, 413, 414},
            {421, 422, 423, 424},
            {431, 432, 433, 434},
        },
        {
            {511, 512, 513, 514},
            {521, 522, 523, 524},
            {531, 532, 533, 534},
        }
    };                                    // 3-D Array n = N_ROWS * N_COLS * N_LAYERS

    for (int i = 0; i < LEN; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\n\n---------\n\n");
    for (int i = 0; i < N_ROWS; i++)
    {
        for (int j = 0; j < N_COLS; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\n\n---------\n\n");
    for (int i = 0; i < N_LAYERS; i++)
    {
        for (int j = 0; j < N_ROWS; j++)
        {
            for (int k = 0; k < N_COLS; k++)
            {
                printf("%3d ", tensor[i][j][k]);
            }
            printf("\n"); 
        }
        printf("\n");
    }
    
    
    
    
    return 0;
}