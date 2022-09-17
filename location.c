#include <stdio.h>
#include "objects.h"

struct locations
{
        char* tag;
        char* description;
}
locs[] = {
        {"windfang", "first room of the house"},
        {"corridor", "the connecting room" },
        {"toilet", "the guest bathroom"},
        {"kitchen", "the spacious kitchen and dining room"},
        {"living room", "the living room featuring a brown leather couch"},
        {"office", "the tiny office"},
        {"laundry room", "the room with the washing machine and the dryer"}
};



void executeLook()
{
        printf("\nYou see that you are in %s.\n", objs[2].location->description);
};


