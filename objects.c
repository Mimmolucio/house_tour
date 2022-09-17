#include "location.h"

struct objects
{
        char* tag;
        char* description;
        struct locations *location;
}
objs[] = {
        {"keychain", "a small keychain containing the car key and the key to the house", windfang},
        {"sink", "a white ceramic sink below a mirror", toilet},
        {"player", "yourself", windfang}
};

