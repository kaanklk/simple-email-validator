#include <stdio.h>
#include <stdlib.h>

#include "email.h"

int main(int argc, char *argv[])
{
    //making null-safe
    if(argc != 2)
    {
        printf("Not enough arguments!\nExiting...");
        return EXIT_FAILURE;
    }

    printf("Given input to check is : %s\n",argv[1]);

    valEmail(argv[1]);


    printf("\nVALID!\n");
    return EXIT_SUCCESS;
}
