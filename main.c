#include <stdio.h>
#include <stdlib.h>

int main(int argc[], char *argv[])
{
    printf("Given input to check is : %s\n",argv[1]);

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
    }
        printf("\nVALID!\n");
        return EXIT_SUCCESS;
}

