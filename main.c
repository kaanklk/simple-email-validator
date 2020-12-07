#include <stdio.h>
#include <stdlib.h>

#include "email.h"

int main(int argc, char *argv[])
{
    if(argc != 2)
    {
        usage();
        return EXIT_FAILURE;
    }
    valcheck(emailval(argv[1]));
    return 0;
}
