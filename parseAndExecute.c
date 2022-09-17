#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "location.h"


bool parseAndExecute(char* input) {
        char* verb = strtok(input, "\n");

        if (strcmp(verb, "quit") == 0|| strcmp(verb, "q") == 0)
        {
        return false;
        }
        else if (strcmp(verb, "look") == 0)
        {
                executeLook();
        }
};
