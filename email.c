#include <stdio.h>
#include <stdlib.h>

#include "email.h"

int emailval(char *input){

    if(input == NULL || *input == '\0' ) {
        return EXIT_FAILURE;
    }

    printf("\n\nGiven e-mail input : %s",input);


    for(int i = 0; input[i] != '\0'; i++)
    {
        // checking the first character
        if(input[0] == '@' || input[0] == '.')
        {
            return -1;
        }

        //checking the middle characters
        if(input[i] == '@' || input[i] == '.')
        {
            if(input[i+1] == '@' || input[i+1] == '.')
            {
                return -2;
            }
        }

        //checking the last character.
        if(input[i+1] == '\0')
        {
            if(input[i] == '@' || input[i] == '.'){
                return -3;
            }
        }
    }
    return 0;
}

void usage(){
    printf("To use the program please enter an e-mail as an arguement.\nEx. email_val2.exe <email>");
}

//checking the condition according to return value of emailval() function.

int valcheck(int val){
    if(val == 0){
        printf("\nVALID!");
        return EXIT_SUCCESS;
    }
    if(val == -1){
        printf("\nCheck the first character !");
        return EXIT_FAILURE;
    }
    if(val == -2){
        printf("\nCannot be . beside an @ !");
        return EXIT_FAILURE;
    }
    if(val == -3){
        printf("\nCheck the last character!");
        return EXIT_FAILURE;
    }
    printf("\nSomething went wrong!");
    return EXIT_FAILURE;
}
