#include <stdio.h>
#include <stdlib.h>

#include "email.h"

void valEmail(email[])
{
    //main loop to check the argument
    for(int i = 0; argv[1][i] != NULL ; i++)
    {
        if(i == 0)
        {
            if(argv[1][i] == '@')
            {
                printf("NOT VALID!\n");
                return EXIT_FAILURE;
            }
            if(argv[1][i] == '.')
            {
                printf("NOT VALID!\n");
                return EXIT_FAILURE;
            }
        }
        if(argv[1][i] == '@')
        {
            if(argv[1][i+1] == '@')
            {
                printf("NOT VALID!\n");
                return EXIT_FAILURE;
            }
            if(argv[1][i+1] == '.')
            {
                printf("NOT VALID!\n");
                return EXIT_FAILURE;
            }
        }
        if(argv[1][i] == 'c')
        {
            if(argv[1][i+1] == 'o')
            {
                if(argv[1][i+2] == 'm')
                {
                    if(argv[1][i+3] == '.')
                    {
                        printf("NOT VALID!\n");
                        return EXIT_FAILURE;
                    }
                    if(argv[1][i+3] == '@')
                    {
                        printf("NOT VALID!\n");
                        return EXIT_FAILURE;
                    }
                }
            }
        }
    }
}
