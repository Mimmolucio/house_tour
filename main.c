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

        initializeWindfang();
        printf("Welcome to the tour of my house!\n");
        printf("\nYou are now in %s.\n", getLocation());
        while (getInput())
                ;

        return 0;
}
