#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

#define MAX_DIMENSIONS 3

/* ٍStructure Declaration */
struct GuyStruct
{
    /* data */
    char *name;
    bool active;
    int dimensions;
    double position[MAX_DIMENSIONS]; // in general you cannot use incomplete array, but.... 
                                     // see Flexible Array Member
};

/* Aliasing the type with typedef (anonymous struct) */
typedef struct
{
    /* data */
    char *name;
    bool active;
    int dimensions;
    double position[MAX_DIMENSIONS];
} GuyAnonymous;

/* Aliasing the type with typedef (good practice) */
typedef struct Guy
{
    /* data */
    char *name;
    bool active;
    int dimensions;
    double position[MAX_DIMENSIONS];
    struct Guy *friend;
} Guy;

typedef struct Motorcycle
{
    char *model;
    double speed;
    Guy owner;
} Motorcycle;




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

    Guy elon;

    elon.name = "Elon Musk";
    elon.active = true;
    elon.dimensions = 3;
    elon.position[0] = 1;
    elon.position[1] = 2;
    elon.position[2] = 3;
    
    Guy bill;
    bill.name = "Bill Gates";
    bill.active = true;
    bill.dimensions = 3;
    bill.position[0] = 3;
    bill.position[1] = 2;
    bill.position[2] = 1;

    Motorcycle moto;
    moto.model = "honda";
    moto.speed = 100;
    moto.owner.name = "Andrea";
    

    if (!elon.active || !bill.active)
    {
        printf("%s isn't active!\n", !elon.active ? elon.name : bill.name);
        return -1;
    }

    if (elon.dimensions != bill.dimensions)
    {
        printf("%s and %s are in different dimensions!\n", elon.name, bill.name);
        return -1;
    }
    
    printf("The distance between %s and %s is: %.1f\n", 
            elon.name, bill.name, calc_distance(elon.dimensions, elon.position, bill.position));    

    return 0;
}