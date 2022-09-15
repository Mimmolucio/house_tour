#include <stdio.h>
#include "location.h"

char input[100];

int getInput(void)
{
    printf("\nType here: ");
    return fgets(input, sizeof input, stdin) != NULL;
}

int main(void)
{
    struct locations windfang;
    windfang.tag = "windfang";
    windfang.description = "the first room of the house";

    printf("Welcome to the tour of my house!\n");
    printf("\nYou are now in %s.\n", windfang.description);
    while (getInput())
        ;

    return 0;
}