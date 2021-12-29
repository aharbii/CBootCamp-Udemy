#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

double calc_distance(int dimensions, double a[dimensions], double b[dimensions])
{
    double square_distance = 0;
    for (int i = 0; i < dimensions; i++)
    {
        square_distance += pow((a[i] - b[i]), 2);
    }
    
    square_distance = sqrt(square_distance);
    return square_distance;
}

int main()
{
    char elon_name[] = "Elon Musk";
    bool elon_active = true;
    int elon_dimensions = 3;
    double elon_position[] = {1, 2, 3};

    char bill_name[] = "Bill Gates";
    bool bill_active = true;
    int bill_dimensions = 2;
    double bill_position[] = {3, 2, 1};
    
    if (!elon_active || !bill_active)
    {
        printf("%s isn't active!\n", !elon_active ? elon_name : bill_name);
        return -1;
    }

    if (elon_dimensions != bill_dimensions)
    {
        printf("%s and %s are in different dimensions!\n", elon_name, bill_name);
        return -1;
    }
    
    printf("The distance between %s and %s is: %.1f\n", 
            elon_name, bill_name, calc_distance(elon_dimensions, elon_position, bill_position));    

    return 0;
}