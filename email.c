#include <stdio.h>
#include <stdlib.h>

#include "email.h"

int emailval(int argc, char *argv[]){

    printf("\n\nGiven e-mail input : %s",argv[1]);

    for(int i = 0; argv[1][i] != NULL ; i++)
    {

        //checking first variable

        if(i == 0)
        {
            if(argv[1][i] == '@')
            {
                printf("\nNOT VALID!\n");
                return EXIT_FAILURE;
            }
            if(argv[1][i] == '.')
            {
                printf("\nNOT VALID!\n");
                return EXIT_FAILURE;
            }
        }

        //checking other variables

        if(argv[1][i] == '@')
        {
            if(argv[1][i+1] == '@')
            {
                printf("\nNOT VALID!\n");
                return EXIT_FAILURE;
            }
            if(argv[1][i+1] == '.')
            {
                printf("\nNOT VALID!\n");
                return EXIT_FAILURE;
            }
        }

        //checking last variable.

        if(argv[1][i+1] == NULL)
        {
            if(argv[1][i] == '@'){
                printf("\nNOT VALID!\n");
                return EXIT_FAILURE;
            }
            if(argv[1][i] == '.'){
                printf("\nNOT VALID!\n");
                return EXIT_FAILURE;
            }
        }
    }
    printf("\nVALID!\n");
    return EXIT_SUCCESS;
}

void usage(){
    printf("To use the program please enter an e-mail as an arguement.\nEx. email_val2.exe <email>");
}
