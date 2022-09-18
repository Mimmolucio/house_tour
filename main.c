#include <stdio.h>
#include <string.h>
#include "location.h"
#include "parseAndExecute.h"
#include "objects.h"
#include "helpers.h"

char input[100];

int getInput(void)
{
        printf("\nType here: ");
        return fgets(input, sizeof input, stdin) != NULL;
}

int main(void)
{
        printf("\nWelcome to the tour of my house!\n");

        
        printf("%d objects\n", countObjects());

        printf("what: %s\n",objs[3].tag);

        printf("\nYou are now in %s.\n", objs[2].location->description);
        while (getInput() && parseAndExecute(input))
                ;
        printf("\n\nBye\n\n");
        return 0;
}
