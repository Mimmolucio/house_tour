#define windfang        &locs[0]
#define corridor        &locs[1]
#define toilet          &locs[2]
#define kitchen         &locs[3]
#define living_room     &locs[4]
#define office          &locs[5]
#define laundry_room    &locs[6]

char*  getLocation();

void executeLook();

extern struct locations
{
        char* tag;
        char* description;
}locs[];
