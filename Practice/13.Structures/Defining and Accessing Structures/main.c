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

    /* Implicit initialization */
    Guy elon = {
        "Elon Musk",
        true,
        3,
        {1, 2, 3}
    };

    /* Explicit initialization */
    Guy bill = {
        .name = "Bill Gates",
        .position = {3, 2, 1},
        .dimensions = 3,
        .active = true,
    };

    Motorcycle moto =  {
        .model = "honda",
        .speed = 100,
        .owner = {
            .name = "Andrea",
            .dimensions = 3,
            .active = true,
            .position = {0, 0, 0}
        }
    };

    /* Copy a whole structure with = */
    Guy anotherGuy = {.name = "someone", .active = false};
    anotherGuy = bill;
    
    printf("anotherGuy.name = %s\n", anotherGuy.name);

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

    printf("And %s motocycle is running at %.1f km/h and is driven by %s\n",
            moto.model, moto.speed, moto.owner.name);

    moto = (Motorcycle) {.model = "Ducati", .speed = 200};

    printf("And %s motocycle is running at %.1f km/h and is driven by %s\n",
            moto.model, moto.speed, moto.owner.name);
            
    return 0;
}