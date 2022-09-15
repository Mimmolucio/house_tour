#include <stdio.h>



struct locations loc1;
struct locations loc2;

strcpy(loc1.tag, "windfang");
strcpy(loc1.description, "the first room");

strcpy(loc2.tag, "corridor");
strcpy(loc2.description, "connecting all the other rooms");


char* getLocation(int nmbr) {
    return locs[nmbr].tag;
}