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
    printf("Welcome to the tour of my house!\n");
    printf("\nYou are at the moment in %s.\n", getLocation(0));
    while (getInput());
    return 0;
}