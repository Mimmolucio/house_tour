#include <string.h>
#include <stdio.h>
#include "location.h"
#include "objects.h"


int countLocations()
{
    int counter = 0;
    int i = 0;
    while (strcmp(locs[i].tag, "end") != 0)
    {
        counter++;
        i++;
    }
    return counter;
}

int countObjects()
{
    int counter = 0;
    int i = 0;
    while (strcmp(objs[i].tag, "end") != 0)
    {
        counter++;
        i++;
    }
    return counter;
}

void executeLook()
{
        printf("\nYou see that you are in %s.\n", objs[2].location->description);
}