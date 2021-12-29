#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MAX_DIMENSIONS 3
typedef struct Guy
{
    char *name;
    bool active;
    int dimensions;
    double positions[MAX_DIMENSIONS];
    struct Guy *friend;
} Guy;

Guy create_bill()
{
    return (Guy) {
        .name = "Bill Gates",
        .active = true,
        .dimensions = 3,
        .positions = {3, 2, 1}
    };
}

Guy *alloc_elon()
{
    Guy *elon = malloc(sizeof(Guy));
    if (!elon)
    {
        return NULL;
    }

    elon->name = "Elon Musk";
    elon->active = true;
    elon->dimensions = 3;
    // elon->positions[0] = 1;

    double pos[] = {1, 2, 3};
    memcpy(elon->positions, pos, sizeof(pos));

    return elon;
}

void deactivate_guy(Guy g)
{
    /* Make a copy of Guy and will not affect its value */
    g.active = false;
}

void deactivate_guy_ptr(Guy *pg)
{
    pg->active = false;
}

int main()
{
    Guy bill = create_bill();
    bill.friend = alloc_elon();

    deactivate_guy(bill);
    deactivate_guy_ptr(&bill);
    return 0;
}