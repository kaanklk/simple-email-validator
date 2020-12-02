#include <stdio.h>
#include <stdlib.h>

#include "email.h"

int emailval(char *input){

    if(input == NULL) {
        return EXIT_FAILURE;
    }

    printf("\n\nGiven e-mail input : %s",input);

    //cheking the first variable

    if(input[0] == '@')
    {
        printf("\nNOT VALID!\n");
        return EXIT_FAILURE;
    }
    if(input[0] == '.')
    {
        printf("\nNOT VALID!\n");
        return EXIT_FAILURE;
    }

    for(int i = 1; input[i] != '\0'; i++)
    {

        //checking middle variables.

        if(input[i] == '@')
        {
            if(input[i+1] == '@')
            {
                printf("\nNOT VALID!\n");
                return EXIT_FAILURE;
            }
            if(input[i+1] == '.')
            {
                printf("\nNOT VALID!\n");
                return EXIT_FAILURE;
            }
        }

        if(input[i] == '.')
        {
            if(input[i+1] == '@')
            {
                printf("\nNOT VALID!\n");
                return EXIT_FAILURE;
            }
            if(input[i+1] == '.')
            {
                printf("\nNOT VALID!\n");
                return EXIT_FAILURE;
            }
        }

        //checking last variable.

        if(input[i+1] == '\0')
        {
            if(input[i] == '@'){
                printf("\nNOT VALID!\n");
                return EXIT_FAILURE;
            }
            if(input[i] == '.'){
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
