#include <stdio.h>
#include "location.h"
#include "parseAndExecute.h"
#include "objects.h"

char input[100];

int getInput(void)
{
        printf("\nType here: ");
        return fgets(input, sizeof input, stdin) != NULL;
}

int main(void)
{
        printf("\nWelcome to the tour of my house!\n");
        printf("\nYou are now in %s.\n", objs[2].location->description);
        while (getInput() && parseAndExecute(input));
        printf("\n\nBye\n\n");
        return 0;
}
