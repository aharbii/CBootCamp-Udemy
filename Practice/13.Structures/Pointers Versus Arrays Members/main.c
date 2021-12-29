#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define MAX_DEMINSIONS 3

typedef struct GuyP
{
    char *name;
    char *job;
    bool active;
    int dimensions;
    double pos[MAX_DEMINSIONS];
} GuyP;

typedef struct GuyA
{
    char *name;
    char job[64];
    bool active;
    int dimensions;
    double pos[MAX_DEMINSIONS];
} GuyA;

int main()
{
    printf("sizeof(GuyP): %lu\n", sizeof(GuyP));
    printf("sizeof(GuyA): %lu\n", sizeof(GuyA));

    GuyP billP = {
        .name = "Bill Gates",
        .job = "I make software...",
        .active = true
    };

    billP.job = "I found Microsoft!";

    GuyA billA = {
        .name = "Bill Gates",
        .job = "I make software...",
        .active = true
    };

    // billA.job = "I found Microsoft!"; // wrong!
    strncpy(billA.job, "I found Microsoft!", (sizeof(billA.job) - 1));

    return 0;
}
